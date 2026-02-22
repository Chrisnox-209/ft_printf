# 📚 ft_printf — Réimplémentation du printf standard (42 Project)

## 🎯 Objectif du projet

Ce projet consiste à coder une version simplifiée et totalement autonome de la fonction `printf` de la libc.
Le but : comprendre en profondeur comment fonctionnent les conversions, la gestion de la sortie standard, le formattage, et la manipulation de types variés en C.
Le programme repose uniquement sur l’utilisation de `write()` et de fonctions personnelles, conformément aux règles de l’école 42.

---

## 🧩 Fonctionnalités prises en charge

`ft_printf` gère l’affichage de différents types grâce à un système de conversions :

### 🔠 Conversions de base
- `%c` — Affiche un caractère
- `%s` — Affiche une chaîne
- `%d` / `%i` — Affiche un entier signé
- `%u` — Affiche un entier non signé

### 🔢 Formatage numérique avancé
- `%x` — Entier formaté en hexadécimal minuscule
- `%X` — Entier formaté en hexadécimal majuscule

### 🧭 Pointeurs
- `%p` — Adresse mémoire au format hexadécimal préfixée par `0x`

### 🔁 Littéral
- `%%` — Affiche un pourcentage

---

## 📁 Structure

```
ft_printf/
├── include/
│   └── ft_printf.h
├── libftprintf.a
├── main.c
├── Makefile
└── src/
    ├── ft_check.c
    ├── ft_printf.c
    ├── ft_putchar.c
    ├── ft_putnbr.c
    ├── ft_putnbr_unsigned.c
    └── ft_putstr.c
```
---

## 🧠 Comment ça fonctionne ?

`ft_printf` analyse la chaîne de format caractère par caractère.
Quand il rencontre `%`, il récupère la lettre suivante pour déterminer quel type afficher.

Chaque conversion est déléguée à une fonction dédiée :

- Les caractères et chaînes utilisent directement `write()`.
- Les nombres sont affichés via des fonctions récursives qui découpent les chiffres un par un.
- Les hexadécimaux reposent sur une base (`"0123456789abcdef"` ou `"0123456789ABCDEF"`).
- L'adresse mémoire est convertie en `unsigned long long`, puis affichée en hexadécimal précédée de `0x`.

Chaque appel ajoute à un compteur le nombre total de caractères écrits, exactement comme le vrai `printf`.

---

## 📚 Concepts essentiels

- Parsing de chaînes
- Gestion des arguments variadiques (`stdarg.h`)
- Conversion de types
- Affichage récursif
- Manipulation d’adresses mémoire
- Respect strict de la Norme 42

---

## 🛡️ Limitations imposées par le projet

- Aucune utilisation de `printf`, `itoa`, `sprintf`, etc.
- Interdiction d’allouer dynamiquement (sauf cas indirect via libft).
- Une seule fonction autorisée : `write()`.
- Fonctionnement identique au vrai printf pour les conversions demandées.

---

## ⚠️ Disclaimer (Note Pédagogique 42)

Ce dépôt est rendu **public uniquement à titre pédagogique**.

Conformément à l'esprit et aux règles de l'école 42, l'utilisation de ce code (copie, plagiat, ou soumission) est **strictement interdite** et peut entraîner la disqualification ou l'échec de votre propre projet. Il est destiné à servir d'exemple de structure et de documentation, mais ne doit en aucun cas être utilisé pour valider votre propre `libft`.

**Apprenez par vous-même !**

---

## 👤 Auteur

* **Nom** : PIETRZAK Christophe
* **42 email** : cpietrza@student.42lyon.fr

## 🏆 NOTE
<img src="https://raw.githubusercontent.com/Chrisnox-209/ft_printf/refs/heads/main/note.png" alt="Note printf 42 Lyon" style="display:block; margin:auto;">
