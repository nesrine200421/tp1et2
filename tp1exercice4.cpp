#include <iostream>
#include <cmath>
using namespace std;

double distance(double xa, double ya, double xb, double yb) {
    return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
}

int main() {
    double xa, ya, xb, yb;
    cout << "Entrez les coordonnées de A (xa, ya) : ";
    cin >> xa >> ya;
    cout << "Entrez les coordonnées de B (xb, yb) : ";
    cin >> xb >> yb;

    cout << "La distance entre A et B est : " << distance(xa, ya, xb, yb) << endl;
    return 0;
}
