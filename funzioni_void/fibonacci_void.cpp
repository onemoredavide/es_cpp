#include <iostream>
#include <cstdlib>
using namespace std;

void input(int &x){
    cin>>x;
}

void somma(int &z, int x, int y){
    z=x+y;
}

void swap(int &x, int &y, int z){
    x=y;
    y=z;
}

int main() {
    int x=0,y=1,z,l,i=2;
    input(l);
    cout<<x<<" | "<<y<<" | ";
    while (i<l){
        somma(z,x,y);
        cout<<z<<" | ";
        swap(x,y,z);
        i++;
    }
    return 0;
}