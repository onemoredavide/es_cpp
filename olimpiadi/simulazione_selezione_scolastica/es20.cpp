#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n,s=0,i=0,x=1;
    cin>>n;
    
    while(i<n){
        s+=x;
        x+=2;
        i++; 
    }
    cout<<s;
    return 0;
}