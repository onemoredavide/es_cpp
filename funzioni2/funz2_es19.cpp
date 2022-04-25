#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int input(){
    int x;
    do {
        cin>>x;
    } while (x>=50 || x<10);
    return x;
}

int massimo(int limite) {
    int val,i=0,max;
    while(i<limite) {
        val=rand()% 100+1;
        if (i==0)
            max=val;
        else
            if (val>max)
                max=val;
        i++;
    }
    return max;
}

int main(){
    srand(time(NULL));
    // Dati N numeri random (aggiunto: compresi tra 1 e 100), calcolare il massimo (funzione input per 10<n<50 e funzione massimo)
    int n=input();
    cout<<massimo(n);
    return 0;
}