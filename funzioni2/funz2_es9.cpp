#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool controlla (int x) {
    return x>0;
}

int input(string output) {
    cout<<output<<endl;
    int x;
    do
    {
        cin>>x;
    } while (x>1000);
    return x;
}

int main() {
    srand(time(NULL));
    int n=input("Inserisci la numerosita' del ciclo: "), i=0, x;
    while(i<n) {
        x=rand()%2011 - 10;
        if (!controlla(x)){
            cout<<"Sono stati trovai numeri negativi. "<<endl;
            break;
        }
        i++;
    }
    cout<<"Numeri generati: "<<i<<endl;
    return 0;
}