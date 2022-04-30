#include <iostream>
using namespace std;

int input(string msg){
    int x;
    cout<<msg<<endl;
    cin>>x;
    return x;
}

char inputc(string msg) {
    char c;
    cout<<msg<<endl;
    cin>>c;
    return c;
}

void v1(int n) {
    for(int i=0; i<n; i++)
        cout<<"+";
}

void v2(int n1, int n2) {
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++)
            cout<<"+";
        cout<<endl;
    }
}

void v3(int n1, int n2, char c) {
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++)
            cout<<c;
        cout<<endl;
    }
}

int main(){
    int params,n1,n2;

    do
        params=input("Numero di parametri: ");
    while(params>3||params<0);

    char c;

    switch (params) {
        case 1: {
            n1=input("n1: ");
            v1(n1);
            break;
        }
        case 2: {
            n1=input("n1: ");
            n2=input("n2: ");
            v2(n1,n2);
            break;
        }
        case 3: {
            n1=input("n1: ");
            n2=input("n2: ");
            c=inputc("carattere: ");
            v3(n1,n2,c);
            break;
        }
    }
}