// Fichier     exercice 03-10
// Auteur      Elbunita
// Date        22.09.23
//
// But         Programme permettant de calculer le volume en litre d'une
//             boutielle. Les valeurs des mesures sont rentrées par l'utilisateur.
//


#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
    const double valPi = 3.14;
    const double cm3ToLitre = 1E-3; // 1 litre = 1000 cm3
    double r1, h1, // rayon et hauteur du cylindre du bas
            r2, h2, // rayon et hauteur du cylindre du haut
            h3 = 0; // hauteur cône

    cout << "Entrer le rayon et la hauteur du cylindre du bas: " << endl;
    cin >> r1 >> h1;
    cout << endl;

    cout << "Entrer le rayon et la hauteur du cylindre du haut: " << endl;
    cin >>r2 >> h2;
    cout << endl;

    cout << "Entrer la hauteur du cône tronqué: " << endl;
    cin  >> h3;
    cout << endl;


    double v1, v2, v3, vTot = 0;

    v1 = valPi * r1 * r1 * h1;
    v2 = valPi * r2 * r2 * h2;
    v3 = h3 * valPi * (r1 * r1 + r2 * r2 + r1 * r2) / 3;

    vTot = (v1 + v2 + v3) * cm3ToLitre;

    cout << "Le volume en litre de la bouteille est de: " << vTot;

    return EXIT_SUCCESS;
}
