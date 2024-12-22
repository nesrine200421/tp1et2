#include <iostream>
using namespace std;

// Passage par référence
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "Entrez deux nombres : ";
    cin >> a >> b;

    cout << "Avant l'échange : a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "Après l'échange : a = " << a << ", b = " << b << endl;
    return 0;
}
