#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Inserire dei valori. Si esce dal ciclo se l’utente digita 0. Stabilire la percentuale dei positivi e dei negativi (0
    escluso)*/
    int val,c=0,cp=0,cn=0,percP,percN;
    bool vuota=false;
    do
    {
        cin>>val;
        if (val==0)
        {
            if (c==0) vuota=true;
            break;
        } 
        (val<0) ? cn++ : cp++;
        c++;
    } while (val!=0);
    if (!vuota)
    {
        percP=cp*100/c;
        percN=cn*100/c;
        cout<<"percentuale positivi, percentuale negativi = "<<percP<<"%, "<<percN<<"%"<<endl;
    }
    return 0;	
}
