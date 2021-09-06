#include <iostream>
using namespace std;
int a,b,c;
void swap(int a,int b){
  c=a;
  a=b;
  b=c;
  cout<<"after swapping:\n";
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
}
int main() {
cout<<"enter a number,a:";
cin>>a;
cout<<"enter a number,b:";
cin>>b;
cout<<"before swapping:"<<endl;
cout<<"a ="<<a<<endl;
cout<<"b ="<<b<<"\n"<<"\n";
swap(a,b);
}



