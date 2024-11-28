// print the pattern user input: no. of -> 4
/*
1
12
123
1234 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}