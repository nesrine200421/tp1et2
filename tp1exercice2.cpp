#include <iostream>
using namespace std;

int main() {
    int n, min;
    cout << "Entrez 10 entiers :\n";

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (i == 0 || n < min) {
            min = n;
        }
    }

    cout << "Le plus petit entier est : " << min << endl;
    return 0;
}
