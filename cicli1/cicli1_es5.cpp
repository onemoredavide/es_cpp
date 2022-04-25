#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	// 5. scrivere 10 numeri pari successivi al numero N
	
	int n, i, c=0;
	cin>>n;
	
	if (n % 2 == 0) {
		i = n + 2;
	} else {
		i = n + 1;
	}
	
	while (c < 10) {
		cout<<i<<endl;
		i+=2;
		c++;
	}

	return 0;
}

