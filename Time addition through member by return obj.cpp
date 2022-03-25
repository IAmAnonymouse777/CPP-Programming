#include<iostream>
using namespace std;
class Time
{
	int hr, min;
	
	public: 
	Time()
	{
	
	}
	
	Time(int a, int b)
	{
	hr=a;
	min=b;
    }
    
    
	read()
	{
		cout<<"\n enter the hrs and min to add";
		cin>>hr>>min;
		
	}
	Time add (Time a)
	{
		Time t;
		t.min=a.min+min;
		t.hr=a.hr+hr+t.min/60;
		t.min=min%60;
		return t;
		
	}
	void display()
	{
		cout<<"\n"<<hr<<":"<<min;
		
	}
	
};
int main()
{
    Time  a(2,54),b(3,24),c;
    a.read();
    b.read();
    c=a.add(b);
    a.display();
    b.display();
        cout<<"\naddition is \n ";
        c.display();
	
	
}
