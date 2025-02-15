# 🔢 C++ - Module 02

## 📝 Présentation

Le module **C++ 02** introduit des concepts avancés comme le **polymorphisme**, la **surcharge d’opérateurs** et la **forme canonique de Coplien**.  
L’objectif est d’améliorer la manipulation des objets en **C++98** et de renforcer les bonnes pratiques en programmation orientée objet.

---

## 🛠️ Fonctionnalités

- **Exercice 00 : Mon premier canon**
  - Implémentation d’une classe `Fixed` sous **forme canonique**.
  - Gestion d’un **nombre à virgule fixe** stocké sous forme d’entier.
  - Ajout de méthodes `getRawBits()` et `setRawBits()`.

- **Exercice 01 : Premiers pas vers une classe utile**
  - Ajout de **constructeurs supplémentaires** (entier et flottant).
  - Conversion entre **entiers, flottants et nombres à virgule fixe**.
  - Surcharge de l’**opérateur d’insertion `<<`**.

- **Exercice 02 : Maintenant, on peut parler**
  - **Surcharge des opérateurs de comparaison** (`>`, `<`, `>=`, `<=`, `==`, `!=`).
  - **Surcharge des opérateurs arithmétiques** (`+`, `-`, `*`, `/`).
  - **Surcharge des opérateurs d’incrémentation et de décrémentation** (`++`, `--`).
  - Ajout des fonctions statiques `min()` et `max()`.

- **Exercice 03 : BSP (Binary Space Partitioning)**
  - Création d’une classe `Point` pour représenter un point 2D.
  - Utilisation de `Fixed` pour stocker les coordonnées.
  - Implémentation de la fonction `bsp()` pour vérifier si un point est **dans un triangle**.

---

## 📌 Technologies Utilisées

- **C++ 98**  
- **Surcharge d’opérateurs**  
- **Forme canonique de Coplien**  
- **Gestion des nombres à virgule fixe**  
- **Comparaisons et manipulations d’objets**  

---

## 🏗️ Structure du Projet

📂 ex00  
┣ 📜 Fixed.cpp  
┣ 📜 Fixed.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex01  
┣ 📜 Fixed.cpp  
┣ 📜 Fixed.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex02  
┣ 📜 Fixed.cpp  
┣ 📜 Fixed.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex03  
┣ 📜 Fixed.cpp  
┣ 📜 Fixed.hpp  
┣ 📜 Makefile  
┣ 📜 Point.cpp  
┣ 📜 Point.hpp  
┣ 📜 bsp.cpp  
┗ 📜 main.cpp  

---

## 🔥 Difficultés Rencontrées

- **Implémentation de la forme canonique** : Bien comprendre les **constructeurs, destructeurs et opérateurs**.  
- **Manipulation des nombres à virgule fixe** : Gérer la conversion entre **entiers et flottants**.  
- **Surcharge d’opérateurs** : Assurer la **cohérence mathématique et logique** des opérations.  
- **Gestion de la mémoire** : Éviter les **fuites mémoire** avec `new` et `delete`.  
- **Vérification de l’appartenance à un triangle** : Implémenter `bsp()` avec une approche mathématique fiable.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :  
  ```bash
  git clone https://github.com/ton-repo/cpp02.git
  cd cpp02
  ```

2. **Compiler et exécuter chaque exercice** :

**Exercice 00** :   
   ```bash
   cd ex00
   make
   ./fixed
   make fclean
   ```

**Exercice 01** :  
  ```bash
   cd ex01
   make
   ./fixed
   make fclean
   ```

**Exercice 02** :  
   ```bash
   cd ex02
   make
   ./fixed
   make fclean
   ```

**Exercice 03** :  
   ```bash
   cd ex03
   make
   ./bsp
   make fclean
   ```

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
