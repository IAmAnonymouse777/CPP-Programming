#include<iostream>
using namespace std;
int main()
{
	int *p;
	int x,y,c;
	 	cout<<" enter the x value ";
	 	cin>>x;
	 	cout<<"\n enter the y value";
	 	cin>>y;
	 	c=x+y;
	 	p=&c;
	 	
	 	cout<<"\n the addition is ="<<*p;
	
}
