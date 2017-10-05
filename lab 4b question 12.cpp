#include<iostream>
using namespace std;
int lcm(int a,int b);
int main()
{
  int a,b,k;
  cout<<"enter two numbers";
  cin>>a>>b;
  k=lcm(a,b);
  cout<<"lcm of numbers is="<<k;
}
int c=1;
int lcm(int a,int b)
{
  if(c%a==0&&c%b==0)
   return c;
  else 
   c++;
  lcm(a,b);
}

