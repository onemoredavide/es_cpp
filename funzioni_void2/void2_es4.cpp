#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void input(int &x) {
    do{
        cin>>x;
    } while(x<3 || x>50);
    
}

void maggiore(int n, int &max) {
    int val,i=0;
    do{
        val=rand()% 351 - 150;
        if(i==0) 
            max=val;
        else
            if(val>max) 
                max=val;
        i++;
    } while(i<n);
}

int main() {
    srand(time(NULL));
    int n, max;
    input(n);
    maggiore(n, max);
    cout<<"MAGGIORE: "<<max;
}
