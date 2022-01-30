#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int c=0,cp=0,sp=0,x,q,v;
    float m;
    x=rand()%111-10;
    while(x!=30){
        q=pow(x,2);
        if(x%2==0){
            cp++;
            sp=sp+x;
        }
        cout<<"OUTPUT ---> "<<x<<" "<<q<<endl;
        if(x<0){
            v=abs(x);
            cout<<"abs --> "<<v<<endl;
        }
        c++;
        x=rand()%111-10;
    }
    if(cp>0){
        m=(float)sp/cp;
        cout<<"la media dei valori pari e': "<<m<<endl;
    }
    cout<<"il numero dei valori che sono usciti e': "<<c<<endl;
    return 0;
}