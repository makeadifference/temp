#include<iostream>
using namespace std;
int d=0;
void f(int a)
{
    static int b=0;
    int c=0;
    a++;
    b+=2;
    c+=3;
    d+=4;
    cout << a << " " << b << " " << c << " " << d << endl;
}

int main()
{
    for(int i=0;i<4;i++)
        f(i);
    return 0;
}
