#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    /*Calcolare la somma dei primi N numeri pari successivi ad un valore fornito da tastiera*/
    int n, partenza, i=0, s=0;
    cout<<"Inserire quanti numeri pari visualizzare: "<<endl;
    do{
        cin>>n;
    } while(n<0);
    cout<<"Inserire punto di partenza: "<<endl;
    cin>>partenza;
    if(partenza%2==1){partenza++;}
    while(i<n){
        s+=partenza;
        partenza+=2;
        i++;
    }
    cout<<s<<endl;
}