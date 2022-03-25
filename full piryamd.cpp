#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"\nEnter the row value";
	cin>>n;
	for(i=n;i>=0;i--){
	
	for(k=n-1;k<0;k--)
	cout<<" ";
	for(j=1;j<=i;j--)
	cout<<"* ";
	cout<<"\n";
}
}
