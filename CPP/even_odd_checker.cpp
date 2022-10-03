#include<iostream>
using namespace std;
void even_odd_check(int a)
{
	
	if (a %2==0)
	cout<<a<<" is not a prime number";
	else
	cout<<a<<" is a prime number ";
}

int main()
{
	int num;
	cout<<"enter a number you want to check "<<endl;cin>>num;
	even_odd_check(num);
	return 0;
}
