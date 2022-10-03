#include<iostream>
#include<conio.h>
using namespace std;
void sem_course()
{
	int sem_choice;
	cout<<"enter your semester (1-8)"<<endl;
	cin>>sem_choice;
	if (sem_choice==1){
	cout<<"Subject \t \t   Credit Hours"<<endl;
	cout<<"Introduction to computing \t 3+1"<<endl;
	cout<<"Fundamentals of computing \t 3+1"<<endl;
	cout<<"Pak.studies               \t 1"<<endl;
	cout<<"Applied Physics           \t 2+1"<<endl;
}
	if (sem_choice==2){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Object Oriented Programming \t 3+1"<<endl;
	cout<<"Software Engineering       \t 3+1"<<endl;
	cout<<"Islamic Studies            \t 1"<<endl;
	cout<<"Discrete Structures        \t 2+1"<<endl;
}
	if (sem_choice==3){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Data Structures & Algorithms\t 3+1"<<endl;
	cout<<"Software Requirement Engineering 3"<<endl;
	cout<<"Linear Algebra             \t 1"<<endl;
	cout<<"Human Computer Interactions\t 2+1"<<endl;
}
	if (sem_choice==4){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Operating Systems           \t 3+1"<<endl;
	cout<<"Database Systems               3"<<endl;
	cout<<"Software Design And Architecture \t 1"<<endl;
	cout<<"Probability and statistics \t 2+1"<<endl;
}
	if (sem_choice==5){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Data Structures & Algorithms\t 3+1"<<endl;
	cout<<"Software Requirement Engineering 3"<<endl;
	cout<<"Computer Networks          \t 1"<<endl;
	cout<<"Technical Busniess Writing \t 2+1"<<endl;
}
	if (sem_choice==6){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Software Quality Engineering\t 3+1"<<endl;
	cout<<"Information Security           3"<<endl;
	cout<<"Professional Practice      \t  1"<<endl;
	cout<<"Web Engineering            \t  2+1"<<endl;
}
	if (sem_choice==7){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Software  Re-engineering       3+1"<<endl;
	cout<<"Software Project Management    3"<<endl;
	cout<<"Final Year Project-I           1"<<endl;
}
	if (sem_choice==8){
	cout<<"Subject \t \t     Credit Hours"<<endl;
	cout<<"Final Year Project-II      3+1"<<endl;
}

}
void sem_all_course()
{


	cout<<"Subject \t \t   Credit Hours"<<endl;
	cout<<endl;
	cout<<"1st Semester"<<endl;
	cout<<"Introduction to computing \t 3+1"<<endl;
	cout<<"Fundamentals of computing \t 3+1"<<endl;
	cout<<"Pak.studies               \t 1"<<endl;
	cout<<"Applied Physics           \t 2+1"<<endl;
cout<<endl;
	cout<<"2nd Semester"<<endl;	 
	cout<<"Object Oriented Programming \t 3+1"<<endl;
	cout<<"Software Engineering       \t 3+1"<<endl;
	cout<<"Islamic Studies            \t 1"<<endl;
	cout<<"Discrete Structures        \t 2+1"<<endl;
cout<<endl;
	cout<<"3rd Semester"<<endl;	 
	cout<<"Data Structures & Algorithms\t 3+1"<<endl;
	cout<<"Software Requirement Engineering 3"<<endl;
	cout<<"Linear Algebra             \t 1"<<endl;
	cout<<"Human Computer Interactions\t 2+1"<<endl;
cout<<endl;
	cout<<"4th Semester"<<endl;	 
	cout<<"Operating Systems           \t 3+1"<<endl;
	cout<<"Database Systems               3"<<endl;
	cout<<"Software Design And Architecture 1"<<endl;
	cout<<"Probability and statistics \t 2+1"<<endl;
cout<<endl;
	cout<<"5th Semester"<<endl;	 
	cout<<"Data Structures & Algorithms\t 3+1"<<endl;
	cout<<"Software Requirement Engineering 3"<<endl;
	cout<<"Computer Networks          \t 1"<<endl;
	cout<<"Technical Busniess Writing \t 2+1"<<endl;
cout<<endl;
	cout<<"6th Semester"<<endl;	 
	cout<<"Software Quality Engineering\t 3+1"<<endl;
	cout<<"Information Security           3"<<endl;
	cout<<"Professional Practice      \t  1"<<endl;
	cout<<"Web Engineering            \t  2+1"<<endl;
cout<<endl;
	cout<<"7th Semester"<<endl;	 
	cout<<"Software  Re-engineering       3+1"<<endl;
	cout<<"Software Project Management    3"<<endl;
	cout<<"Final Year Project-I           1"<<endl;
cout<<endl;
	cout<<"8th Semester"<<endl;	 
	cout<<"Final Year Project-II      3+1"<<endl;
	
}
void total_credits()
{
	
	
cout<<"Total Credit Hours Of each semester combined is = "<<endl;
cout<<130<<endl;
	

}






int main(){

begin:
int choices;
int exit_choice;
cout<<"**************** CITY UNIVERSITY ****************"<<endl;
cout<<"          Department Of Computer Sciences        "<<endl;
cout<<endl;
cout<<"Enter an number to open one of the following"<<endl;
cout<<endl;
cout<<"Enter 1 for Per Semester wise courses"<<endl;
cout<<"Enter 2 for All Courses in all semesters"<<endl;
cout<<"Enter 3 to check the total credit hours per semester"<<endl;
cout<<"Enter 4 to exit the program"<<endl;
cout<<endl;
cout<<"your choice"<<endl;
cin>>choices;
switch (choices){

case 1:
sem_course();
break;
case 2:
sem_all_course();
break;
case 3:
total_credits();
break;
case 4:
return 0;	
break;
default:
cout<<"value is not valid, enter a valid number"<<endl;
break;	
}
cout<<endl;
cout<<"Press 5 to go back to the main menu or press any other key to end the program "<<endl;
cin>>exit_choice;
if (exit_choice==5)	
 goto begin;
else
return 0;

}
