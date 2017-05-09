#include<iostream>
using namespace std;
void printStars(char , int);
int main()
{
    int num;
    char ch;
    cout << "请输入你希望打印的行数:";
    cin >> num;
    cout << "请输入你希望打印的字符:";
    cin >> ch;
    printStars(ch,num);
    return 0;
}
void printStars(char ch, int n)
{
    int lines;
    int cols;
    // lines
    for(lines=1;lines<=n;lines++)
    {
        for(cols=1;cols<=lines;cols++)
            cout << ch;
        cout << endl;
    }
}

