#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Acquisire una sequenza di valori terminante con 0 visualizzare il prodotto dei valori dispari (attento, se il
    prodotto non ha significato perché sono stati introdotti solo numeri pari, o solo degli 1 dare un opportuno
    messaggi)*/
    int val;
    long p=1;
    bool significativo=false;
    do
    {
        cin>>val;
        if (val!=1 && val%2!=0 && val!=0)
        {
            significativo=true;
            p*=val;
        }
    } while (val!=0);
    (!significativo) ? cout<<"Prodotto non significativo" : cout<<"Prodotto dei valori dispari: "<<p<<endl; 
    return 0;
}