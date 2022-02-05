#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Lo stesso esercizio 3 ma per terminare digito 0 (anche qui niente numerosità predefinita)
    int m=3;
    char r;
    do
    {
        cout<<m<<endl;
        m+=3;
        cout<<"Vuoi continuare? (s/n)"<<endl;
        cin>>r;
    } while (r!='n');
    
    return 0;
}