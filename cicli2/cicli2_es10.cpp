#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i, val;
    string esito;
    do
    {
        cin>>n;
    } while (n >= 30);

    cout<<"Inserire "<<n<<" voti."<<endl;
    
    while (i < n) {
        do {
            cin>>val;
        }while (val > 21);

        if      (val <= 10) { esito = "insufficiente"; } 
        else if (val <= 15) { esito = "sufficiente"; }
        else if (val <= 20) { esito = "buono"; }
        else               { esito = "ottimo"; }

        cout<<esito<<endl;
        i++;
    }
    return 0;
}
