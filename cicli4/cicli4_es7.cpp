#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Visualizzare i primi N numeri naturali pari (N<100)
    int n,i=0;
    do
    {
        cin>>n;
    } while (n>=100);
    while (i<n*2)
    {
        cout<<i<<endl;
        i+=2;
    }
    return 0;
}