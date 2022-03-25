#include<iostream>
using namespace std;
class sample
{
	int x;
	
	public :
		sample()
		{
			x=0;
		}
	void display()
	{
		cout<<"\nx = "<<x;
	}
	void operator++()
	{
		x++;
	}
	void operator--()
	{
		--x;
	}
};
int main ()
{
	sample obj;
	obj.display();
	++obj;            //obj.operator++()
	++obj;
	obj.display();
	--obj;           //obj.operator--()     
	obj.display();
}
