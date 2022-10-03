#include<iostream>
using namespace std;
void series_add(int n)
{

     int i,fact=1;
    double sum=0.0;
    for(i=1;i<=n;i++)
    {
        fact*=i;
       sum+=fact/i;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

int main()
{
int n;
    cout << "To Find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 :"<<endl;
    cout << " Input the value for nth term: "<<endl;;
    cin >> n;
series_add(n);
return 0;
}
