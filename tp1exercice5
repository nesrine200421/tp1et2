#include <iostream>
#include <cmath>
using namespace std;

double f(double x, bool &OK) {
    if (x >= 1 && x <= 2) {
        OK = true;
        return sqrt((x - 1) * (2 - x));
    } else {
        OK = false;
        return 0;
    }
}

int main() {
    double x;
    bool OK;

    cout << "Entrez une valeur pour x : ";
    cin >> x;

    double resultat = f(x, OK);
    if (OK) {
        cout << "La fonction est définie. Résultat : " << resultat << endl;
    } else {
        cout << "La fonction n'est pas définie pour cette valeur de x.\n";
    }
    return 0;
}
