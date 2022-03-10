#include <iostream>
using namespace std;

bool perfetto(int x){
	int i=1,s=0;
	while(i<=(x/2)){
		if(x%i==0)
			s+=i;
		i++;
	}
	return s==x;
}

int main(){
	// visualizza i numeri perfetti da 1 a 1000
	int i=1;
	while(i<1000){
		if(perfetto(i))
			cout<<i<<endl;
		i++;
	}
	return 0;
}
