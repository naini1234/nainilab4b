#include<iostream>
using namespace std;
int printarray(int arr[],int start,int end);
int main()
{
 int end,arr[end];
 cout<<"enter the no of elements in array";
 cin>>end;
 cout<<"enter the elements of array";
 for(int i=0;i<end;i++)
 {
   cin>>arr[i];
 }
 printarray(arr,0,end);
}
int printarray(int arr[],int start,int end)
{
 if(start>=end)
   return 0;
   cout<<arr[start];
 printarray(arr,start+1,end);

}

 
 
