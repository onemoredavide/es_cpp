#include <iostream>
using namespace std;

int main(){
	int val, c1=0, c2=0;
	do {
		do {
			cin>>val;
			if(val<0||val>2)
				cout<<"Sbagliato"<<endl;	
		} while (val<0||val>2);
		if (val==0) break;
		(val==1) ? c1++ : c2++;
	} while (val!=0);
	return 0;
}
