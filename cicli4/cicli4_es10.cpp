#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Acquisire una sequenza di numeri pari terminante con 100, visualizzare la numerosità della sequenza e il
    prodotto dei multipli di 4(attento, se la sequenza è vuota, cioè se è stato inserito il solo valore 100, darne un
    opportuno messaggio).*/

    int val,c=0;
    long p=1;
    bool vuota;
    do
    {   
        do
        {
            cin>>val;
        } while (val%2!=0);
        if (val==100 && c==0)
        {
            vuota = true;
            cout<<"SEQUENZA VUOTA."<<endl;
            break;
        }
        if (val%4==0)
            p*=val;
        c++;
    } while (val!=100);
    if (!vuota)
    {
        cout<<"Prodotto dei numeri multipli di 4: "<<p<<endl;
        cout<<"Numerosita': "<<c<<endl;
    }
    return 0;	
}