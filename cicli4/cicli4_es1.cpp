#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	//Visualizzare i primi N numeri naturali (N pari e <100)
	int n,i=0;
	cout<<"Inserisci un numero pari minore di 100: "<<endl;
	do
	{
		cin>>n;
	} while(n%2!=0||n>=100);
	while(i<n)
	{	
		cout<<i<<endl;
		i++;
	}
	return 0;
}

