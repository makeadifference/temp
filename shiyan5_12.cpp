#include<iostream> 
#include<cstdlib> 
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int random = rand()%1001;
    int guess, times=1;
    cout << "输入你猜想的值（0～1000): ";
    cin >> guess;
    while(guess != random)
    {
        if(guess > random)
            cout << "大了" <<endl;
        else 
            cout << "小了" << endl;
        cin >> guess;
        times++;
    }
    cout << "正确" << endl;
    cout << "你一共猜了" << times<<"次" << endl;
    return 0; 
} 
