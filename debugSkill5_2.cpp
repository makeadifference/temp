#include<iostream>
using namespace std;
long int mm(int );
int main()
{
    long int s,i;
    long int mm(int k);
    for(i=1;i<=10;i++)
        s += mm(i);
    cout <<"1!+2!+3!..+10!=" << s << endl;
    return 0;
}

long int mm(int k)
{
    long int t=1,j;
    for(j=1;j<=k;j++)
        t *=j;
    return t;
}
    
