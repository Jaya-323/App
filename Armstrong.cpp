#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n,d,c,s;
   cout<<"Number is:";
   int temp=0;
   int num;
   for(int i=1;i<=500;i++){
    temp=i;
    n=i;
    d=0;
    c=0;
    s=0;
    num=i;
    while(num!=0){
        c++;
        num/=10;
    }
    while(temp!=0){
        d=temp%10;
        s = s + (int)pow(d, c);

       temp=temp/10;
    }
    if(n==s){
        cout<<i;
        cout<<endl;
    }
   }

}
