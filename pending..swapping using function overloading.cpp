#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(float&, float&);
void swap(char, char);
int main()
{
	
	int x,y;
	float a,b;
	char p,q;
	cout<<"\n enter two int num for swaping";
	cin>>x>>y;
	cout<<"\n enter two float num for swapping ";
	cin>>a>>b;
	cout<<"\n enter two charecter for swapping";
	cin>>p>>q;
	cout<<"\n after swapping int num are "<<"\n"<<x<<"\n"<<y;
	cout<<"\n before swapping int num are =";
	swap(a,b);
	
		cout<<"\n after swapping float num are "<<"\n"<<a<<"\n"<<b;
	cout<<"\n before swapping float num are =";
	 swap(a,b);
	
		cout<<"\n after swapping charecters are "<<"\n"<<p<<"\n"<<q;
    cout<<"\n before swapping charecters are ";
	  swap(p,q);
	
}
void swap(int &m, int &n)
{
	int temp;
	m=temp;
	m=n;
	n=temp;
	
}
void swap(float &m, float &n)
{
	float temp;
	
temp=m;
	m=n;
	n=temp;
	
	
}
void swap(char m , char n)
{
	
char temp;
	m=temp;
	n=m;
	n=temp;
	
	
	
	
}
