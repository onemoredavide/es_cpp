#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Leggere una sequenza di numeri fino a quando si inserisce un numero negativo e contare i multipli di 5.
    int val,cm=0;
    do
    {   
        cin>>val;
        // evita che venga effettuato il controllo val%5==0 sui numeri negativi (per esempio, -5%5==0, 'cm' aumenterebbe;).
        if (val<0) break;
        if (val%5==0)
            cm++;
    } while (val>=0);
    cout<<"multipli di 5: "<<cm<<endl;
}