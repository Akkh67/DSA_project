#include <iostream>
#include<ctype.h>
using namespace std;

int main() {
  
  char string[50];
  int count=0;
  cout<<"enter a camelcase string : ";
  cin>>string;
  for(int i=0;string[i]!='\0';i++){
    if(isupper(string[i])!=0){
      ++count;
    }
  
  }
  cout<<" the number of words in the given string is :"<<++count;
}