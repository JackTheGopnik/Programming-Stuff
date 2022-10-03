#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float rad;
	 
	cout<<"We are going to use this program to find the Area and Diameter of a circle "<<endl;
	cout<<"to do that, we must first Enter a radius. Enter the Radius Below: "<<endl;
	cin>>rad;
	
	//Opreation Performed after input to aqcuire the values of Diameter, Area and Circumference.
	int Diameter = rad*2;
	float Area = 3.14*rad*rad;
	float Circumference = 2*3.14*rad;

   cout<<"According to the given radius, Diameter will be  "<<Diameter<<endl;
   cout<<"According to the given radius, Area will be  "<<Area<<endl;
   cout<<"According to the given radius, Circumference will be  "<<Circumference<<endl;
   return 0;

	
}
