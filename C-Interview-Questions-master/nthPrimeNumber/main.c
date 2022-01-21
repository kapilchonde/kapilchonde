#include<iostream>
using namespace std;


int main()
{
	int i,j,n,count=0;
	cin>>n;
	for(i=n;i>0;i++)
	 {
	 	count=0;
	 	 for(j=1;j<=i;j++)
	 	 {
	 	 	count++;
	 	 }
	 	 if(count==2)
	 	   {
	 	   	cout<<i;
	 	   	 break;
	 	   }
	 }
}