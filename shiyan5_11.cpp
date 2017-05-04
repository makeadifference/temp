#include<iostream>
using namespace std;
int main()
{
    char cChioce;
    void eat();
    void sleep();
    void hitdoudou(char name[8]);
    do 
    {
        cout << "1,睡觉" << endl;
        cout << "2,睡觉" << endl;
        cout << "3,打豆豆" << endl;
        cout << "0,退出" << endl;
        cin >> cChioce;
        if(cChioce=='1')
            eat();
        else if(cChioce=='2')
            sleep();
        else if(cChioce=='3')
            hitdoudou("doudou");
        else if(cChioce=='0')
            break;
        else {
        
            cout <<"\007选择错误" << endl<<endl;
            continue;
        }
        cout <<"恭喜你完成了一项工作" << endl<<endl;
    } while(1);
    return 0;

}

void eat()
{
    cout <<"我吃豆豆"<<endl;
}

void sleep()
{
    cout << "我睡觉觉" << endl;
}

void hitdoudou(char name[8])
{
    cout << "我打豆豆" << endl;
}
