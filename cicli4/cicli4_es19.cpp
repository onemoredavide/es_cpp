#include <iostream>
using namespace std;

int main()
{
    // Determinare se un numero è multiplo di un altro procedendo per sottrazioni successive.
    int x,y;
    bool m;
    cout<<"Inserire prima numero maggiore, poi numero minore."<<endl;
    cin>>x>>y;
    while (x>y){
        x-=y;
    }
    m=x==y;
    cout<<m<<endl;
    return 0;
}