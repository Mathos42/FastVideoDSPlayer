FastVideoDSPlayer 2
===================
Lecteur pour le format FastVideoDS. Sur votre carte SD avec TWiLight Menu++ d'installé, mettre le fichier FastVideoDS.nds dans "_nds\apps" puis lancez vos vidéos. Utilisez [FastVideoDS Encoder](https://github.com/Gericom/FastVideoDSEncoder) pour encoder vos vidéos.

## Caractéristiques
- Prise en charge des vidéos longues
- Lecture fluide grâce à l'ajustement de la fréquence de rafraîchissement de l'écran LCD à un multiple entier de la fréquence d'images
- Prise en charge jusqu'à 60 images par seconde sur DSi (environ 30 images par seconde sur DS)
- Utilise le moteur 3D pour la compensation de mouvement
- Charge les données depuis la carte SD et décode l'audio sur le processeur ARM7 tandis que le processeur ARM9 est entièrement disponible pour le décodage vidéo
- Prise en charge d'Argv (à utiliser avec TWiLight Menu++ par exemple)
- Commandes vidéo : lecture/pause, vidéo suivante, précédente, lecture automatique de la vidéo suivante dans le répertoire et recherche par image clé
- Désactive le rétroéclairage de l'écran inférieur pendant la lecture pour économiser de l'énergie

## Contrôles
### Boutons
- A - Lecture/pause
- Dpad gauche - Passer à l'image clé précédente (maintenir enfoncé pour continuer)
- Dpad droit - Passer à l'image clé suivante (maintenir enfoncé pour continuer)
- L/Y - Vidéo précédente
- R/X - Vidéo suivante
- B - Retour à la liste des vidéos

### Toucher
L'écran tactile permet de lancer ou de mettre en pause la vidéo, ainsi que de se déplacer dans la vidéo en appuyant ou en faisant glisser la barre de défilement.

## Libraries Utilisées
- [FatFS](http://elm-chan.org/fsw/ff/00index_e.html)
