#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No. of Lines: ";
    cin >> n;
    for (int i; i <= n; i++)
    {
        for (int j; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}