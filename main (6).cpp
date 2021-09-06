#include <iostream>
using namespace std;
int main() {
  int a=-1,b=1,n,i,sum;
  cout<<"enter n :";
  cin>>n;
  for(i=0;i<n;i++){
    sum=a+b;
    
    a=b;
    b=sum;
    cout<<sum<<endl;
  
    
  }




}
