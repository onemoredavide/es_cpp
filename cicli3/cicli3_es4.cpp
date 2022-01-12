#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Calcolare la somma dei quadrati di N numeri acquisiti da tastiera.
    int n, i=0, s=0, q, val;
    cout<<"Inserisci un numero: "<<endl;
    do {
        cin>>n;
    } while(n<0);
    cout<<"Inserisci "<<n<<" numeri"<<endl;
    while (i<n){
        cin>>val;
        q=val*val;
        s+=q;
        i++;
    }
    cout<<"Somma dei quadrati: "<<s<<endl;
    return 0;
}

