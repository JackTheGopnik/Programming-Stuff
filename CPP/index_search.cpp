#include <iostream>
using namespace std;
 
int main()
{
    int arr[]={6,3,5,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element; 
    int i=0;
    
cout<<"enter the number's index you want to find: ";
cin>>element;
    while (i < n)
    {
if (arr[i] == element) {
break;
}
i++;
}
if (i < n) 
{
cout << "Element " <<element<< " is present at index [" <<i<< "] in the given array";
}
else 
{
    cout << "Element is not present in the given array";
}
    return 0;
}
