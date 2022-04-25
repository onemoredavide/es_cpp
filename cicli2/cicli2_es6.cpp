#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, val, a, b, c=0, i=0;
    cout<<"Inserisci il numero di valori da inserire in input: "<<endl;
    do {
        cin>>n;
    } while (n <= 0 || n > 50); 
    
    cout<<"Inserisci il primo estremo dell'intervallo: "<<endl;
    cin>>a;
    cout<<"Inserisci il secondo estremo dell'intervallo: "<<endl;
    cin>>b;

    if (a > b) {
        // Scambio di variabili senza usare una terza variabile.
        // Documentazione qui: https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/
        a = a + b;
        b = a - b;
        a = a - b;
    }
    cout<<"Inserisci "<<n<<" numeri: "<<endl;
    while (i < n) {
        cin>>val;
        if (val < a || val > b) { c++; }
        i++;
    }

    cout<<"Numero di valori che non sono contenuti nell'intervallo ("<<a<<", "<<b<<"): "<<c<<endl;

    return 0;
}