#include<iostream>
using namespace std;
int fibonacci(int n);
int f;
int main()
{
  int n;
  cout<<"enter a number";
  cin>>n;
  if(n<0)
   cout<<"fibonacci of a negative number is"<<n;
  else
  {
    f=fibonacci(n);
    cout<<"fibonacci of given number is"<<f;
  }
}
int fibonacci(int n)
{ int x;
  if(n==0)
   return 0;
  else if(n==1)
   return 1;
  else
    x=fibonacci(n-1)+fibonacci(n-2);
  return x;
}

