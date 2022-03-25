/*#########################constructer#####################
"A special member function of class which is used to initialized data memberes is refered as constructor"
**properties:-Name of is same of is class name 2; It does not have return type 3; Constrecter may takes parameter 4;constrecter can be overloaded 5; It is always declair in a public function of class. 6;constructer is invoke(call) 
automatically whenever an object of an class is created 



#@#@##@#@##@#@#@#@#@@# EXAMPLE @#@#@#@#@#@#@#@#@#@#@#*/


#include<iostream>
using namespace std;

class sample
{
	private: int a, b;
	
	public: 
	sample()  // thise is a constructer 
	{
		a=0;
		b=0;
	}
	void display()
	{
		cout<<"\n a is "<<a;
		cout<<"\n b is "<<b;
	}
	
};
int main()
{

sample d; //invoke automatically because object is created;
d.display();
return 0;
}


