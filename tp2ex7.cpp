#include <iostream>

#include <string>

using namespace std;

int u(int n)
{
    if(n==0)
    {
        return 3;
    }
    else{
        return 3*u(n-1)+4;
        }
    
}

int main() {
    int n;
    cout<<"donne n";
    cin>>n;
    cout<<u(n);
    

    return 0;
}
