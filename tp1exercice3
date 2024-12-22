#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Combien de mots voulez-vous saisir ? ";
    cin >> N;

    string mot, motPlusLong;
    cout << "Saisissez les mots :\n";

    for (int i = 0; i < N; i++) {
        cin >> mot;
        if (mot.length() > motPlusLong.length()) {
            motPlusLong = mot;
        }
    }

    cout << "Le mot le plus long est : " << motPlusLong << endl;
    return 0;
}
