#include<iostream>
using namespace std;
void arry_check()
{
	    int arr[10], n, i, max, min;
 cout << "Enter the number of values you want to input : "<<endl;
    cin >> n;
    cout << "Enter the the values : "<<endl;

	    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
     min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
}
	cout<<"Smallest element : "<<min<<endl;	
    cout<< "Largest element : "<<max<<endl;

    }

int main ()
{
    arry_check();
    return 0;
}
