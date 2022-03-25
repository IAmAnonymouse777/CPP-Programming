#include<iostream>
using namespace std;
class sample {
	int x;
	static int y;
	public:
	sample(int a, int b)
	{
		x=a;
		y=b;
	}
	void putdata()
	{
		cout<<"\nx="<<x;
		cout<<"\ny="<<y;
	}
	static void show()
	{
		cout<<"\ny="<<y;
	}
};
int sample::y;
int main()
{
	sample s1(10,20),s2(30,40),s3(40,50);
	s1.putdata();
	s2.putdata();
	s3.putdata();
	sample::show();
	
}
