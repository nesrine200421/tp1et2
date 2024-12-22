#include <iostream>
using namespace std;

int main() {
    int choix;
    double num1, num2, resultat;

    do {
        cout << "********** CALCULATRICE **********" << endl;
        cout << "* 1. Addition                  **" << endl;
        cout << "* 2. Multiplication            **" << endl;
        cout << "* 3. Soustraction              **" << endl;
        cout << "* 4. Division                  **" << endl;
        cout << "* 5. Quitter                   **" << endl;
        cout << "**********************************" << endl;
        cout << "Operation? ";
        cin >> choix;

        if (choix >= 1 && choix <= 4) {
            cout << "Entrez le premier nombre : ";
            cin >> num1;
            cout << "Entrez le second nombre : ";
            cin >> num2;

            switch (choix) {
                case 1:
                    resultat = num1 + num2;
                    cout << "Resultat de l'addition : " << resultat << endl;
                    break;
                case 2:
                    resultat = num1 * num2;
                    cout << "Resultat de la multiplication : " << resultat << endl;
                    break;
                case 3:
                    resultat = num1 - num2;
                    cout << "Resultat de la soustraction : " << resultat << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        resultat = num1 / num2;
                        cout << "Resultat de la division : " << resultat << endl;
                    } else {
                        cout << "Erreur : Division par zero !" << endl;
                    }
                    break;
            }
        } else if (choix == 5) {
            cout << "Au revoir !" << endl;
        } else {
            cout << "Choix invalide, reessayez !" << endl;
        }
    } while (choix != 5);

    return 0;
}
