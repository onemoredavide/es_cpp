#include <iostream>
using namespace std;

int main() {
    int max, x, cMax=1, i=0;
    do {
        do {
            cin>>x;
        } while (x<0);
        if (x==0) break;
        if (i==0) 
            max=x;
        else {
            if (x==max) 
                cMax++;
            if (x>max) {
                max=x;
                cMax=1;
            }
        }
        i++;
    } while (x!=0);
    cout<<"MAX = "<<max<<endl<<"CMAX = "<<cMax<<endl;
    return 0;
}