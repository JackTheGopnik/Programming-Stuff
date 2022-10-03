#include <iostream>
using namespace std;
 
int main() {
 
   int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<endl;
     cout<<"Your entered numbers in reverse order are: ";
     for(i=4;i>=0;i--)
        cout<<*(p+i)<<" ";
 
 
     return 0;
 
}
