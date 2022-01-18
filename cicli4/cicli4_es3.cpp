#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Visualizzare i multipli di 3 fino a un valore limite inserito
    int n,i=3;
    do
    {
        cin>>n;
    } while (n<=3);
    cout<<"Multipli di 3: "<<endl;
    while(i<=n)
    {
        cout<<i<<endl;
        i+=3;
    }
    return 0;
}