// print the pattern user input: no. of rows and no. of columns
/*
*****
*****
***** */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    int m;
    cout << "Enter number of cols:";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}