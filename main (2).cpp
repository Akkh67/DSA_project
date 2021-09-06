#include <iostream>
using namespace std;
int main() {
  int i,n,d;
  int a[n],r[n];
  cout<<"enter array size : ";
  cin>>n;
  cout<<"enter no of rotation:"; cin>>d;
  for(i=0;i<n;i++){
    cout<<" enter array element:\n";
    cin>>a[i];

  }

  cout<<"the array elements are :"<<endl;

  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    
  }

  for(i=0;i<n;i++)
  {
    r[i]=a[(i+d)%n];
  
  }
  cout<<"\n after left rotation :"<<endl;

  for(i=0;i<n;i++)
  {
    cout<<r[i]<<" ";
  }
  }
  


