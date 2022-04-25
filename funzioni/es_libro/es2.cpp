#include <iostream>
#include <cstdlib>
using namespace std;

// Organizzare un afunzione che acquisisca da tastiera le dimensioni di un regtgangolo e calocli la misura dell'area e del perimetro

int calc(float h, float b) {
    float a=h*b;
    float p=2*h+2*b;
    cout<<a<<" "<<p<<endl;
    return 0;
}

int main() {
    float h,b;
    cin>>h>>b;
    calc(h,b);
    return 0;
}