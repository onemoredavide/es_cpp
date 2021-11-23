#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i=0;
    cout<<"Inserisci un numero pari minore di 50"<<endl;
    do
    {
        cin>>n;
    } while (n >= 50 || n % 2 != 0);
    
    n+=2;
    while (i < 10) {
        cout<<n<<endl;
        n += 2;
        i++;
    }

    return 0;
}