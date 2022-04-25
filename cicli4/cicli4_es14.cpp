#include <iostream>
#include <cstdlib>
using namespace std;

int main () 
{
    /*Leggere in input dei numeri compresi tra 50 e 100(effettuare il controllo) finchè la loro somma diviene
    maggiore di 500. Visualizzare il numero di valori immessi dall’utente*/

    /*

    // CICLO DO-WHILE

    int s=0,val,c;
    do {
        do 
        {
            cin>>val;
        } while (val<50||val>100);
        if (s>500) break;
        s+=val;
        c++;
    } while (s<=500);
    cout<<"Valori inseriti: "<<c<<endl;
    */

   // VERSIONE CON IL CICLO WHILE

    int val,s=0,i=0;
    do
    {
        cin>>val;
    } while (val<50||val>100);
    s+=val;
    i++;

    while (s<=500)
    {
        if (s>500) 
            break;
        do
        {
            cin>>val;
        } while (val<50||val>100);
        s+=val;
        cout<<"SOMMA = "<<s<<endl;
        i++;
    }
    cout<<"Numri inseriti = "<<i;
    return 0;
}