#include<iostream>
#include<conio.h>
using namespace std;
int User_ID;
string name;
int unit;
float bill;
void func_name()
{
	cout<<endl;
cout<<"=========BILLING SERVICE========="<<endl;
cout<<"User ID: "<<User_ID<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Units Consumed: "<<unit<<endl;
cout<<"Total Bill = $"<<bill<<endl;	
	
}


int main()
{

	cout<<"Enter your User ID "<<endl;
	cin>>User_ID;
	cout<<"Enter your name "<<endl;
	cin>>name;
	intel:
	cout<<"Enter the Number of Units used as per your last bill "<<endl;
	cin>>unit;
	if(unit<100)
	{
		cout<<"Unit entered is not valid, Please Try again "<<endl;
		goto intel;
	}
	
	
	
	if (unit<=199)
	{
		bill=unit*1.20;
		func_name();	
	}
	if (unit>=200 &&unit<400)
	{
		bill=unit*1.50;
		func_name();
		
	}
	
		if (unit>=400 && unit<600)
	{
		bill=unit*1.80;
		func_name();
		
	}
	
		if (unit>=600)
	{
		bill=unit*2.00;
		func_name();	
	}	
	return 0;
}
