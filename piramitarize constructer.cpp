/*########### Paramitarize constructer ############
"A constructer  which takes one or more parameters is called as paramiterized constructor"
 1; Parameterize constructor use to initialize the datomember of object with specific given values.
 2; If the paramitar are provided in the objecct declaration then paramitarize constructor is called.
 */


#include<iostream>
using namespace std;
class date
{
	private: 
	int month,year, dat;
	
	public:
	      
	       date(int a,int b, int c)
                {
                	month=c;
                	year=b;
                	dat=a;
                
					}	
		 void display()
	       {
	       	
	       	cout<<"\n date in DD//MM//YY format is "<<dat<<"/"<<month<<"/"<<year;
	       		       	cout<<"\n date in MM//DD//YY format is "<<month<<"/"<<dat<<"/"<<year;

	       	
		   }
	
	
	
	
};
int main()
{
	date b(12, 2021, 26);
	b.display();
	
	
	return  0;
}
