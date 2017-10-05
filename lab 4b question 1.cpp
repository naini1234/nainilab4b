#include <iostream>
using namespace std;
int power(int b,int p);
int main() 
{
	int b,p,r;
	cout<<"enter base";
	cin>>b;
	cout<<"enter power raised";
	cin>>p;
	r=power(b,p);
	cout<<r;
	return 0;
}
int power(int b,int p)	
{
	 if(p==0)
	  return 1;
	 else
	  return b*power(b,p-1);
}