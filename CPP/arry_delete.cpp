#include<iostream>
using namespace std;
int main()
{
    int arr[100], arry_total, i, elem, j, found=0;
    cout<<"Enter the Size: "<<endl;
    cin>>arry_total;
    cout<<"Enter "<<arry_total<<" Array Elements: ";
    for(i=0; i<arry_total; i++)
        cin>>arr[i];
    cout<<"Enter Element to Delete: "<<endl;;
    cin>>elem;
    for(i=0; i<arry_total; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(arry_total-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            arry_total--;
        }
    }
    if(found==0)
    {
		
	    cout<<"Element doesn't found in the Array!"<<endl;;
	}
    else
    {
        cout<<"Element Deleted Successfully!"<<endl;;
        cout<<"\n\nThe New Array is: "<<endl;
        for(i=0; i<arry_total; i++)
            cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
