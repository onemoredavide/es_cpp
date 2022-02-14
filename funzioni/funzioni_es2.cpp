#include <iostream>
#include <cstdlib>
using namespace std;

int inp(int n) {
    cin>>n;
    return n;
}

float elabora(float importo) {
    float sconto;
    if(importo>100)
        sconto=(5*importo)/100;
    if(importo>200)
        sconto=(10*importo)/100;
    return importo-sconto;
}

int main() {
    /*
    Scrivere una funzione (elabora)che dato il prezzo di un bene (da inserire con la funzione input)restituisca
    l’importo al netto dello sconto (cioè prezzo meno sconto)in base alla seguente tabella:
        a. Importo fino a 100€ nessuno sconto
        b. Tra 101 e 200€ sconto del 5%
        c. Sopra i 200€ sconto del 10%
    */
    int n;
    n=inp(n);
    cout<<elabora(n);
    return 0;
}