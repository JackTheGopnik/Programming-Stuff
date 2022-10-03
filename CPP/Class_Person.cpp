#include<iostream>
using namespace std;
class person
{
protected: // declaring Protected Data members with default values.
string name;	
string address;	
int cnic;
string gender;	
int age;
public:
// Beginning of Getter Functions.
int getData_age() {return age;}
int getData_ID() {return cnic;}
string getData_name() {return name;}
string getData_address() {return address;}
string getData_gender() {return gender;}
// End of getter functions.
person()// Default Constructor.
{
name="NULL";
address="NULL";
cnic=0;
gender="NULL";	
}
};

class teacher : public person
{
private:
string subject;
int Experiance;
public:

teacher(){
Experiance=0;	
}
teacher(string n, string a, int c, string g, int A, int e)

{
name=n;	
address=a;	
cnic=c;
gender=g;	
age=A;
Experiance = e;	
}
	
void setData(string n, string a, int c, string g, int A, int e)
{
name=n;	
address=a;	
cnic=c;
gender=g;	
age=A;
Experiance = e;	
}
int getData_exp() {return Experiance;} //function of teacher class that returns experiance.
void display_teacher_data()
{
cout<<"Name of the Teacher is: "<<getData_name()<<endl;	
cout<<"Address of the Teacher is: "<<getData_address()<<endl;	
cout<<"CNIC of the Teacher is: "<<getData_ID()<<endl;
cout<<"Teacher has "<<getData_exp()<<" Year(s) Of Experiance"<<endl;	
}

void set_subject()
{ 
	int i;
	int z;
	int j;
	label:
	cout<<"Enter the Number of Subjects you teach: "<<endl;
	cin>>i;
	if(i<2)
	{
	cout<<"you need to at least teach 2 subjects ";
	goto label;
	}
if (!cin)
{
	cout<<"You have not entered a valid number"<<endl;
	goto label;
}	
	for(z=1; z<=i; z++)
	{
cout<<"Enter the Name of subject "<<z<<endl;		
cin.getline(subject[z], 32);		
	}
	
cout<<"Subjects Taught by the teacher are: ";
for (j=0; j<=i; j++)
{
	cout<<subject[i];
	}		
}
	
};



int main()
{
	
	
teacher t1;	
t1.setData("Arsalan","Peshawar",11931,"male",20,2);
t1.display_teacher_data();
t1.set_subject();

	
	
}
