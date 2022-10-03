#include<iostream>
#include<conio.h>
using namespace std;

       class Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData()  
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

              void PutData()           
              {
                    cout<<"\n"<<Id<<"\t"<<Name<<"\t"<<Age<<"\t"<<Salary;
              }

       };


       int main()
       {

              int i;

              Employee E[2];           

              for(i=0;i<2;i++)
              {
                    cout<<"\nEnter details of "<<i+1<<" Employee";
                    E[i].GetData();
              }

              cout<<"\nDetails of Employees";
              for(i=0;i<2;i++)
              E[i].PutData();
return 0;
       }
