#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*
        Acquisire numeri finchè l’utente lo desidera. Calcolare il maggiore tra i dispari e la media dei pari.
    */
    int val,maxD,c=0,cP=0,sP=0;
    char r;
    do
    {
        cin>>val;
        if(val%2==0)
        {
            cP++;
            sP+=val;
        } else {
            if(c==0)
                maxD=val;
            else{
                if(val>maxD)
                    maxD=val;
            }
        }
        c++;
        cout<<"smettere? (NO=n)"<<endl;
        cin>>r;
    } while(r=='n');
    cout<<"MAGGIORE TRA I DISPARI -> "<<maxD<<endl;
    if(cP>0)
    {
        float m=(float)sP/cP;
        cout<<"MEDIA DEI PARI -> "<<m<<endl;
    }
    return 0;
}