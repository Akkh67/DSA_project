#include <iostream>
using namespace std;

int main(){
  int i,no;
  cout<<"enter a number :";
  cin>>no;
  if (no<=1){
    cout<<"not a prime";
    
  }
  for(int i=2;i<no;i++){
    
    if(no % i == 0){
      cout<<"not a prime!";
      break;
    }
    else{
      cout<<no<<" "<<"is a prime!";
      break;
      
    }
  }
  
  }




