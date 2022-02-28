#include <iostream>
#include <cstdlib>
using namespace std;

int input(string output) {
    cout<<output<<endl;
    int x;
    cin>>x;
    return x;
}

int somma(int max) {
    int i=1, c=0, s=0;
    while(s<max) {
        s+=i;
        i++;
        c++;
    }
    return c;
}

int main() {
/*
    Sommare i primi numeri naturali fino ad ottenere un numero maggiore o uguale di un valore prefissato e dire
    quanti valori è stato necessario sommare (funzione input e funz. Elabora)
*/
    int max=input("Inserisci il valore limite: ");
    cout<<somma(max);
}