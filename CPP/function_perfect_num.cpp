#include<iostream>
using namespace std;
int perfect(int num)//handles the checking 
{
    int i, sum;
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
        return 1;
    else
        return 0;
}
void printperfect(int r1, int r2) //handles displaying the perfect numbers
{
    while(r1 <= r2)
    {
        if(perfect(r1))
        {
           cout<<r1<<endl;
        }
 
        r1++;
    }
}

int main()
{
    int ran1, ran2;

    cout<<"Enter the beggining range for perfect numbers: ";
    cin>>ran1;
    cout<<"Enter the ending limit for perfect numbers: ";
    cin>>ran2;
 
   cout<<"The perfect numbers between "<<ran1<< " and "<<ran2 <<" are: "<<endl;
    printperfect(ran1, ran2);
 
    return 0;
}
