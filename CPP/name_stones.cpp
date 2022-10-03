#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	

	cout<<"enter the name of the first stone \n";
	char first_stone[32];
	cin.getline(first_stone,32);
	
	cout<<"enter the name of the second stone \n";
	char second_stone[32];
	cin.getline(second_stone,32);
	
	cout<<"enter the name of the third stone \n";
	char third_stone[32];
	cin.getline(third_stone,32);
	
    cout<<"enter the name of the fourth stone \n";
    char fourth_stone[32];
	cin.getline(fourth_stone,32);
	
	cout<<"enter the name of the fifth stone \n";
	char fifth_stone[32];
	cin.getline(fifth_stone,32);
	
	cout<<endl;
		
	cout<<"The name of All infinity stones in order are : \n";
	cout<<first_stone<<endl;
	cout<<second_stone<<endl;
	cout<<third_stone<<endl;
	cout<<fourth_stone<<endl;
	cout<<fifth_stone<<endl;
	return 0;
}
