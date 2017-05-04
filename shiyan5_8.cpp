#include<iostream>
#include<cmath>
using namespace std;
int turnOver(int);
bool isPrimer(int );
bool isHuiwen(int);
int main()
{
    // primer between 1 and 1000
    cout << "Primer between 1 and 1000" << endl;
    for(int n=1;n<=1000;n++)
    {
        if(isPrimer(n))
            cout << n << '\t' ;
    }
    
    // huiwen number between 1 and 10000
    cout << "HuiWen number between 1 and 10000" << endl;
    for(int n=1;n<=10000;n++)
    {
        if(isHuiwen(n))
            cout << n << '\t';
    }

    // (3)
    cout << "Both Huiwen and primer between 1 and 10000 " << endl;
    for(int n=1;n<=10000;n++)
    {
    if(isPrimer(n) && isHuiwen(n))
        cout << n << '\t';
     }

     // Turn over but are still Primer
     cout << "Turn over but still Primer" << endl;
     for(int n=1;n<=10000;n++)
     {
        if(isPrimer(n))
        {
            int temp = turnOver(n);
            if(isPrimer(temp))
                    cout << n << '\t';
        }
     }
    return 0;
}


bool isPrimer(int num){

    bool result;
    for(int n=2;n<num;n++)
    {
        if(num%n==0)
        {
            result = false;
            break;
        } 
        else 
            result = true;
    }
    return result;
}

int turnOver(int n)
{
    int result = n;
    // 0<n<100
    if(n>0 && n<100)
    {
        int ge , shi;
        shi = n/10;
        ge = n-shi*10;
        result = ge*10+shi;

    }
    // 100 <= n << 1000
    if(n>=100&& n<=1000)
    {
        int ge , shi, bai;
        bai = n/100;
        shi = (n-bai*100)/10;
        ge = n -bai*100-shi*10;
        result =ge*100+shi*10+bai;
    }

    // 1000<=n<=10000
    if(n>=1000&& n<=10000)
    {
        int ge , shi , bai , qian;
        qian = n/1000;
        bai = (n-qian*1000)/100;
        shi = (n-qian*1000-bai*100)/10;
        ge = n-qian*1000-bai*100-shi*10;
        result = ge*1000+shi*100+bai*10+qian;
    }
    return result;
}

bool isHuiwen(int n)
{
    bool result;
    // 0<n<10
    if(0<n&&n<10)
        result = true;
    // 10<=n<100
    if(10<=n&&n<=100){
        int ge , shi ;
        shi = n/10;
        ge = n-shi*10;
        if(ge==shi)
            result = true;
        else 
            result = false;
    }

    // 100<=n<1000
    if(100<=n&&n<1000){
        int ge , shi , bai;
        bai = n/100;
        shi = (n-bai*100)/10;
        ge = n -bai*100-shi*10;

        if(bai==ge)
            result = true;
        else 
            result = false;
    }

    // 1000<=n<10000
    if(1000<=n&&n<10000){
        int ge , shi , bai ,qian;
        qian = n/1000;
        bai = (n-qian*1000)/100;
        shi = (n-qian*1000-bai*100)/10;
        ge = n-qian*1000-bai*100-shi*10;

        if(ge==qian && bai==shi)
            result = true;
        else 
            result = false;
    }
    return result;
}

