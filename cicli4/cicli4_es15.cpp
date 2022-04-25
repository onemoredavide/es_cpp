#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /*Acquisire un valore random da 0 a 100. L’utente deve indovinarlo in al più 10 tentativi. Poi il programma
    mostra il numero*/
    srand(time(NULL));
    int x=rand()%100+1, i=0, tentativo;
    bool indovinato=0;
    cout<<x<<endl;
    while (i<10)
    {
        cin>>tentativo;
        if (tentativo==x) 
        {
            cout<<"Corretto!"<<endl;
            indovinato=1;
            break;
        } else {
            cout<<"Riprova..."<<endl;
        }
        i++;
    }
    if (!indovinato) cout<<"Soluzione : "<<x<<endl;
    return 0;

}