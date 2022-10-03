#include <iostream>
using namespace std;
int main() {
   int arr[5];
   cout<<"enter the values of the array "<<endl;
   for (int i = 0; i<5; i++)
   cin>>arr[i];
   int *ptr = &arr[0];
   cout<<"The values in the array are: ";
   for(int j = 0; j < 5; j++) {
      cout<< *ptr <<" ";
      ptr++;
   }
   return 0;
}
