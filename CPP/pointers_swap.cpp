#include<iostream>
using namespace std;

int main()
{
int* a = new int;
int* b = new int;

cout << "Enter value of a and b:"<<endl;
cin >> *a >> *b;
int* temp = a;
a = b;
b = temp;

cout << "After swaping a=" << *a << " b=" << *b<<endl;

return 0;
}
