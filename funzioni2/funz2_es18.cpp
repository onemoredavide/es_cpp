#include <iostream>
#include <cstdlib>
using namespace std;

int input(){
    int x;
    do {
        cin>>x;
    } while (x>=100 || x<0);
    return x;
}

int minimo(int limite){
    int min=0, i=0, val;
    while (i<limite){
        cin>>val;
        if (val%2!=0){
            if(i==0) {
                min=val;
            } else {
                if(val<min){
                    min=val;
                }
            }
        }
        i++;
    }
    return min;
}

int main() {
    /*
    Dati N numeri interi inse riti a tastiera, determina il minimo fra i valori dispari. (funzione input per N<100 e
    funzione minimo)
    */
    int n=input();
    int m = minimo(n);
    (m != 0) ? cout<<"Minimo tra i dispari: "<<m<<endl : cout<<"Non sono stati inseriti numeri dispari.";
    
    return 0;
}