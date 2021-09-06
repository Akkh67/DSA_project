#include <iostream>
using namespace std;

int main() {
  int n, g,ig;
  int a[10];
  // 
 cout<<"enter the no of students: ";
  cin>>n;
  cout<<"\n enter the grades of "<<n<<" students :";
  for(int i=0;i<n;i++){
    cin>>a[i];
 }
  cout<<"\n the grades are :"<<endl;
  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";
  }
  
  cout<<"\n rounded grades are :"<<endl;

  for(int i=0;i<n;i++){
    ig=(a[i]+(5-(a[i]%5)));
    if(a[i]<38)
    {
      cout<<a[i]<<" ";
      break;
      
    }
    if((ig-a[i])<3){
      cout<<ig<<" ";
    }
    else{
      cout<<a[i]<<" ";
    }
      
    }

  }


