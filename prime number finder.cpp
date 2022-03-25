#include<iostream>
using namespace std;
int main()
{
	int x, i,c=0;
	
	cout<<"enter number for checking prime or not";
	cin>>x;
	
	for (i=1;i<=x;i++)
	{
		if(x%i==0)
		c++;
	}
		if (c==2)
			cout<<"\n"<<x<<"is a prime number";
			
		else 
			cout<<"\n"<<x<<"is not a prime number";
			
		
		return(0);
	}
	
	
	
	

