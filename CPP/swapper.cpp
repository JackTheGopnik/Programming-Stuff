#include<iostream>
using namespace std;
int swap(int a,int b)
{
int buffer = a;
a = b;
b = buffer;
cout<<"after swap we have "<<a<<" and "<<b<<" "<<endl;
}

int main()
{
	int n1,n2;
	cout<<"enter two numbers to be swapped "<<endl;
	cin>>n1>>n2;
	cout<<"before swap we have "<<n1<<" and "<<n2<<endl;
	swap (n1, n2);
	
}
