# Module CPP 07

Ce module introduit la **Métaprogrammation** en C++ avec les **Templates**. Les templates permettent d'écrire du code générique et réutilisable qui fonctionne avec n'importe quel type de donnée (primitif ou objet complet). 

Le compilateur se chargera lui-même de générer les versions spécifiques des fonctions et des classes selon les types qui seront utilisés dans le code !

## 1. Templates de fonctions (`ex00` et `ex01`)
Les templates de fonctions permettent de coder l'algorithme une seule fois pour tous les types.
Dans l'**ex00**, nous définissons des templates basiques `swap`, `min` et `max`. 
- **Attention au `const T&`** : En C++, pour permettre le passage de littéraux (ex: `min(42, 21)`), il est obligatoire d'utiliser `const T&` (une référence constante) car un littéral (rvalue) ne peut pas être lié à une référence simple.
Dans l'**ex01**, nous implémentons `iter`, qui applique une fonction donnée sur tous les éléments d'un tableau, en se basant sur un modèle générique.

## 2. Templates de classes (`ex02`)
Dans l'**ex02**, nous avons créé une classe `Array` générique, capable de stocker n'importe quel type (`int`, `std::string`, `Bureaucrat`, etc.).
- Les classes template requièrent généralement que leur déclaration **et** leur définition soient dans le même fichier, ou que le `.cpp` (souvent nommé `.tpp` ou `.ipp`) soit inclus directement dans le header.
- **Allocation sûre** : L'implémentation robuste que nous avons écrite évite les comportements non optimisés (comme l'appel coûteux à `new T[0]`) et sécurise l'accès mémoire avec des exceptions personnalisées (ex: accès hors-limites).

## Modifications apportées
- Passage aux références constantes `const T&` pour `min` et `max` (ex00) afin de respecter la norme C++ et d'accepter les littéraux en arguments.
- Ajout d'une protection dans le constructeur et l'opérateur d'assignation de `Array` (ex02) pour définir explicitement `_array` à `NULL` lorsque la taille est de `0`, plutôt que d'allouer inutilement un tableau de 0 élément.
