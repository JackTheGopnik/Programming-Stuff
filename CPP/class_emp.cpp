#include<iostream>
#include<conio.h>
using namespace std;
class employee
{//private values
	private:
int ID;
string name;	
string Dept;	
long salary;
public:	
static int num; //static data member that holds total employee values.

//setter and getter functions /*/
setData(int i, string n, string d, long S)
{
num++;
ID= i;
name= n;
Dept= d;
setSalary(S);
}
void setSalary(int s)
{
salary = s;
}		
//end of setter and getter functions
void display()//Display Function.
{
	
cout<<ID<<"\t"<<name<<"\t  "<<Dept<<"\t"<<calcNetPay(salary)<<endl;
	
}
// Default constructor
employee(){
employee::setData(0,"NULL","NULL",0);
}
//Copy Constructor
employee(const employee &obj)
{
num++;	
ID= obj.ID;
name= obj.name;
Dept= obj.Dept;
salary= obj.salary;
 } 
//Destructor
~employee()
{
num--;	
delete &ID;
delete &name;	
delete &Dept;	
delete &salary;			
}
//Salary Calculator, Deducts Tax from the salary and returns the net pay.
int calcNetPay(int sa)
{
	int buff;
salary = sa;

if (sa>10000&&sa<20000)
{
	buff= sa- 1000;
	return buff;
}

if (sa>20000&&sa<30000)
{
	buff= sa- 1900;
	return buff;
}

if (sa>30000)
{
	buff= sa- 3500;
	return buff;
}

}

};

int main()
{
cout<<"\nID"<<"\tName"<<"  Department"<<"\tNet Pay"<<endl;	
employee e[5];
e[1].setData(5,"Ahmad","Accounts",20000);
e[2] = e[1];	//Copy Constructor is called.
e[3].setData(10, "Ayesha", "Accounts", 25000);
e[4].setData(3, "Hassan", "Administration", 10000);	
e[5].setData(6,"Arsalan", "Administration", 35000);
e[1].display();
e[2].display();
e[3].display();
e[4].display();
e[5].display();

}









