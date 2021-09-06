#include <iostream>
using namespace std;
int main() {
 int yr;
 cout<<"enter an year:";
 cin>>yr;
 if(yr%400==0 ||( yr % 100 != 0 && yr%4==0)){
   cout<<yr<<" "<<"is a leap year!";
 }
   
 else {
   cout<<yr<<" "<<"not a leap year";
 }

}