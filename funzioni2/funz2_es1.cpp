#include <iostream>
#include <cstdlib>
using namespace std;

int input(string messaggio) {
    int x;
    cout<<messaggio<<endl;
    cin>>x;
    return x;
}

int media() {
    int i=0,val,s=0;
    while(i<5 && s<100) {
        val=input("Inserisci un valore: ");
        s+=val;
        i++;   
    }
    float media=s/i;
    return media;
}

int main() {
    cout<<media();
    return 0;
}