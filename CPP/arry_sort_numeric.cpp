#include<iostream>
#include<conio.h>
using namespace std;

int main()	
{
	//array declaration
	int arr[10]={10,12,4,6,33,8,14,16,69,29};
	int n,i,j;
	int temp;

	//printing the assigned values
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<=10;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	//sorting - ASCENDING ORDER
	for(i=0;i<=10;i++)
	{		
		for(j=i+1;j<=10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//print sorted array values
	cout<<"Sorted Array values (Ascending Order) :"<<endl;
	for(i=0;i<=10;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
return 0;	
	
}
