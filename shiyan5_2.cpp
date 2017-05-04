#include<iostream>
using namespace std;
void printStars(int);
int main()
{
    int num;
    cout << "Enter the number of lines: " << endl;
    cin >> num;
    printStars(num);
    return 0;
}

void printStars(int n) 
{
    int lines ;
    int cols;
    int temp =n;
    for(lines=1;lines<=n;lines++,temp--)
    {
        //blanks
        for(cols=1;cols<=temp;cols++)
        {
            cout << " " ;
        }
        //stars
        for(cols=1;cols<=(lines*2)-1;cols++)
        {
            cout << "*" ;
        }
        cout << endl;

    }
}


