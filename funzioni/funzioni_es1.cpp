#include <iostream>
#include <cstdlib>
using namespace std;

// Dato un numero N , definire una funzione che restituisca la somma dei numeri pari minori o uguali a N

int smp(int n) {
    int i=2,s=0;
    while(i<=n) {
        cout<<i<<endl;
        s+=i;
        i+=2;
    }
    return s;
}

int main() {
    int n;
    cin>>n;
    cout<<smp(n);
    return 0;
}