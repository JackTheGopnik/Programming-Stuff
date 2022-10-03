//created by Arsalan Fazal (11931)
//BS software Engg. 3rd Semester section B

/*
Note: Since we already know that we have to create 2 arrays dynamically both of length 5,
we dont need to ask the user how many arrays need created nor how many elements they'll contain.
*/

#include<iostream>
using namespace std;
void AR_Dyn()
{
	int* array_1= new int [5]; //dynamic array allocation
	int* array_2= new int [5]; 
	cout<<"enter 5 values for the first array "<<endl;
	for (int x=0; x<5; x++)
	{

	cin>>array_1[x];
	}
// array copy process
for ( int k= 0; k<5 ; k++)
{
	array_2[k] = array_1[k];
}

cout<<"The Second array's values are as given: "<<endl;
for (int ihateDSA=0; ihateDSA<5; ihateDSA++) //displaying the values of array 2
{
	cout<<array_2[ihateDSA]<<" ";	
}

delete [] array_1;
delete [] array_2;

}

int main()
{
	AR_Dyn();
}
