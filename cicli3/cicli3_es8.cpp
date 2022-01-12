#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    /*Inserire una serie di numeri e sommarli solo se sono dispari. Interrompere l'immissione quando la somma
    raggiunge o supera il valore 100. (numerosità non definita)*/
    int d=0,val, s=0;
    do{
        cin>>val;
        if(!val%2==0){
            d++;
            s+=val;
        }
    } while(s<100);
    cout<<s<<" | "<<d<<endl;
}