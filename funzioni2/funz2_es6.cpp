#include <iostream>
#include <cstdlib>
using namespace std;

int input(string messaggio) {
    int x;
    cout<<messaggio<<endl;
    cin>>x;
    return x;
}

bool pari(int x) {
    int i=x;
    while(i>=0) {
        if (i==1)
            break;
        i-=2;
    }
    return (bool)i;
}

int main() {
    int n=input("Inserisci il valore di N: ");
    cout<<pari(n)<<endl;
    return 0;
}