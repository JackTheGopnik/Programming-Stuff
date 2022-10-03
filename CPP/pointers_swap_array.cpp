#include<iostream>
using namespace std;
int main()
{
    int a1[30],a2[30],num,temp;
    cout<<"How many elements to be stored (max 20) : ";
    cin>>num;
    cout<<"Enter elements of array a1 : ";
    for(int i=0;i<num;i++)
        cin>>a1[i];
    cout<<"Enter elements of array a2 : ";
    for(int i=0;i<num;i++)
        cin>>a2[i];
    for(int i=0;i<num;i++)
    {
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
    }
    cout<<"After swapping "<<endl;
    cout<<"Array a1 : ";
    for(int i=0;i<num;i++)
        cout<<a1[i]<<" ";
    cout<<endl<<"Array a2 : ";
    for(int i=0;i<num;i++)
        cout<<a2[i]<<" ";
    return 0;
}
