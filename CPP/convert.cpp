#include<iostream>
#include<cmath> //for pow() function
using namespace std;
int convertB_D(int a)
{
    int b=0, mul=1, rem;
    while(a>0)
    {
        rem = a%2;
        b = b+(rem*mul);
        mul = mul*10;
        a = a/2;
    }
    return b;
}
int main()
{
    int decimal, binary;
    cout<<"Enter the Decimal Number: ";
    cin>>decimal;
    binary = convertB_D(decimal);
	cout<<endl;
    cout<<"The Binary Value of "<<decimal<<" is "<<binary;
    return 0;
}

