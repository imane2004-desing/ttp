#include <iostream>
#include <vector>
using namespace std;

void trouverPaires(int tableau[], int taille, int somme) {
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tableau[i] + tableau[j] == somme) {
                cout << "(" << tableau[i] << "," << tableau[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int tableau[] = {1, 4, 6, 2, 3, 5, 7};
    int sommeCible = 7;
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    cout << "Entre´e : Tableau [";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i];
        if (i < taille - 1) {
            cout << ", ";
        }
    }
    cout << "], Somme cible = " << sommeCible << endl;

    cout << "Sortie : " << endl;
    trouverPaires(tableau, taille, sommeCible);

    return 0;
}
