#include <iostream>
using namespace std;
int sum(int i,int n);
int main() 
{
	int i=1,n,r;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	r=sum(i,n);
	cout<<"sum="<<r;
	return 0;
}
int sum(int i,int n)
{
	if(i<=n)
	{
		return i+sum(i+1,n);
	}
    else
    {
    	return 0;
    }   
}   