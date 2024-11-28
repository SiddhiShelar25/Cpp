// GP= 1,2,4,8,16,32,64...n
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
int a= 1;
    for(int i=1; i<=n;i=i+2){
        cout<<a<<endl;
        a=a*2;
    }
  
}