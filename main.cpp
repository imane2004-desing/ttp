#include <iostream>
#include <vector>
using namespace std;

// Fonction pour trouver l'�l�ment unique dans un tableau
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

    // Affichage du tableau d'entr�e
    cout << "Entr�e : [";
    for (int i = 0; i < tableau.size(); i++) {
        cout << tableau[i];
        if (i < tableau.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Appel de la fonction pour trouver l'�l�ment unique
    int resultat = trouverElementUnique(tableau);

    // Affichage du r�sultat
    cout << "Sortie : Le nombre unique est " << resultat << endl;

    return 0;
}
