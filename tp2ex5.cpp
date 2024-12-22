#include <iostream>
#include <random>
#include <iomanip>  

using namespace std;

double genererReel(double min, double max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib(min, max);
    return distrib(gen);
}



int main() {
    cout << fixed << setprecision(2);  
    for(int i=0;i<5;i++)
    {
            cout << genererReel(0.0, 10.0) << endl;


    }
    return 0;
}
