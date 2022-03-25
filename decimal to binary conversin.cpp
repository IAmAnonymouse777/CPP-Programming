#include<iostream>
using namespace std;
int n;
void dectobin();
//void octtobin();
int main()
{
	cout<<"\n enter int number for decimal to binary convrsion\n";
	cout<<"\n";
	cout<<"\n NOTE:- enter the decimal num in 1 to 10000000 plz.. otherwise you get wrong result !!";
	cout<<"\n";

	cin>>n;
cout<<"\n";
cout<<" \n decimal  to binary conversion are = \n ";	
cout<<"\n";
dectobin();
//cout<<"\n enter the octal num for binary conversion \n";
//cin>>n;	
//cout<<"\n";
//cout<<"\n the oct to binary conversion are = \n";
//octtobin();
	
	
}
void dectobin()
{
	
	int a[100000],i;

     for(i=0;n>0;i++){
     	
     	a[i]=n%2;
     	n=n/2;
	 }
    	
	
			
	for (i=i-1;i>=0;i--)	
	{
		
		cout<<a[i];
	}	
	
	
	
}
/*void octtobin()
{
	int a[10],i;
	for(i=0;n>0;i++)
	{
	a[i]=n%2;
	n=n/2;
	
	
	}
	for(i=i-1;i>=0;i--)
	{
		
		cout<<a[i];
		
	}

	
	
	
	
	
	
}	*/

