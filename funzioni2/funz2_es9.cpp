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
    bool soloPari=true;
    while(i<n) {
        x=rand()%2011 - 10;
        cout<<x<<endl;
        if (!controlla(x)){
            soloPari=false;
            break;
        }
        i++;
    }
    cout<<soloPari;
    return 0;
}