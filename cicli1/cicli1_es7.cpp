#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	//Calcolare la somma dei primi n numeri naturali con n>10 e n<50.
	
	int n, s=0, i=0;
	
	do
	{
		cin>>n;
	}
	while(n <= 10 || n >= 50);
	
	
	while (i<n) 
	{
		s += i;
		i ++;
	}
	
	cout<<"Somma: "<<s;
	
	return 0;
}

