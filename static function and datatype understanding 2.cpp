#include<iostream>
using namespace std;
class sample
{
	private:
	static int c;
	
	public:
	sample()
	{
		c++;
	}
	void show()
	{
		cout<<"\nC="<<c;
	}
};
int sample::c;
int main()
{
	sample s1,s2,s3;
	s1.show();
	s2.show();
	s3.show();
}
