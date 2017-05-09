#include<iostream>
#include<cmath>
#define PI 3.1415926
using namespace std;
void show_sin_table();
double mysin(double);
double fact(double);
double myabs(double);
int main()
{
    cout << PI << endl;
    show_sin_table();
    return 0;
}

 // 实现sin函数
 // 已知问题，360度不正确！
 double mysin(double x)
 {
     // 角度制转化为弧度制  
     double tranlated = (x/180.0)*double(PI);
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

void show_sin_table()
{
    for(double n =1;n<=90;n++)
    {
        cout << n << "度的sin值为:" << sin(n) << '\t';
    if(int(n)%3==0)
        cout << endl;
    }
}
