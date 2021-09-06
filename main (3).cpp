#include <iostream>
#include<limits.h>
using namespace std;


int main() {

  int n,max,smax;
   max= smax =INT_MIN;
  cout<<"enter the no of elements :";
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
    cout<<"enter an arrary element :"<<endl;
    cin>>ar[i];
  }

  cout<<"\nthe array elements are :\n\n";

  for(int i=0;i<n;i++){
    cout<<ar[i]<<" "<<endl;
  
  }

  for(int i=0;i<n;i++){
    if (ar[i]>max){
      smax=max;
      max=ar[i];
    }
    else if(ar[i]>smax){
      smax=ar[i];

    }
  }
  cout<<" second largest element is:"<<smax;
  return 0;
}