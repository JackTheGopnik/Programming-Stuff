#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,size;
	char a[50];
    cout<<"Enter array size  "<<endl;
    cin>>size;
        cout<<"Enter array elements :  "<<endl;
 
        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element : "<<endl;;
                cin>>a[i];
        }
 
  cout<<"Stored Data in Array :  "<<endl;
 
  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
 
  cout<<"Duplicate Values in Given Array are :  "<<endl;;
  for(i=0; i<size; i++)
   {
    for(j=i+1;j<size;j++)
    {
    if(a[i]==a[j])
    {
    cout<<" "<<a[i]<<" "<<endl;
    }
   }
   }
 
  cout<<endl;
 
  return 0;
 }
