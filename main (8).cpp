#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  cout<<"enter value of a :";
  cin>>a;
  cout<<"enter value of b :";
  cin>>b;
  cout<<"enter value of c :";
  cin>>c;
  if(a>b && a>c){
    cout<<"a is te largest number!!";
  }
  else if(b>a && b>c){
    cout<<"b is te largest number!!";
  }
  else{
    cout<<"c is the largest number!";
  }
}