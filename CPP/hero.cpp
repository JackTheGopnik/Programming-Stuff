#include <iostream>
using namespace std;
int orray[8] = {2,0,5,5,0,0,8,8};
void nonzeronumber(int a)
{

    for (int i = 0; i < 8; i++)
    { 
        if (orray[i] != 0)
            cout << orray[i] << ' ';
    } 
    cout << endl;

}


int main()
{
nonzeronumber(orray[8]);
    return 0;
}
