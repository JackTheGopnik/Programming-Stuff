#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{//private values
	private:
string empName;	
string empDesignation;	
long empSalary;
public:	
//setter and getter functions 
void setData( string n, string d, long S, long f)//setting the private data
{
empName= n;
empDesignation= d;
empSalary= increment(S,f);
}
void getData()//getting and printing the data
{
cout<<"Employee Name:  "<<empName<<endl;
cout<<"Employee Designation:  "<<empDesignation<<endl;
cout<<"Salary : $"<<empSalary<<endl;
}
//end of setter and getter functions
int increment(long s, long F) //increment function that adds to the salary
{
empSalary= s+F;
return empSalary;
}
setdata();
};

int main()
{
Employee arsalan;
arsalan.setData("Arsalan","Director",9000,250);
arsalan.getData();
}


