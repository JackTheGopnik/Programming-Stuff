#include <iostream>
using namespace std;

void fun(int *x, int *y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int num1,num2 ;
	cout << "Enter value of num1:";
	cin>> num1 ;
	cout << "Enter value of num2:";
	cin>> num2 ;
	cout << "Before swapping: num1 is " << num1 << " and num2 is " << num2;
	fun(&num1,&num2) ;
	cout << "\nAfter swapping: num1 is " << num1 << " and num2 is " << num2;
return 0 ;
}


