#include <iostream>
#include <cstdlib>
using namespace std;

// Definire una funzione che abbia come parametro un numero intero positivo e che visualizzi la sequenza dei primi 5 numeri successivi al numero dato
int input() {
    int x;
    do
    {
        cin>>x;
    } while (x<0);
    return x;
}
int successivi(int x){
    int i=0;
    while (i<5) {
        cout<<x+1<<endl;
        i++;
        x++;
    }
    return 0;
} 
int main() {
    int x=input();
    successivi(x);

}