# Simple Arduino Exercices

Collection de petits projets Arduino : feux tricolores, chenillard, capteur de distance et hygromètre.

## Projets

### 1. Feux Tricolore (`Feux_Tricolore/`)

Simulation de feux tricolores pour carrefour à deux voies avec 6 LEDs (2 rouges, 2 oranges, 2 vertes). Cycle de 12 secondes alternant entre les deux voies.

| Étape | Durée | Voie 1 | Voie 2 |
|-------|-------|--------|--------|
| 1 | 5 s | Rouge | Vert |
| 2 | 1 s | Rouge | Orange |
| 3 | 5 s | Vert | Rouge |
| 4 | 1 s | Orange | Rouge |

**Brochage :** LEDs sur broches 2-4, 11-13.  
**Fichier :** `feux_tricolor-2.ino` — aucune dépendance.

### 2. Chenillard (`Chenillard/`)

Chenillard à 9 LEDs (broches 2 à 10) qui s'allument une par une en séquence de la broche 9 à la broche 1, puis boucle.

**Fichier :** `chenillard.ino` — aucune dépendance.

### 3. HC-SR04 Chenillard (`HC-SR04_chenillard/`)

Chenillard à 9 LEDs piloté par un capteur ultrason HC-SR04. La distance mesurée détermine quelle LED s'allume (tranches de ~2,2 cm jusqu'à 18 cm).

**Brochage :** LEDs sur broches 2-10, HC-SR04 sur Trigger=12, Echo=13.  
**Dépendance :** bibliothèque [HCSR04](https://www.arduino.cc/reference/en/libraries/hcsr04/).  
**Fichier :** `capteur_chenillard_continu.ino`

### 4. Hygromètre (`Hygrometre/`)

Système de mesure d'humidité du sol avec transmission série entre deux cartes Arduino :

- **Émetteur** (`emetteur_arduino_carte/`) : lit l'humidité sur A1 et l'envoie sur le port série.
- **Récepteur** (`recepteur_arduino_carte/`) : reçoit la valeur et actionne un servo (broche 9) et un buzzer (broche 2) proportionnellement à l'humidité.

**Dépendance :** bibliothèque [Servo](https://www.arduino.cc/reference/en/libraries/servo/).

## Structure du dépôt

```
Simple_Arduino_Exercices/
├── Feux_Tricolore/
│   ├── feux_tricolor-2.ino
│   ├── feux_tricolor-2.png
│   └── feux_tricolor-2.mp4
├── Chenillard/
│   ├── chenillard.ino
│   └── chenillard.png
├── HC-SR04_chenillard/
│   ├── capteur_chenillard_continu.ino
│   └── capteur_chenillard.png
└── Hygrometre/
    ├── emetteur_arduino_carte/
    │   └── emetteur_arduino_carte.ino
    ├── recepteur_arduino_carte/
    │   └── recepteur_arduino_carte.ino
    └── schemas.png
```

## Utilisation

1. Ouvrir le fichier `.ino` du projet souhaité dans l'IDE Arduino.
2. Brancher la carte et sélectionner le bon port.
3. Installer les dépendances si nécessaire (via le gestionnaire de bibliothèques).
4. Téléverser le sketch.

## Auteur

**YaogoGerard**
