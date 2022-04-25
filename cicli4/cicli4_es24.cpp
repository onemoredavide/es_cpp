#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Leggere un numero x e acquisire una sequenza di numeri finché l’utente lo desidera. Visualizzare quanti sono
    i numeri maggiori, minori e uguali a x. Visualizzare inoltre se sono stati inseriti una quantità pari o dispari di
    numeri.*/
    int rif=0,x,mag=0,min=0,ug=0,c=0;
    char risp;
    cout<<"Valore di riferimento: ";
    cin>>rif;
    do
    {
        cin>>x;
        if(x>rif)
            mag++;
        else if(x<rif)
            min++;
        else
            ug++;
        c++;
        cout<<"Vuoi continuare? (s/n)"<<endl;
        cin>>risp;
    } while (risp!='n');
    bool pari=c%2==0;
    cout<<mag<<" "<<min<<" "<<ug<<" "<<pari;
    return 0;
}