#include <iostream>
using namespace std;
int reverse(int n);
int main() 
{
	int s,n;
	cout<<"enter a number";
	cin>>n;
	s=reverse(n);
	cout<<"reverse of number is"<<s;
}
int rev=0,r;
int reverse(int n)
{           
	if(n>0)
	{
	   r=n%10;
               rev= (rev*10)+r;
	   reverse(n/10);
	}
	else
	   return rev;
	return rev;
}
	