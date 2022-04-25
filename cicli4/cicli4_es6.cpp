#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Visualizzare i primi N numeri naturali multipli di 3 (10<N<50)
    int n,i=3;
    do
    {
        cin>>n;
    } while (n<=10||n>=50);
    while (i<=n*3)
    {
        cout<<i<<endl;
        i+=3;
    }
    return 0;	
}