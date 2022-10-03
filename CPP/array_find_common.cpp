#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {

	string num1[7]={"v","k","l","n","m","p","q"};
	string num2[7]={"n","v","r","g","p","r","m"};
	srand(time(NULL));
	cout << "array 1" << endl;
	for (int i = 0; i <(sizeof(num1) / sizeof(num2[0])); i++) {
	
		cout << " " << num1[i];
	}
	cout << endl;

	cout << "array 2" << endl;
	for (int j = 0; j < (sizeof(num1) / sizeof(num2[0])); j++) {

		cout << " " << num2[j];
	}

	cout << endl;

	cout << "common elements" << endl;
	for (int i = 0; i < (sizeof(num1) / sizeof(num2[0])); i++) 
	{
		{
			for (int j = 0; j < (sizeof(num1) / sizeof(num2[0])); i++)
			{
				if (num1[i] < num2[j])
				{
					i++;
				}

				else if (num2[j] < num1[i])
				{
					j++;
				}

				else if (num1[i] == num2[j])
				{

					cout << " " << num1[i];
					i++;
					j++;

				}
			}
		}

	}
	return 0;
}
