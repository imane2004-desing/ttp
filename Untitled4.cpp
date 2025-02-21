#include <iostream>
using namespace std;

// Fonction qui ve´rifie si un nombre est pair
bool estPair(int nombre) {
    return nombre % 2 == 0;
}

// Fonction qui e´change deux e´le´ments dans un tableau
void echanger(int tableau[], int i, int j) {
    int temp = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = temp;
}

// Fonction qui trie les e´le´ments pairs et impairs
void trierPairImpair(int tableau[], int taille) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche < droite) {
        // Avance jusqu'a` trouver un nombre impair depuis la gauche
        while (gauche < droite && estPair(tableau[gauche])) {
            gauche++;
        }

        // Recule jusqu'a` trouver un nombre pair depuis la droite
        while (gauche < droite && !estPair(tableau[droite])) {
            droite--;
        }

        // Si on n'a pas croise´ les indices, on e´change les e´le´ments
        if (gauche < droite) {
            echanger(tableau, gauche, droite);
        }
    }
}

// Fonction pour afficher un tableau
void afficherTableau(int tableau[], int taille) {
    cout << "[";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i];
        if (i < taille - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

// Programme principal
int main() {
    // Initialisation du tableau
    int tableau[] = {3, 8, 5, 2, 4, 7};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Affichage du tableau initial
    cout << "Entre´e : ";
    afficherTableau(tableau, taille);

    // Tri des e´le´ments pairs et impairs
    trierPairImpair(tableau, taille);

    // Affichage du re´sultat
    cout << "Sortie : ";
    afficherTableau(tableau, taille);

    return 0;
}
