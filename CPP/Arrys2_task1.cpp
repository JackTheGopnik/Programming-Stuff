#include<iostream>
using namespace std;
int main()
{
	int array1[11];
	int array2[11];
	int array3[11];
	int array4[11];
	for (int i= 0; i<11 ; i++){
		cout<<"Enter the values for Array 1 at "<<i<<endl;
		cin>>array1[i];
		
	}
	for (int j= 0; j<11 ; j++){
		cout<<"Enter the values for Array 2 "<<j<<endl;
		cin>>array2[j];
    }

	for ( int b= 0; b<11 ; b++)
	{
	array3[b] = array1[b];
	array4[b] = array2[b];
}
for ( int a= 0; a<11 ; a++)
{
cout<<"\nvalues of array 3 "<<endl;
cout<<"\nvalues of arry 3 at index "<<a<<" = "<<array3[a];
cout<<"\nvalues of Array 4 "<<endl;
cout<<"\nvalues of array 4 at index "<<a<<" = "<<array4[a]<<endl;
}

}


