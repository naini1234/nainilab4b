#include <iostream>
using namespace std;
int pallindrome(int n);

int main() 
{
	int n,rev;
	cout<<"enter a number";
	cin>>n;
	rev=pallindrome(n);
	if(rev==n)
	 cout<<"number is pallindrome";
	else
	  cout<<"number is not pallindrome";
}
int rev=0,r;
int pallindrome(int n)
{           
	if(n>0)
	{
	   r=n%10;
               rev= (rev*10)+r;
	   pallindrome(n/10);
	}  
            return rev;

}