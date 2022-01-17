#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	
	int min,max,p,d,i;
	
	cin>>min>>max;
	p=0;
	d=0;
	for(i=min;i<=max;i++){
		if(i%2==1){
			d++;
		}else{
			p++;
		}
	}
	cout<<p<<endl<<d<<endl;	
	
	return 0;
}
