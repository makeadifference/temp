#include<iostream>
#include<cmath>
using namespace std;
double mysin(double);
double mycos(double);
double myabs(double);
double fact(double);
int main()
{
    //cout << mysin(3.14) << endl;
    //cout << sin(3.14) << endl;
    double x;
    cout << "Enter a num: ";
    cin >> x;

    cout << cos(x) << endl;
    return 0;
}

// 获取绝对值   
double myabs(double x)
{
    return x<0?-x:x;
}

//计算阶乘  
double fact(double x)
{
    int result =1;

       for(double m =x; m>=1;m--)
           result *= m;

       return result;
}

double mysin(double x)
{
    double result , temp , temp2;
    int m =1;
    for(double n=1,temp=1; ;n=n+2, temp=temp+2)
    { 
        temp2 =pow(x,n)/fact(temp);
        if(m%2==0)
            result -= temp2;
        else 
            result += temp2;
        m++;

        cout << "looping" << endl;
        if( (myabs(temp2)-0.00001)<0)
            break;
    }
    return result;
}

double mycos(double x)
{
    double result =1 , temp, temp2;
    int m =1;//用于处理正负号   
    for(double n=2,temp=2; ;n=n+2,temp=temp+2)
    {
        temp2 = pow(x,n)/fact(temp);
        if(m%2==0)
            result += temp2;
        else 
            result -= temp2;
        if( (myabs(temp2)-0.00001)<0)
            break;
    }
    return result;
}
