//created by Arsalan Fazal (ID: 11931) , section B BS software engg. 3rd semester
#include <iostream>
using namespace std;
// Swap two elements - Utility function  
void swap(int* a_, int* b_) 
{ 
    int t_ = *a_; 
    *a_ = *b_; 
    *b_ = t_; 
} 
int partition (int arr_[], int low_, int high_) // partition the array using last element as pivot
{ 
    int pivot_ = arr_[high_];    // pivot 
    int i = (low_ - 1);   
   
    for (int j = low_; j <= high_- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr_[j] <= pivot_) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr_[i], &arr_[j]); 
        } 
    } 
    swap(&arr_[i + 1], &arr_[high_]); 
    return (i + 1); 
} 
void quickSort(int arr_[], int low_, int high_) //quicksort algorithm
{ 
    if (low_ < high_) 
    { 
        //partition the array 
        int pivot_ = partition(arr_, low_, high_); 
   
        //sort the sub arrays independently 
        quickSort(arr_, low_, pivot_ - 1); 
        quickSort(arr_, pivot_ + 1, high_); 
    } 
}  
void displayArray(int arr_[], int size_) 
{ 
    int i; 
    for (i=0; i < size_; i++) 
        cout<<arr_[i]<<"\t"; 
      
}  
int main() 
{ 
    int arr_[] = {12,23,3,43,51,35,19,45}; 
    int n = sizeof(arr_)/sizeof(arr_[0]); 
    cout<<"Input array"<<endl;
    displayArray(arr_,n);
    cout<<endl;
    quickSort(arr_, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr_,n); 
    return 0; 
}
