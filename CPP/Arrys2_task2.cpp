#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	//Initilization of Values.
int array[7] = {3,6,8,12,141,15,17};
int check_value=0;	
int searchvalue;
int index;

cout<<"Enter a Value you want to find in array "<<endl;
cin>>searchvalue;
for(int i=0; i<7; i++)
{
if(array[i]==searchvalue)
{
check_value=1;
index=i+1;
break;
}
}

if(check_value==0)
{
cout<<"Value Not Found.";
}

else
{
   cout<<" Value "<<searchvalue<<" Found At Position "<<index<<endl;
}


return 0;	
}
