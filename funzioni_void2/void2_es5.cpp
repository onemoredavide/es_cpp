#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void input(int &x) {
    do{
        cin>>x;
    } while(x>=100 || x<0);   
}

bool primo(int x) {
    int i=1,d=0;
    while(i<=x) {
        if(x%i==0){
            d++;
        }
        i++;
    }
    return d==2;
}

void divisori(int x, int &max) {
    int max=x;
    while(max>0){
        if(x%max==0 && primo(max))
            break;
        max--;
    }
}

int main() {
    int x,max;
    input(x);
    divisori(x,max);
}