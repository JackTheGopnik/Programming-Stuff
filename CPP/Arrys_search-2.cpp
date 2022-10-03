#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	//Initilization of Values.
int array[7] = {3,6,8,12,141,15,17};
int check_value=0;	
int searchvalue;

cout<<"Enter a Value that is present in the array and you want to find "<<endl;
cin>>searchvalue;
for(int i=0; i<7; i++)
{
	
if ( array[i] == searchvalue)
{
	cout<<"A Match was found! "<<endl;
 check_value=1;

}

}
if( check_value==0){
	cout<<"no match was found, Please try again "<<endl;
}

return 0;	
}
