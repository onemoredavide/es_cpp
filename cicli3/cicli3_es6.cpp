#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Visualizzare se un numero è primo.
    int n, i=1, cd=0;
    do {
        cin>>n;
    } while(n<0);
    while(i<=n){
        if(n%i==0){
            cd++;
        }
        i++;
    }
    bool primo=cd==2;
    cout<<primo<<endl;
    return 0;
}