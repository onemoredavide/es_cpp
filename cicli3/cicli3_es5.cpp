#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Visualizzare tutti i divisori di un numero e quanti sono.
    int n, i=1, cd=0;
    do{
        cin>>n;
    } while(n<=0);
    while(i<=n) {
        if(n%i==0){
            cd++;
            cout<<i<<endl;
        }
        i++;
    }
    cout<<"Numero dei divisori: "<<cd<<endl;
    return 0;
}
