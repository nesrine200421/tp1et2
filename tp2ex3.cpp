#include <iostream>
using namespace std;

void incrementerParAdresse(int *val) {
    (*val)++;
}

void incrementerParReference(int &val) {
    val++;
}

void permuterParAdresse(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permuterParReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Avant incrémentation : x = " << x << endl;
    incrementerParAdresse(&x);
    cout << "Après incrémentation par adresse: x = " << x << endl;
    incrementerParReference(x);
    cout << "Après incrémentation par référence: x = " << x << endl;

    cout << "Avant permutation : x = " << x << ", y = " << y << endl;
    permuterParAdresse(&x, &y);
    cout << "Après permutation par adresse: x = " << x << ", y = " << y << endl;
    permuterParReference(x, y);
    cout << "Après permutation par référence: x = " << x << ", y = " << y << endl;

    return 0;
}
