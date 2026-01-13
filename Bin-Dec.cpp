#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n;
   cout<<"enter the size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter your binary number:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int decimal=0;
    int power=0;
    for(int i=n-1;i>=0;i--){
        decimal=decimal+a[i]*pow(2,power);
    power++;
    }
  cout<<"value in decimal is:"<<decimal<<endl;
  

return 0;
}