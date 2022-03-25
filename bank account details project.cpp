#include<iostream>
using namespace std;
class bankAcc
{
  private: int ano;
  float ammount;
  char name[30], city[20];  
  public:
  	void getData();
  	void putData();
	void withdraw();
	void deposite();
	int getano()
	{
		return(ano);
	}
	
};
void bankAcc::getData()
{
	cout<<"\nEnter the account no.";
	cin>>ano;
	cout<<"\n Enter the name of custemer";
	cin>>name;
	cout<<"\n Eneter the city ";
	cin>>city;
	cout<<"\n Enter the ammount";	
	cin>>ammount;
	
}
void bankAcc::putData()
{    
    cout<<"\n"<<"1.Account no."<<"\t"<<"2.Name"<<"\t"<<"3.City"<<"\t"<<"4.total ammount";
	cout<<"\n"<<ano<<"\t\t"<<name<<"\t"<<city<<"\t"<<ammount;
	
}
void bankAcc::deposite()
{
	float x;
	
	cout<<"\n enter the ammount for deposite!";
	cin>>x;
	ammount=ammount+x;
	
}
void bankAcc::withdraw()
{
   float x;
   cout<<"\n enter the ammount for withdraw";
   cin>>x;
   if (ammount<=x)
   {
	   
   	cout<<"\nsorry!! you have insuficient fund";
   	
   }
   else
   {
   	ammount=ammount-x;
   	cout<<"\n ammount is successfull withdraw!! thanks for transaction.";
   }
}


int main()
{

   bankAcc a[10];
   int i,choice;
   for(i=0;i<10;i++)
   {
   a[i].getData();
   }
  // a.deposite();
   //a.putData();
   //a.withdraw();
   //a.putData();
do
{
	cout<<"\n\n\n";
	cout<<"#######:MENU:#######";
	cout<<"\n1 deposit"<<"\n2 withdraw"<<"\n3 display"<<"\n4 exit";
	cout<<"\n Plzz Enter the choice?";
	cin>>choice;
	if(choice>=1 && choice<=3)
	{
		int tempa;
		cout<<"enter the account no. ";
		cin>>tempa;
		for(i=0;i<10;i++)
		{
		
		if(a[i].getano()==tempa)
		  {
		  	switch(choice)
		  	{
		  		case 1:a[i].deposite();break;
		  		case 2:a[i].withdraw();break;
		  		case 3:a[i].putData();break;
		  		
			  }
		  	break;
		  	
}
		  	
		  	
		  }if (i==10)
		      cout<<"\n Invalid account no.";
		      
		
		
		
		
	}else if(choice==4)
	cout<<"\n Good bye ";
	else 
	cout<<"\n Invalid choice";
	
	
	
	
}while(choice!=4);

return (0);
}

