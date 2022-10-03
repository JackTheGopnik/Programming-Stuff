#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	//Initilization of Values.
int arry[7] = {3,6,8,12,141,15,17};
int check_value=0;	
int arry_searchvalue;
//incase the search finds no matches.
Label_Start_marker:
cout<<"Enter a Value that is present in the array and you want to find "<<endl;
cin>>arry_searchvalue;
for(int i=0; i<7; i++)//loop that handles checking of each index for matching value
{
	
if ( arry[i] == arry_searchvalue)
{
	cout<<"A Match was found! "<<endl;
	cout<<"The Value was at Index Number "<<arry[i]<<endl;
 check_value=1;
}

}
if( check_value==0){
//The Search Will loop till the correct number is found.
	cout<<"no match was found, Please try again "<<endl;
	goto Label_Start_marker;
}

return 0;	
}
