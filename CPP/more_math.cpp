#include<iostream>
#include<conio.h>
using namespace std;

int int1 (int x)
{
	int n = x=7+3*6/2-1;
	return n;
}

int int2 (int x)
{
	int n = x=2%2+2*2-2/2;
	return n;
}

int int3 (int x)
{
	int n = (3*9*(3+(9*3/(3) ) ) ) ;
	return n;
}


int main()
{
	cout<<"value of the first x is "<<int1<<endl;
	cout<<"value of the second x is "<<int2<<endl;
	cout<<"value of the third x is "<<int3<<endl;
	
	return 0;
	
}
