#include<iostream>
using namespace std;
int  i, j, n;
void displayPattern (int n)
{
for(i = n; i >= 1; i--)
{
for(j = 1; j <= i; j++)
{
cout << "* ";
}
cout << "\n";
}

}
	
int main()
{
	cout << "Enter number of rows:  ";
cin >> n;	
displayPattern(n);	
	
return 0;
	
}
