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
    
    while (i < 10) {
        n += 2;
        cout<<n<<endl;
        i++;
    }

    return 0;
}
