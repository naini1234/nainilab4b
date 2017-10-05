#include <iostream>
using namespace std;
int oddeven(int a,int b);
int main() 
{
  int a,b,s=0;
  cout<<"enter the interval";
  cin>>a>>b;
  s= oddeven(a,b);
  cout<<"the sum is"<<s;
}
int oddeven(int a,int b)
{
	if(a<=b)
	{
		return a+oddeven(a+2,b);
	}
    else
    {
    	return 0;
    }
}
