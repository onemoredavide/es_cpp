#include <iostream>
using namespace std;

int main(){

    int d,num,s;
    cin>>d;
    s=0;
    num=0;

    // N.B. for i from 1 to ... =====> il valore iniziale di i = 1. (usa <=)

    for (int i=1;i<=d;i+=2) {
        num++;
        s+=i;
    }
    cout<<s<<" "<<num<<" "<<d<<endl;
    return 0;
}