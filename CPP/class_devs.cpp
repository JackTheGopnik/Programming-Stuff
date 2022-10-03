#include<iostream>
using namespace std;
class developer{
	private:
string name;		
int xp;
int Github_apps;
int Github_repos;
int salary;
string status;
public:
	developer();
	developer(string n, int x, int ap, int rp)
	{
		xp=x;
		Github_apps=ap;
		Github_repos=rp;
		name=n;
	}
void setData(string n,int x, int ap, int rp)
	{
		xp=x;
		Github_apps=ap;
		Github_repos=rp;
		name=n;

	}
	
void getData()
{
	return xp;
	return Github_apps;
	return Github_repos;
}

void calulateSalary()
{
	salary = xp+Github_apps+Github_repos*500;
	if(salary<1000){status="Rookie Developer";}
	if(salary>1000){status="Pro Developer";}
}
void display()
{
cout<<"Developer's name: "<<name<<endl;
cout<<"Developer's Experiance: "<<xp<<" Year(s)"<<endl;	
cout<<"Number of Developer's Github Apps: "<<Github_apps<<" Apps"<<endl;	
cout<<"Developer's Github Repositories: "<<Github_repos<<" Repositories"<<endl;	
cout<<"Developer's Salary: $"<<salary<<endl;
cout<<"Developer's Status: "<<status<<endl;	
}	
	
};

int main()
{
	developer a("Arsalan",7,12,6);
a.calulateSalary();
	a.display();
	
}



