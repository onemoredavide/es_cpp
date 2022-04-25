#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	// Inserire dei numeri a atastiera e visualizzare il massimo. L-immissione termina digitando 0. 
	// Visualizzare anche quanti numeri sono stati inseriti
	
	int val, i, max;
	cout<<"Inserisci dei numeri. Digita '0' per terminare."<<endl;
	cin>>val;
	while(val!=0){
		if(i==0){
			max=val;
		}else{
			if(val>max){
				max=val;
			}
		}
		i++;
		cin>>val;
	}
	if(i==0){
		cout<<"Non sono stati inseriti numeri"<<endl;
	} else {
		cout<<"Sono stati inseriti "<<i<<" numeri."<<endl;
	}
	
	return 0;
}

