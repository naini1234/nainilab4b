#include <iostream>
using namespace std;
int natural(int i,int n);
int main() 
{
	int n,i=1;
	cout<<"enter the value of n";
	cin>>n;
	natural(i,n);
}
int natural(int i,int n)
{
    if(i<=n)
    {
      cout<<i;
      natural(i+1,n);
    }
    else
      return 0;
}      