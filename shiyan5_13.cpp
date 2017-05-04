#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int randomBetween(int , int);
void printResult();
int main()
{
    srand(time(NULL));
    printResult();
    return 0;
}

int randomBetween(int a, int b)
{
    int randomNumber;
    // 有绝对值问题
    randomNumber = (rand()%((b+1)-a))+a;
    return randomNumber;
}

void printResult()
{
    int num =1;
    int a, b;
    for(int n = 1161;n<=1168;n++)
    {
        // 每个班的打印范围:
        switch (n) {
            case 1161: a=1;   b=35;  break;
            case 1162: a=36;  b=68;  break;
            case 1163: a=69;  b=102; break;
            case 1164: a=103; b=135; break;
            case 1165: a=136; b=170; break;
            case 1166: a=171; b=205; break;
            case 1167: a=206; b=240; break;
            case 1168: a=241; b=275; break;
        }

        cout << "信计"<< n<<"班抽到的5个同学的序号是："<< endl;
        
        for(int m=1;m<=5;m++)
        {
            cout<< "第"<<num<<"个人的编号为："<< randomBetween(a,b)<< '\t'; 
            num++;
            if(m%2==0)
                cout << endl ; // 每行打印两次后换行
        }
        cout << endl<< endl;
    }
}
