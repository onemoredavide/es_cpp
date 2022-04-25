#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    //Visualizzare i numeri naturali da N a 1 in ordine decrescente
    int n,i;
    do
    {
        cin>>n;
    } while (n<=0);
    i=n;
    while(i>=1)
    {
        cout<<i<<" "<<endl;
        i--;
    }
    return 0;
}