#include<iostream>
using namespace std;
int func(int);
int main()
{
    int a, b, c;
    for(a=1 ;a<=9; a++)
    {
        for(b =1;b<=9;b++)
        {
            for(c=1;c<=9;c++)
            {
                cout << a << " " << c << " " << c << endl;
        int x = func(a)+func(b)+func(c);
        int y = a*100+b*10+c;
        if(x==y)
        {
            cout << x << endl;
        }
            }
        }
    }
    return 0;
}

int func(int n)
{
    int result =1;
    for(int m =n; m>=1;m--)
    {
        result *= m;
    }
    return result;
}
