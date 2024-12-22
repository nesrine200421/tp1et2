#include <iostream>
using namespace std;

void convertir() {
    int choix;
    double km, miles;

    cout << "Choisissez une conversion :\n1. Kilomètres vers Miles\n2. Miles vers Kilomètres\n";
    cin >> choix;

    if (choix == 1) {
        cout << "Entrez la distance en kilomètres : ";
        cin >> km;
        miles = km / 1.609;
        cout << km << " km = " << miles << " miles\n";
    } else if (choix == 2) {
        cout << "Entrez la distance en miles : ";
        cin >> miles;
        km = miles * 1.609;
        cout << miles << " miles = " << km << " km\n";
    } else {
        cout << "Choix invalide.\n";
    }
}

int main() {
    convertir();
    return 0;
}
