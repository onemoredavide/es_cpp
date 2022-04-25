#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*
      Acquisire una sequenza di numeri finchè l’utente risponde ‘N’ alla domanda “vuoi continuare?” e visualizzare
      quanti numeri sono stati inseriti e la loro media.
    */
    int c,s,x;
    float media;
    char risp;
    do
    {
        cout<<"Inserisci un numero: "<<endl;
        cin>>x;
        s+=x;
        c++;
        cout<<"Vuoi continuare? (S/N)"<<endl;
        cin>>risp;
    } while (risp!='N');
    media=(float)s/c;
    cout<<"Media de numeri -> "<<media<<endl<<"Numeri inseriti -> "<<c<<endl;
}
