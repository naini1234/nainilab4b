#include <iostream>
using namespace std;
int oddeven(int a,int b);
int main()
{
	int a,b;
	cout<<"enter the upper limit"<<endl;
	cin>>a;
	cout<<"enter the lower limit"<<endl;
	cin>>b;
    oddeven(a,b);	
}
int oddeven(int a,int b)
{
	if(a<=b)
	{
		if(a%2==0)
		  cout<<"even number="<<a<<endl;
		else
		  cout<<"odd number="<<a<<endl;
		oddeven(a+1,b);
	}	
	else	
	return 0;
}