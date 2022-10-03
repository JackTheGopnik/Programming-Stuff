#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int array1[11]={2,4,6,8,9,10,13,16,89,11,9};
	int array_max;
	
		for (int c=0; c<=11; c++)
	{
		cout<<"Value at Index "<<c<<" is "<<array1[c]<<endl;
		
	}
	
	for (int i= 0; i<11; i++)
	{
	 array_max+=array1[i];
	}
	
	cout<<"Adding all arrays...."<<endl;
	
	cout<<"all arrays added are "<<array_max<<endl;
	
	
return 0;
}
