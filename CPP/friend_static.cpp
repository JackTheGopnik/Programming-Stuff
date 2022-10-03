#include<iostream>
#include<conio.h>
using namespace std;
class Employee
       {
              private:
			  int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData();
              void PutData();

       };

       void Employee :: GetData()           //Statement 1 : Defining GetData()
       {
              cout<<"\n\tEnter Employee Id : ";
              cin>>Id;

              cout<<"\n\tEnter Employee Name : ";
              cin>>Name;

              cout<<"\n\tEnter Employee Age : ";
              cin>>Age;

              cout<<"\n\tEnter Employee Salary : ";
              cin>>Salary;
       }

       void Employee :: PutData()           //Statement 2 : Defining PutData()
       {
              cout<<"\n\nEmployee Id : "<<Id;
              cout<<"\tEmployee Name : "<<Name;
              cout<<"\tEmployee Age : "<<Age;
              cout<<"\tEmployee Salary : "<<Salary;
       }

int  main()
{

              Employee E;           //Statement 3 : Creating Object

              E.GetData();          //Statement 4 : Calling GetData()
              E.PutData();          //Statement 5 : Calling PutData()
return 0;
}

