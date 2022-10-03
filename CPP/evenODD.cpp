#include<stdio.h> 
#include<iostream> 
#include <iomanip>  
using namespace std; 
int main()
{    
int even=0;
int odd=0;
int Ary[51];
for(int i=1;i<=100;i++)
{
	for(Ary[i]; ; ;)
	if(i%2==0)
	{
	even=even+i;
	}
	else
	{
	odd=odd+i;
	}
	setw(3); 
	cout<<i;
	cout<<"\n";
}

cout<<"Sum of even numbers is "<<even<<endl;
cout<<"Sum of odd numbers is "<<odd;
return 0;  
}    
