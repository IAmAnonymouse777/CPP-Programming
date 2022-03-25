#include<iostream>
using namespace std;
class sample
{
	int img, real;
	 public:
	 	sample (){ }
	 	sample(int a, int b)
	 	{ 
	 	img=a;
	 	real=b;
	 		
		 }
	void 	getData()
		 {
		 	cout<<"enter the img and real no. for addition";
		 	cin>>img>>real;
		 	
		 	
		 }
		void display()
		{
			cout<<img<<" + "<<real<<"i";
		}
		sample operator+(sample a)
		{
			sample t;
			t.img=a.img+img;
			t.real=a.real+real;
			return t;
			
			
		}
		 
	
};
int main(){

sample a(12,30),b,c;
b.getData();
a.display();
cout<<"\n";
b.display();
cout<<"\n the addition is\n";

c=a+b;//c=a.operator+(b)//operator overloading
c.display();

}



