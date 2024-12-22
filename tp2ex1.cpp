#include <iostream>
using namespace std;

int main() {
    int* pInt = new int;
    *pInt = 4;
    cout << "Valeur de l'entier : " << *pInt << endl;
    cout << "Adresse de l'entier : " << pInt << endl;
    delete pInt;

    double* pDouble = new double;
    *pDouble = 7.14;
    cout << "Valeur du réel : " << *pDouble << endl;
    cout << "Adresse du réel : " << pDouble << endl;
    delete pDouble;

    return 0;
}

