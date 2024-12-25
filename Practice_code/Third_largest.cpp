#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    //input
    for (int  i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    //second max value
    int Smax;
    Smax = INT_MIN;
    for (int  i = 1; i < n-1; i++)
    {
        if (Smax < arr[i]) Smax = arr[i];

    }
    cout<<"second max = "<<Smax<<endl;
    //  max value
    int max;
    max = INT_MIN;
    for (int  i = 1; i <= n-1; i++)
    { 
       if (max < arr[i] &&  arr[i] != Smax) max = arr[i];
    }
    cout<<" maximum no is "<<max<<endl;


    int tmax;
    tmax = INT_MIN;
    for (int  i = 1; i <= n-1; i++)
    {
       if (tmax < arr[i] &&  arr[i] != Smax && arr[i] != max ) tmax = arr[i];
    }
    cout<<"Third maximum no is "<<tmax<<endl;
    
    return 0;
}
