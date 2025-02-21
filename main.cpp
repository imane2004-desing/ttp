#include <iostream>
#include <vector>
using namespace std;

// Fonction pour trouver l'élément unique dans un tableau
int trouverElementUnique(const vector<int>& tableau) {
    for (int i = 0; i < tableau.size(); i++) {
        bool trouve = false;
        for (int j = 0; j < tableau.size(); j++) {
            if (i != j && tableau[i] == tableau[j]) {
                trouve = true;
                break;
            }
        }
        if (!trouve) {
            return tableau[i];
        }
    }
    return -1;
}

int main() {
    vector<int> tableau = {1, 2, 3, 2, 1};

    // Affichage du tableau d'entrée
    cout << "Entrée : [";
    for (int i = 0; i < tableau.size(); i++) {
        cout << tableau[i];
        if (i < tableau.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Appel de la fonction pour trouver l'élément unique
    int resultat = trouverElementUnique(tableau);

    // Affichage du résultat
    cout << "Sortie : Le nombre unique est " << resultat << endl;

    return 0;
}
