#include <iostream>
#include <cstdlib>
using namespace std;

int f (int T[], int D, int k){
    int i=0;
    int j=D-1;
    int ris=0;
    while (i<j)
        if (T[i]+T[j]>k) {
            ris += 1;
            j--;
        }
    else i++;
    return (ris);
}

int succ(int i){
    if (i<=2)
        return(1);
    else
        return(3*succ(i-1)+2*succ(i-2)-succ(i-3));
}
#define D 10
int main() {/*
    int T[]={-10,-3,-1,1,2,4,5,7,9,10,20,25,31,34};

    cout<<"num="<<f(T,14,25)<<endl;

    cout<<"num="<<succ(7)<<endl;

    int a=4,b=5,c=6,d=7,e=8,n,m;
    n=a%b*c%d/e;
    m=(a%b)*(c%d)/e;
    printf ("n=%d m=%d\n",n,m);
*/
    int M[D],i;
    for (i=0;i<D;i++)
        M[i]=9*i;
    printf ("Sequenza=");
    for (i=0;i<D;i++)
        if (M[i]%(i+1)==0)
            printf (" %2d",M[i]/(i+1));
        else
            printf (" %2d",M[i]%(i+1));

    return 0;
}