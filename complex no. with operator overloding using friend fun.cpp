#include<iostream>
using namespace std;
class sample
{
	int img, real;
	 public:
	 	sample (){ }
	 	sample(int a ,int b)
		 {
		 	img=a;
		 	real=b;
		 }
	void getData()
		 {
		 	cout<<"enter the img and real no. for addition";
		 	cin>>img>>real;
		 	
		 	
		 }
		void display()
		{

			cout<<img<<" + "<<real<<"i";
		}

	
friend	sample operator +(sample, sample);
		 
	
};
int main()
{

sample a,b,c;
a.getData();
b.getData();
a.display();
b.display();
cout<<"\n";
c.display();
cout<<"\n the addition is\n";

c=a+b;//c=operator+(a,b)//operator overloading
c.display();

}
	sample operator+(sample a, sample b)
		{
			sample t;
			t.img=a.img+b.img;
			t.real=a.real+b.real;
			return t;
			
			
		}
		



