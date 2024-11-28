#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool flag=true;  
       for(int i=2; i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is a composite number!! ";
            flag= false;
            break;
        }
       }
       if(n==1) cout<<n<<" is neither prime nor Composite";
       else if(flag==true) cout<<n<<" is a Prime Number!!";
       else cout<<n<<" is a Composite Number!!";

}