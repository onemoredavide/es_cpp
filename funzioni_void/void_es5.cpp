#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void input_operatore(char & operatore) {
    cout<<"Operatore: \n";
    do {
        cin>>operatore;
    } while(operatore != '+' && operatore != '-' && operatore != '/' && operatore != '*' && operatore != '^');
}

void input_valori(int &a, int&b) {
    cout<<"Valore 1: \n";
    do {
        cin>>a;
    } while(a<0);
    cout<<"Valore 2: \n";
    do {
        cin>>b;
    } while(b<0);
}

void calcolo(int &a, int &b, char &op, float &res) {
    switch (op) {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '/':
            res=a/b;
            break;
        case '*':
            res=a*b;
            break;
        case '^':
            res=pow(a,b);
            break;
        default:
            res=0;
    }
}

int main() {
    int x,y;
    float res;
    char op;
    input_operatore(op);
    input_valori(x,y);
    calcolo(x,y,op,res);
    cout<<res;
    return 0;
}