#include<iostream>
#include<conio.h>
using namespace std;

int case1(int a, int b, int c) //function for the first given formula in the excersise 
{
	int v= a*(b+c);
	return v;
}
int case2(int a, int b, int c)//function for the second given formula in the excersise 
{
	int v= (a+b)*c;
	return v;
}

int special_avg (int a, int b, int c, int d, int e)//function for the thrid given formula in the excersise 
{
	int h= a+b+c+d+e;
	int v= h/5;
	return v;
}
int main()
{
	int z[3];
 cout<<"Give some values for the first formula (a(b+c)), this will also be used for the second formula((a+b)c) "<<endl;
 cin>>z[0]>>z[1]>>z[2];
 
 int k[2];
 k[0] = case1 (z[0],z[1],z[2]);

 cout<<"According to the values entered, answer for the first formula is "<<k[0]<<endl;

cout<<endl;
 
k[1] = case2 (z[0],z[1],z[2]);

cout<<"According to the values entered, answer for the second formula is "<<k[1]<<endl; 

cout<<endl;

int x[5];

cout<<"Now for the third formula (a+b+c+d+e/5) , Give new values, "<<endl;
cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4];

int l;
l = special_avg (x[0],x[1],x[2],x[3],x[4]);

cout<<"According to the given values, the answer for the third formula is "<<l<<endl;

return 0;
}
