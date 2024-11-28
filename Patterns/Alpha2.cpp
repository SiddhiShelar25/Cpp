// print the pattern user input: n= 4
/*

A B C D
A B C D
A B C D
A B C D */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";  // j+ 64 = A and for small a (j + 96)
        }
        cout << endl;
    }
}