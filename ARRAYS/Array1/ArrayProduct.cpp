#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }
    cout<<"Product of Array is: " << product;
}