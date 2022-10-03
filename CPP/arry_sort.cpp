#include<iostream>
#include<conio.h>
using namespace std;

int main()	
{
	//array declaration
	char arr[10]= {'j','h','i','e','f','d','g','b','c','a'};
	int n,i,j;
	int temp;

	//printing the assigned values
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<=10;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;
	
	//sorting - ASCENDING ORDER
	for(i=0;i<=10;i++)
	{		
		for(j=i+1;j<=10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//print sorted array values
	cout<<"Sorted Array values (Ascending Order) :"<<endl;
	for(i=0;i<=10;i++)
	cout<<arr[i]<<"  ";
	cout<<endl;	
return 0;	
	
}
