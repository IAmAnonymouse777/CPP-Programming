#include<iostream>
using namespace std;
class emp
 {
 	private:
	 int salary,eno,age;
	 char name[30],gender[20],city[20];
	 
	 
	public: 
	void getData();
	void putData();
	
	
};
void emp::getData()
{
	cout<<"\n plz insert the employee name!";
	cin>>name;
	cout<<"\n plz insert the salary!";
	cin>>salary;
	cout<<"\n plz insert the enrollment no.";
	cin>>eno;
	cout<<"\n plz insert the age";
	cin>>age;
	cout<<"\nenter the gender";
	cin>>gender;
	cout<<"\n plz insert the city!";
	cin>>city;
	
}
void emp::putData()
{
	cout<<"\n"<<eno<<"\t\t\t"<<name<<"\t\t"<<salary<<"\t"<<age<<"\t"<< gender<<"\t"<<city;
}
int main()
{
	int i;
	emp a[10];
	for (i=0;i<10;i++)
	{
	
	a[i].getData();
	
    }
    	cout<<"\n"<<"enrollment no."<<"\t"<<" Name of employee"<<"\t"<<"Salary"<<"\t"<<"Age"<<"\t"<<"Gender"<<"\t"<<"City";

    for (i=0;i<10;i++)
    {
    	a[i].putData();
	}
    return (0);
}
