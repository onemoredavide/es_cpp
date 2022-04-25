#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i = 1;
    string output;
    cout<<"Quanti numeri vuoi mostrare? ";
    do
    {
        cin>>n;
    } while (n < 0);

    while (i <= n) {
        if (i % 2 == 0) { output = "pari"; }
        else            { output = "dispari";}
        cout<<i<<" "<<output<<endl;
        i++;
    }
    cout<<"FINE"<<endl;

    return 0;
}