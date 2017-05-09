#include<iostream>
using namespace std;
long int fact(int);
int main()
{
    int n;
    long int f;
    cout << "Input n:";
    cin >> n;
    f = fact(n);
    cout << n << "!="<<f<<endl;
    return 0;
}
long int fact(int m)
{
    int i;
    long int product;
    for(i=1;i<=m;i++)
        product *= i;
    return product;
}
