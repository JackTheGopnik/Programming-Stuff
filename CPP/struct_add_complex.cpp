#include <iostream>
using namespace std;

class complex
{
   public :
      int real, img;
};

int main()
{
   complex a, b, c;

   cout << "Enter a and b where a + ib is the first complex number."<<endl;
   cout << "a = "<<endl;
   cin >> a.real;
   cout << "b = "<<endl;
   cin >> a.img;
   cout << "Enter c and d where c + id is the second complex number.";
   cout << "c = "<<endl;
   cin >> b.real;
   cout << "d = "<<endl;
   cin >> b.img;
   
   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if (c.img >= 0)
      cout << "Sum of two complex numbers = " << c.real << " + " << c.img << "i";
   else
      cout << "Sum of two complex numbers = " << c.real << " " << c.img << "i";

   return 0;
}
