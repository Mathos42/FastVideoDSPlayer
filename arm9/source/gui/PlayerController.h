#pragma once

#include "core/PadInputProvider.h"
#include "core/InputRepeater.h"
#include "../FastVideo/fvPlayer.h"
#include "PlayerView.h"

class PlayerController
{
public:
    enum NavAction
    {
        NAV_ACTION_NONE,
        NAV_ACTION_NEXT,
        NAV_ACTION_PREV,
        NAV_ACTION_EXIT
    };

private:
    enum SubScreenState
    {
        SUB_SCREEN_STATE_ACTIVE,
        SUB_SCREEN_STATE_DIMMING,
        SUB_SCREEN_STATE_OFF
    };

    SubScreenState _subScreenState;
    int _subScreenStateCounter;
    bool _subBacklightOff;

    int _dimWaitFrames;
    int _dimFadeFrames;
    u32 _invDimFadeFrames;

    fv_player_t* _player;
    bool _playing;
    u32 _seekKeyFrame;
    u32 _lastTime;

    bool _seekPenDown;
    bool _playPausePenDown;
    int _seekLastFrame;

    PadInputProvider _inputProvider;
    InputRepeater _inputRepeater;

    PlayerView _view;

    NavAction _pendingNavAction;

    void TogglePlayPause();

    void UpdateTouch();
    void UpdateKeys();
    void UpdateDim();

public:
    PlayerController(fv_player_t* player);

    void Initialize();

    // Returns NAV_ACTION_NEXT/NAV_ACTION_PREV if the user requested to
    // switch videos this frame (L = previous, R = next), NAV_ACTION_EXIT
    // if the user requested to quit (B), NAV_ACTION_NONE otherwise. The
    // caller is expected to stop calling Update() on this controller and
    // handle the request (load the new video / exit) when this returns
    // non-none.
    NavAction Update();
};
