//wap a overload unary minus operater
#include<iostream>
using namespace std;
class sample{
	
	int x,y,z;
	
	
	public:
		sample(){	}
		sample(int a, int b, int c)
		{
			x=a;
			y=b;
			z=c;
			
		}
		void display()
		{
			cout<<"\nx ="<<x;
			cout<<"\ny ="<<y;
			cout<<"\nz ="<<z;

			
			
		}
	  sample operator-()
	{
		sample t;
		t.x=-x;
		t.y=-y;
		t.z=-z;
       return t;
		
		
	}
	
	
};
int main()
{
	sample s1(10,-20,30),s2;
	s2=-s1;//s2=s1.operator-(); call statement
	s1.display(); ;
	cout<<"\n";
	s2.display();
}

	

