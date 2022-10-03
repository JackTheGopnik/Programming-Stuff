#include <iostream>
using namespace std;
int main()
{
   int array[100], pos, c, n, value;
   cout<<"Enter the size of the array "<<endl;
   cin>>n;
   cout<<"Enter elements "<<endl;
   for (c = 0; c < n; c++)
   {
   cin>>array[c];
    }
   cout<<"Enter the Index where you wish to insert an element "<<endl;
   cin>>pos;
   cout<<"Enter the value to insert "<<endl;
   cin>>value;
   for (c = n - 1; c >= pos - 1; c--)
   {
  array[c+1] = array[c];
    }
 array[pos-1] = value;
    cout<<"new array is "<<endl;
	for (c = 0; c <= n; c++)
   {
cout<<" "<<array[c]; 
    }
   return 0;
}


