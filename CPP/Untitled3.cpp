#include <iostream>
#include <math.h>
#include <cmath> 
using namespace std; 
const double pi = 3.14159265358979323846;
float r;
float findAreaofPenta(float a) 
{ 
//this calculates the side of the pentagon
float side;
side = 2*r*sin(pi/5);

//This handles the formulae for area (Main formula)
float sider1,sider2,area;  
sider1 = 5*side*side; 
sider2 = 4*tan(pi/5);
area = sider1/sider2;
r=area;
return r; 
} 
 
int main() 
{ 

cout<<"Enter the length from the center of a pentagon to a vertex: ";
cin>>r;
cout<<"You entered a length of "<<r<<" cm"<<endl;
findAreaofPenta(r);
cout<<"area of the pentagon = "<<r<<" cm"<<endl;     
    return 0; 
}  

