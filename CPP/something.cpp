#include<iostream>
using namespace std;
void arraymerge(int Array1[] , int Array2[] , int size1, int size2)
{
	int count=0;
    int size3=size1+size2;
	int Array3[size3];
	
	for (int i=0; i<size1; i++)
	{
	Array3[i]=Array1[i];	
	count++;
	}
	
	for (int i=0; i<size2; i++)
	{
	Array3[i]=Array2[i];	
	count++;
	}
	
	for (int i=0; i<=size3; i++)
	{
	cout<<Array3[i]<<" "<<endl;
	
	}
	

}



int main()
{
	
	int Array1[]= {5,7,8,9,10};
	int Array2[]= {11,13,3,7,1};
	int size1 = sizeof(Array1);
	int size2 = sizeof(Array2);
	arraymerge(Array1, Array2, size1, size2);
	return 0;
}
