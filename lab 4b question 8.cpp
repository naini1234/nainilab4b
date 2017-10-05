#include<iostream>
using namespace std;
int digitsum(int n);
int s=0,su=0,r;
int main()
{
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  s= digitsum(n);
  cout<<"the sum of digits of a number is"<<s;
}
int digitsum(int n)
{
  if(n>0)
  {
    r=n%10;
    su=su+r;
    digitsum(n/10);
  }
  return su;
}

