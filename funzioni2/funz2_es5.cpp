#include <iostream>
#include <cstdlib>
using namespace std;

int input(string output) {
    cout<<output<<endl;
    int x;
    cin>>x;
    return x;
}

int somma() {
    int s=0, cp=0, val;
    do {
        val=input("Inserisci il valore da sommare: ");
        s+=val;
        if (val%2==0)
            cp++;
    } while (cp<5);
    return s;
}

int main () {
    cout<<somma();
}