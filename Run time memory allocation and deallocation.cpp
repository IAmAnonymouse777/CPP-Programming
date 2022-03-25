#include<iostream>
using namespace std;
class student{
	int rno;
	char name[20];
	int test1,test2;
	public:
		void getdata()
		{
			cout<<"\n Enter the student roll no.";
			cin>>rno;
			cout<<"\n Enter the name of student";
			cin>>name;
			cout<<"\n Enter the test1 & test2 marks";
			cin>>test1>>test2;
		}
		void avg()
		{
			float result;
			result=test1+test2/2.0;
			cout<<result;
		}
		void putdata()
		{
			cout<<"\n*******************************************\n";
			cout<<"\n The student roll no are"<<"\n"<<rno;
			cout<<"\n The name of student are"<<"\n"<<name;
			cout<<"\n The marks of test are test1 & test2 respectively are\n"<<test1<<"\n"<<test2;
			cout<<"\n The  avg Of student in test";avg();
			cout<<"\n*******************************************\n";
		}
};
int main ()
{
	student *s;
	int n,i;
	cout<<" \nHow many student you want";
	cin>>n;
	s=new student[n];
	for(i=0;i<n;i++)
	s[i].getdata();
	cout<<"\n The student is Above=\n";
	for(i=0;i<n;i++)
	s[i].putdata();
	delete []s;
}
