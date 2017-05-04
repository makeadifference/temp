#include<iostream>
using namespace std;
void printStars(int);
int main()
{
    int num;
    cout << "Enter the number of lines" << endl;
    cin >> num;
    printStars(num);

    return 0;

}
void printStars(int n)
{
    int lines;
    int cols;
    // lines 
    for(lines =1;lines <= n; lines++)
    {
        for(cols =1;cols<=lines;cols++)
        {
        cout << "*" ;
        }
        cout << endl;
    }

}


