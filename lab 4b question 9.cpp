#include<iostream>
using namespace std;
int factorial(int n);
int p=1,fac;
int main()
{
  int n; 
  cout<<"enter a number"<<endl;
  cin>>n;
  fac=factorial(n);
  cout<<"the factorial of number is="<<fac;
}
int factorial(int n)
{
  if(n>0)
  {
    p=p*n;
    factorial(n-1);
  }
  return p;
}
                 
 
