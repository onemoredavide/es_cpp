#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Di N partecipanti ad un esame si inseriscono: nome, voto, età. Al termine visualizzare l’età media dei
partecipanti il miglior voto conseguito e il nome di chi lo ha conseguito.*/
    int n,v,e,i=0,vMax,se,me;
    string nome,nomeMax;
    do
    {
        cin>>n;
    } while (n<0);
    while (i<n)
    {
        cin>>nome>>v>>e;
        if (i==0)
        {
            vMax=v;
            nomeMax=nome;
        } else 
        {
            if (v>vMax)
            {
                vMax=v;
                nomeMax=nome;
            }
        }
        se+=e;
        i++;
    }
    me=se/n;
    cout<<"MEDIA ETA' --> "<<me<<endl;
    cout<<"MIGLIOR PARTECIPANTE --> "<<nomeMax<<", "<<vMax<<endl;
    return 0;
}