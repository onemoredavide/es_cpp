#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    /*Calcolare il valore più grande (max) e la media di N (N<100) numeri random positivi (da 0 escluso a 70) usando il ciclo while con controllo in testa*/
    srand(time(NULL));
    int n,s=0,max,i=0,x,m;
    do
    {
        cin>>n;
    } while (n<=0||n>=100);
    do
    {
        x=rand()%69+1;
        if (i==0)
            max=x;
        else
        {
            if (x>max)
                max=x;
        }
        s+=x;
        i++;
    } while (i<n);
    m=s/n;
    cout<<"MEDIA: "<<m<<endl;
    return 0;
}