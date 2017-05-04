#include<iostream>
using namespace std;
int common(int ,int);
int minMutipier(int , int);
int main()
{
    int a, b;
    cin >> a >> b;
    cout << common(a,b) << endl;
    cout << minMutipier(a,b) << endl;
    return 0;
}

int common(int a, int b)
{
    int R =a%b;
    while(R!=0)
    {
        a = b;
        b = R;
        R = a%b; 
    }
    return b;
}

int minMutipier(int a, int b)
{
    return a*b/common(a,b);
}
    
