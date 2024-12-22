#include <iostream>
using namespace std;

int factoriel(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    cout << "Entrez un entier : ";
    cin >> N;

    if (N < 0) {
        cout << "Le factoriel n'est pas défini pour les entiers négatifs.\n";
    } else {
        cout << "Le factoriel de " << N << " est : " << factoriel(N) << endl;
    }
    return 0;
}
