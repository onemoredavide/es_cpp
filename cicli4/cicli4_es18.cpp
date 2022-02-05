#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Lo stesso esercizio 3 ma per terminare digito 0 (anche qui niente numerosità predefinita)
    int m=3;
    int r;
    do
    {
        cout<<m<<endl;
        m+=3;
        cout<<"Vuoi continuare? Digita 0 per interrompere il ciclo."<<endl;
        cin>>r;
    } while (r!=0);
    
    return 0;
}