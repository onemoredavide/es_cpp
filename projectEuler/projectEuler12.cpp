#include <iostream>
#include <cstdlib>
using namespace std;

int get_triangle (int triangle){
	int def=0, i=1;
	while(i<=triangle){
		def+=i;
		i++;
	}
	return def;
}

int main(){
	
	//https://projecteuler.net/problem=12
	
	int c,cd,i=1;
	int t;
	do{
		cd=0;
		c=1;
		t=get_triangle(i);
		
		while(c<=t){
			if(t%c == 0){ cd++; }
			c++;
		}

		i++;
	}while(cd<500);
	cout<<t<<endl;
	return 0;
}

