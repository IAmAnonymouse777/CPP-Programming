#include<iostream>
using namespace std;
int main ()
{
int *p; 
int c=10;
p=&c;
cout<<"\nthe c is ="<<c;
cout<<"\nthe address of c = "<<&c;
cout<<"\nthe c is "<<*p;
cout<<"\nthe address of c is "<<p;
	
return 0;	
	
}
