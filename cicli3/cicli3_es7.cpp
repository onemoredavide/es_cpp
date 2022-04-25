#include <iostream>
#include <cstdlib>  
using namespace std;

int main(){
    //Inserire una serie di numeri e sommarli. Interrompere l'immissione al quinto valore pari. Visualizzare la
    //somma ottenuta. (numerosità non definita)
    int val, s=0, p=0;
    do {
        cin>>val;
        if(val%2==0){
            p++;
            s+=val;
        }
    } while(p<5);
    cout<<s<<endl;
    return 0;
}