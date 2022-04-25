#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*
    Acquisire una sequenza di numeri finché l’utente risponde ‘N’ alla domanda “vuoi continuare?” e
    successivamente visualizzare la loro somma
    */
    int x,s=0;
    char r;
    do
    {
        cin>>x;
        s+=x;
        cout<<"Vuoi continuare? (s/n)"<<endl;
        cin>>r;
    } while (r!='n');
    cout<<"SOMMA --> "<<s;
    return 0;
}