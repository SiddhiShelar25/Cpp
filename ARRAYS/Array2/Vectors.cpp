#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
     v.push_back(7);
    cout<<v.capacity()<<endl;
     v.push_back(8);
    cout<<v.capacity()<<endl;
     v.push_back(9);
    cout<<v.capacity()<<endl;
}