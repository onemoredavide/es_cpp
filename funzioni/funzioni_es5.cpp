#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int calcolo(float b, float h) {

    float ip=sqrt(pow(h,2)+pow(b,2));
    float a=b*h/2;
    float p=b+ip+h;
    cout<<endl<<ip<<endl<<a<<endl<<p;
    return 0;
}

int main() {
    /*Scrivere un programma che dato in input base altezza di un triangolo rettangolo passi tali valori ad una 
    funzione attraverso la quale si possano stabilire ipotenusa, area e perimetro del triangolo.*/
    float b,h;
    cin>>b>>h;
    calcolo(b,h);

    return 0;
}