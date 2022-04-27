#include <iostream>
#include <cstdlib>
using namespace std;

void input(int &x) {
    cin>>x;
}

void semplifica(int &n, int &d) {
    int max = (n>d) ? n : d;
    int c=1;
    while(c<=max) {
        if(n%c==0 && d%c==0) {
            n/=c;
            d/=c;
            c=1;
        }
        c++;
    }
}

int main() {

    int n1,d1,n2,d2;

    input(n1); 
    input(d1);
    semplifica(n1,d1);
    cout<<"Frazione 1: "<<n1<<"/"<<d1<<endl;

    input(n2); 
    input(d2);
    semplifica(n2,d2);
    cout<<"Frazione 2: "<<n2<<"/"<<d2<<endl;

    cout<<(d1==d2);

}