#include <iostream>
#include <cstdlib>
using namespace std;

void input(int &x) {
    cin>>x;
}

void sottrai(int &a, int &b, int &c) {
    if(a>=b && a>=c){
        if(b<=a && b<=c)
            a-=b/2;
        else
            a-=c/2;
    }
    else if(b>=a && b>=c){
        if(a<=b && a<=c)
            b-=a/2;
        else
            b-=c/2;
    }
    else{
        if(a<=b && a<=c)
            c-=a/2;
        else
            c-=b/2;
    }
}

int main() {
    int x,y,z;
    input(x);
    input(y);
    input(z);

    sottrai(x,y,z);
    sottrai(x,y,z);
    sottrai(x,y,z);
    
    cout<<x<<" "<<y<<" "<<z;
}