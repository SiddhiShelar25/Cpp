#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(2);
    v.push_back(10);
    v.push_back(3);
    v.push_back(8);
    v.push_back(10);
    int x = 10;
    int idx = -1;
    //first method
    // for(int i=0; i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }

    //second method
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }
    cout << idx;
}