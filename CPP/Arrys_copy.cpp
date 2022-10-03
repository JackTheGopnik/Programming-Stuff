#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int array1[11]={2,4,6,8,9,10,13,16,89,11931,9};
	int array2[11]={34,11931,2,5,7,8,89,11,1,34,7};
	int array3[11];
	int array4[11];
	for (int i= 0; i<11 ; i++){
		cout<<"Elements for Array 1 at Index Location "<<i<<" : "<<array1[i]<<endl;
	}
	cout<<endl;
	for (int j= 0; j<11 ; j++){
		cout<<"Elements for Array 2 at Index Location "<<j<<" : "<<array2[j]<<endl;
		
    }

	for ( int k= 0; k<11 ; k++)
	{
	array3[k] = array1[k];
	array4[k] = array2[k];
}
cout<<endl;
cout<<"For elements of array 3 "<<endl;
for ( int l= 0; l<11 ; l++)
{
cout<<"element of arry 3 at index "<<l<<" is "<<array3[l]<<endl;

}
cout<<"For elements of Array 4 "<<endl;
for ( int n= 0; n<11 ; n++)
{
cout<<"element of array 4 at index "<<n<<" is "<<array4[n]<<endl;

}
return 0;
}


