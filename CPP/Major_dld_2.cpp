#include<iostream>
#include<conio.h>
using namespace std;
// declaring values:
bool a[] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
bool b[] = {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
bool c[] = {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
bool d[] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
//Truth Table Function
void table()
{
			cout<<"Printing truth table before :"<<endl;
	int i;
			cout<<"A |"<<"A` |"<<"B |"<<"C |"<<"C`|"<<"D |"<<endl;
	for (i=0; i<16; i++)
	{
		cout<<a[i]<<" |"<<!a[i]<<"  |"<<b[i]<<" |"<<c[i]<<" |"<<!c[i]<<" |"<<d[i]<<" |"<<endl;
		
	}
		cout<<"Once you have seen the table, press any key to perform the operation."<<endl;
	getch();
	cout<<endl;
			cout<<"Now performing the F= !((`AB`C)`C+D) According to the Diagram"<<endl;
			cout<<"A |"<<"A` |"<<"B |"<<"C |"<<"C`|"<<"D |"<<"F "<<endl;
			
	for (i=0; i<16; i++)
	{
		cout<<a[i]<<" |"<<!a[i]<<"  |"<<b[i]<<" |"<<c[i]<<" |"<<!c[i]<<" |"<<d[i]<<" |"<<((!a[i]*b[i]*!c[i])*!c[i]||d[i])/*performs the Logical Operation*/<<endl;
		
	}	
	
}

int main()
{
	table();
}
