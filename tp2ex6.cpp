#include <iostream>
#include <random>
#include <iomanip>
#include <string>

using namespace std;

double genererInt(double min, double max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib(min, max);
    return distrib(gen);
}

int main() {
    int h, b,ha,la; 

    
    cout << "Entrez le nombre des boules : ";
    cin >> b;

    cout << "Entrez la hauteur du cone : ";
    cin >> h;
    cout << "Entrez la hauteur du tronc : ";
    cin >> ha;
    cout << "Entrez la largeur du tronc : ";
    cin >> la;

    string s;
    int c = 0; 

    for (int i = 0; i < h; i++) {
        s = "";
        int n = h - 1 + i;  
        int li = h - 1 - i;  
        for (int k = 0; k < 2 * h - 1; k++) {
            if (li <= k && k <= n) {
                if (genererInt(0, 1) >= 0.5 && c < b) {
                    s = s + "O"; // Place une boule
                    c++;
                } else {
                    s = s + "*"; 
                }
            } else {
                s = s + " ";
            }
        }
        cout << s << '\n';
    }
    int n=((2 * h - 1)-la)/2;
    
    for (int i = 0; i < ha; i++) {
        s="";
        for (int k = 0; k < la+n; k++) {
            if(k<n)
            {
                s=s+" ";
            }
            else{
                s=s+"|";
            }
            
        }
        cout << s << '\n';

    }

    return 0;
}
