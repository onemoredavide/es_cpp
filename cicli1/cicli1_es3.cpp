#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	// Visualizzare la somma di 8 numeri dati in input
	
	int i=0, n=8, val, s;
	
	cout<<"Inserisci 8 numeri: "<<endl;
	
	for (int j = 0; j < n; j++){
		cin>>val;
		s+=val;
	}
	
	// Ciclo while 
	/*
	while (i < n){
		cin>>val;
		s += val;
	}
	*/
	
	cout<<"Somma dei valori: "<<s;

	return 0;
}

