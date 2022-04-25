#include <iostream>
#include <cstdlib>
using namespace std;

int main() { 
    // Inserire in input 100 numeri e visualizzare: la media dei pari, quanti sono negativi, il quadrato di ogni numero.

    // n = numerosita' del ciclo, cp = conta dei pari, cn = conta dei negativi, i=variable di iterazione
    // sp=somma dei pari, val = valore da inserire nel while.

    int n=5, val, media, sp=0, cp=0, cn=0, i=0;

    while (i < n) {
        cin>>val;
        if (val < 0) { cn++; }
        if (val % 2 == 0) { cp++; sp += val; }
        cout<<"Quadrato: "<<val * val<<endl;

        i++;
    }
    media = sp / cp;

    cout<<"MEDIA PARI: "<<media<<endl<<"NEGATIVI: "<<cn<<endl;

    return 0; 
}