#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// Fonction qui ve´rifie si la matrice est une permutation
bool estPermutation(const vector<vector<int>>& matrice) {
    int n = matrice.size();
    int nCarre = n * n;

    // Tableau pour marquer les nombres trouve´s
    bool nombresTrouves[nCarre + 1];
    memset(nombresTrouves, false, sizeof(nombresTrouves));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nombre = matrice[i][j];

            if (nombre < 1 || nombre > nCarre) {
                return false;  // Le nombre doit e^tre entre 1 et n^2
            }

            if (nombresTrouves[nombre]) {
                return false;  // Le nombre est de´ja` trouve´
            }

            nombresTrouves[nombre] = true;
        }
    }

    for (int i = 1; i <= nCarre; i++) {
        if (!nombresTrouves[i]) {
            return false;  // Un nombre est manquant
        }
    }

    return true;
}

// Fonction pour afficher une matrice
void afficherMatrice(const vector<vector<int>>& matrice) {
    for (const auto& ligne : matrice) {
        for (int valeur : ligne) {
            printf("%2d ", valeur);
        }
        cout << endl;
    }
}

int main() {
    // Matrice valide
    vector<vector<int>> matrice = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    cout << "Entre´e :" << endl;
    afficherMatrice(matrice);

    cout << "\nSortie :" << endl;
    if (estPermutation(matrice)) {
        cout << "C'est une permutation." << endl;
    } else {
        cout << "Ce n'est pas une permutation." << endl;
    }

    // Matrice non valide
    vector<vector<int>> matriceNonValide = { {1, 2, 3}, {4, 5, 5}, {7, 8, 9} };

    cout << "\nTest avec une matrice non valide :" << endl;
    afficherMatrice(matriceNonValide);
    cout << "\nSortie :" << endl;
    if (estPermutation(matriceNonValide)) {
        cout << "C'est une permutation." << endl;
    } else {
        cout << "Ce n'est pas une permutation." << endl;
    }

    return 0;
}
