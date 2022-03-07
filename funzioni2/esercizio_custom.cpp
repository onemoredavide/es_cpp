#include <iostream>
#include <cstdlib>
using namespace std;

/*
Inserire 2 numeri x e y positivi  e visualizzare la loro somma. Verificare se
tale somma è divisibile per 5. Inoltre inserire un altro valore positivo  e verificare se tale valore è  divisibile per 5 
*/

int input(string output) {
    cout<<output<<endl;
    int x;
    do{
        cin>>x;
    } while (x<=0);
    return x;
}

int somma(int a, int b) {
    int s=a+b;
    return s;
}

bool divisibile(int a) {
    return a%5==0;
}

int main() {
    int x,y;
    
    x=input("Inserisci X: ");
    y=input("Inserisci Y: ");
    cout<<divisibile(somma(x,y))<<endl;

    int z=input("Inserisci Z: ");
    cout<<divisibile(z);
    return 0;
}