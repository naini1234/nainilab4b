#include<iostream>
using namespace std;
int gcd(int a,int b);
int k;
int main()
{
  int a,b;
  cout<<"enter two numbers";
  cin>>a>>b;
  k=gcd(a,b);
  cout<<"the gcd of number is="<<k;
}
int gcd(int a,int b)
{
 if(a>=b&&a%b==0)
  return b;
 else
  gcd(b,a%b); 
}

  
