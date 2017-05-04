#include<iostream>
#include"area.h"
const double pi = 3.1415926;
using namespace std;
int main()
{
    double r, a, b;
    cout << "enter r: " ;
    cin >> r;
    cout << "Enter a, b: " ;
    cin >> a>> b;
    cout << area(r) << endl;
    cout << area(a,b) << endl;
    return 0;
}

double area(double r)
{
    double temp = pi*r*r;
    return temp;
}

double area(double a, double b)
{
    return a*b;
}


