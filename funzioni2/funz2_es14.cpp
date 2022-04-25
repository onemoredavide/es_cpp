#include <iostream>
#include <cstdlib>
using namespace std;

int input(){
	cout<<"Inserisci un numero: "<<endl;
	 int x;
	 cin>>x;
	 return x;
}
int quadrato(int x) {
	int i=0,q=1,s=0;
	while(i<x){
		s+=q;
		q+=2;
		i++;
	}
	return s;
}
int main() {
	/*
		i quadrato di n si puo' calcolare sommando i primi n numeri dispari
		dato n calcolare il quadrato (funzione input e quadrato)
	*/
	int x;
	x=input();

	cout<<"Il quadrato e' "<<quadrato(x);
	return 0;
}