#include <cmath>
#include <iostream>
using namespace std;
int armstrong(int a)
{
	int Num, remainder, n = 0, ans = 0, power;

   Num = a;

   while (Num != 0) {
      Num /= 10;
      ++n;
   }
   Num = a;

   while (Num!=0) {
      remainder=Num%10;
      power = round(pow(remainder, n));
      ans += power;
      Num /= 10;
   }

   if (ans == a)
      cout << a << " is an Armstrong number.";
   else
      cout << a << " is not an Armstrong number.";
	
}

int perfect(int a)
{
	    int i, div, sum=0;
    for (i=1; i<a; i++)
    {
        div = a % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == a)
        cout << "\n" << a <<" is a perfect number.";
    else
        cout << "\n" << a <<" is not a perfect number.";
}

int main() 
{
    int num;
	 cout << "Enter an integer: ";
   cin >> num;
armstrong(num);
perfect(num);
   return 0;
}
