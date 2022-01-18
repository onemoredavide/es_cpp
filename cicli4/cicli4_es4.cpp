#include <iostream>
using namespace std;

int main()
{
    //Dato un numero N (positivo, <100 ) calcolare la differenza tra la somma dei numeri pari e dei Numeri dispari inferiori
    int n,i=0,d,sp=0,sd=0;
    do
    {
        cin>>n;
    } while (n<=0||n>=100);
    while(i<n)
    {
        (i%2==0) ? sp+=i : sd+=i;
        i++;
    }
    d=sp-sd;
    cout<<"SOMMA PARI - SOMMA DISPARI = "<<d<<endl;
    return 0;
}
