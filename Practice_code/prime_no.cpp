#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter any number:";
    cin >> num;
    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % 1 == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << num << " is prime!" << endl;
    }
    else
    {
        cout << num << " is not a prime!" << endl;
    }
    return 0;
}