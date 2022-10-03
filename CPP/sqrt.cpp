#include<iostream>
using namespace std;
int sq(int x)
{
	int v = x*x;
	return v;
}


int main()
{
	int x;
	cout<<"enter a number ";cin>>x;
	cout<<endl;
	cout<<"The square of "<<x<<" is "<<sq(x);
	
	
}
