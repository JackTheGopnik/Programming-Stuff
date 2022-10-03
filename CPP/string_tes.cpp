#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
if(!cin) // or if(cin.fail())
{
cout<<"User didnt enter a number ";
}
else
cout<<"It's a number!";
}
