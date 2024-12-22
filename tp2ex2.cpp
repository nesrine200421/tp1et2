#include <iostream>
using namespace std;

bool testerValeur(int a, int b) {
    return a == b;
}

bool testerAdresse(int* a, int* b) {
    return *a == *b;
}

bool testerReference(int& a, int& b) {
    return a == b;
}

int main() {
    int x = 12, y = 12, z = 20;

    cout << "Passage par valeur : " << testerValeur(x, y) << endl;
    cout << "Passage par adresse : " << testerAdresse(&x, &z) << endl;
    cout << "Passage par reference : " << testerReference(x, z) << endl;

    return 0;
}
