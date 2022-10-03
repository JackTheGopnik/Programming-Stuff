#include<iostream>
#include<conio.h>
using namespace std;
int k,a,v,choice;
void checker(int a)
{
	if (a%2==0)
cout<<a<<" is not a Prime Number "<<endl;
else
cout<<a<<" is a Prime Number "<<endl;
}

int main()
{
	here:
cout<<"Koi Number Enter karo "<<endl;	
cin>>a;
checker(a);	
cout<<endl;
cout<<"Try Again? [1 for yes, 0 for no] "<<endl;
cin>>choice;
if(choice==1)
{
cout<<endl;
goto here;
}
else
return 0;
}
