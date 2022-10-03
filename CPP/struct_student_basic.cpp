#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int age;
    float marks;
};

int main()
{
    student s1;
    
    cout<<"Enter Full name: "<<endl;
    cin.get(s1.name, 50);
    cout<<"Enter age: "<<endl;
    cin>>s1.age;
    cout<<"Enter roll no : "<<endl;
    cin>>s1.roll;
    cout<<"Enter marks: "<<endl;
    cin>>s1.marks;
cout<<endl;
    cout<< "Displaying Information."<<endl;
    cout<< "Name: "<<s1.name<<endl;
    cout<<"Age: " <<s1.age<<endl;
    cout<<"Roll: "<<s1.roll<<endl;
	cout<<"Marks: "<<s1.marks;
    return 0;
}
