#include<iostream>
#include<cmath>
using namespace std;
double translate(double );
double myabs(double);
double fact(double);
double mycos(double);
double mysin(double);
int main()
{
    double n = 1;
    while(n!=0)
    {
        cin >> n;
        double temp = translate(n);
        cout << cos(temp) << endl;
        cout << mycos(temp) << endl;
        cout << "****************sin****************" << endl;
        cout << sin(temp) << endl;
        cout << mysin(temp) << endl;
}
    return 0;

}

//将角度制转化为弧度制  
double translate(double d)
{
    return (d/180.0)*double(M_PI);
}
// 返回绝对值           
double myabs(double num)
{
    return num >0?num:-num;
}
// 实现一个数的阶乘 
double fact(double num)
{
    double result=1;
    for(int n=num;n>0;n--)
        result *= n;
    return result;
}

// 实现sin函数          
// 已知问题，360度不正确！  
double mysin(double x)
{
    int sign = -1;// 控制符号  
    double result =x, item;
    for(int n=3;;n=n+2)
    {
        item = pow(x,n)/fact(n);
        result += sign*item;
        sign = -sign;
        if(myabs(item)-0.00001<0)
            break;
    }
    return result;
}

// 实现cos函数  
// 90度 误差突然增大！  
double mycos(double x)
{
    int sign = -1;
    double result = 1, item;
    for(int n=2;;n=n+2)
    {
        item = pow(x,n)/fact(n);
        result += sign*item;
        sign *= -1;
        if(myabs(item)-0.00001<0)
            break;
    }
    return result;
}
