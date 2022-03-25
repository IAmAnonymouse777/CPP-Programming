#include<iostream>
using namespace std;
class  complex
{
	private: int img, real;

    public:
    	complex()
	{
	}
    	void display()
    	{
	       cout<<"\n"<<real<<"+"<<img<<"i";
		}
	
	 complex(int a ,int b)
	{
		real=a;
		img=b;
	}
	complex operator+(complex a)
	{
		complex t;
		t.img=a.img+img;
		t.real=a.real+real;
		return t;
	}
	
};
int main()
{
	complex c1(4,7),c2(7,3),c3;
	c1.display();
		
	c2.display();
	cout<<"\n addition is ";
		c3=c1+c2;
		
	c3.display();
	
	
	
}
