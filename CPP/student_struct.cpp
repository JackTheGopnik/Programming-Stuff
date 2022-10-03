#include<iostream>
using namespace std;
int main()
{
  struct student
  {
    int roll_no;
    string name;
    int age;
    string address;
  };

  struct student stud[15];

  for(int i=0; i<=15; i++)
  {
    cout<<"Student " << i+1 << endl;
    stud[i].roll_no = i+1;
    cout<<"Enter name :"<<endl;
    cin>>stud[i].name;
    cout<<"Enter age :";
    cin>>stud[i].age;
    cout<<"Enter address :";
    cin>>stud[i].address;
    cout<<endl;
  }

  for(int i=0; i<=15; i++)
  {
    	cout<<endl<<endl;
      cout << "Student " << i+1 << endl;
      cout << "Roll no. : " << stud[i].roll_no << endl;
      cout << "Name : " << stud[i].name << endl;
      cout << "Age : " << stud[i].age << endl;
}


  return 0;
}
 
