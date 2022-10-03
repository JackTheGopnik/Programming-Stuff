#include<iostream>
using namespace std;
int main()
{
 int even=0;
int odd=0;
int ARY[51];
for(int i=0;i<=51;i++)
{
	ARY[i]=i;
}
for (int i=0 ; i<=51 ; i++)
	if(ARY[i]%2==0)
	{
	cout<<ARY[i]<<" is an Even Number"<<endl;
	}
	else
	{
	cout<<ARY[i]<<" is an odd Number"<<endl;
	
	}
	return 0;
	
}

