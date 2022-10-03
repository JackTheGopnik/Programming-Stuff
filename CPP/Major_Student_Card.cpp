#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
	private:
	int rollno;
	char name[50];
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	double per;
	char grade;
public:
void calculate() //function of class student that calcuates a Grade based on percentage obtained. ONLY USED INTERNALLY.
{
	per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
	if(per>=80)
		grade='A';
	else if(per>=60)
		grade='B';
	else if(per>=40)
		grade='C';
	else
		grade='F';
}

void getdata() //standard setter function
{
	cout<<"\nEnter The roll number of student ";
	cin>>rollno;
	cout<<"\n\nEnter The Name of student ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter The marks in physics out of 100 : ";
	cin>>p_marks;
	cout<<"\nEnter The marks in DLD out of 100 : ";
	cin>>c_marks;
	cout<<"\nEnter The marks in maths out of 100 : ";
	cin>>m_marks;
	cout<<"\nEnter The marks in english out of 100 : ";
	cin>>e_marks;
	cout<<"\nEnter The marks in computer science out of 100 : ";
	cin>>cs_marks;
	calculate();
}

void showdata() const //standard getter function
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<endl;
	cout<<"\nName of student : "<<name;
	cout<<endl;
	cout<<"\nMarks in Physics : "<<p_marks;
	cout<<"\nMarks in DLD : "<<c_marks;
	cout<<"\nMarks in Maths : "<<m_marks;
	cout<<"\nMarks in English : "<<e_marks;
	cout<<"\nMarks in Computer Science : "<<cs_marks;
	cout<<"\nPercentage of student is  : "<<per;
	cout<<"\nGrade of student is : "<<grade;
}

void show_tabular() const
{
	cout<<rollno<<setw(4)<<" "<<name<<setw(4)<<p_marks<<setw(4)<<c_marks<<setw(4)<<m_marks<<setw(4)
		<<e_marks<<setw(4)<<cs_marks<<setw(8)<<per<<setw(6)<<grade<<endl;
}

int retrollno() const //do i need to explain this?
{
	return rollno;
}
}; //class ends here


void write_student() // Handles the storing of data into a binary file.
{
	student stud1;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	stud1.getdata();
	outFile.write(reinterpret_cast<char *> (&stud1), sizeof(student));
	outFile.close();
    	cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
}


void display_all() //displays all the records
{
	student stud2;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDisplaying the Record of all students\n\n";
	while(inFile.read(reinterpret_cast<char *> (&stud2), sizeof(student)))
	{
		stud2.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

void display_sp(int n) //function to accpet a roll no. and find it in the record
{
	student stfd1;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&stfd1), sizeof(student)))
	{
		if(stfd1.retrollno()==n)
		{
	  		 stfd1.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}

void modify_student(int n)
{
	bool found=false;
	student stdc;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&stdc), sizeof(student));
		if(stdc.retrollno()==n)
		{
			stdc.showdata();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			stdc.getdata();
		    	int pos=(-1)*static_cast<int>(sizeof(stdc));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&stdc), sizeof(student));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

void delete_student(int n) //says bye bye to the said record :P
{
	student sfs;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&sfs), sizeof(student)))
	{
		if(sfs.retrollno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&sfs), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}
void class_result() //displays result.
{
	student stnd;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\t\tCLASS RESULT \n\n";
	cout<<"________________________________________________________________________\n";
	cout<<"R.No  |     Name    |    P  |   DLD  |   M   |  E   |  CS   |  %age  |   Grade"<<endl;
	cout<<"________________________________________________________________________\n";
	while(inFile.read(reinterpret_cast<char *> (&stnd), sizeof(student)))
	{
		stnd.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

void result() // displaying the whole result menu
{
	char ch;
	int rno;
	system("cls");
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1' :	class_result(); break;
	case '2' :	cout<<"\n\n\tEnter Roll Number Of Student : "; cin>>rno;
				display_sp(rno); break;
	case '3' :	break;
	default:	cout<<"\a";
	}
}

void intro() //main page function
{
	cout<<"\n\n\n\t\t===========Student===========";
	cout<<"\n\n\t\t=========Report Card===========";
	cout<<"\n\n\t\t===========System===========";
	cout<<"\n\n\n\tMADE BY : ARSALAN FAZAL";
	cout<<"\n\tUNIVERSITY : CITY UNIVERSITY OF SCIENCE AND INFORMATION TECHNOLOGY";
	cout<<"\n\tDEPARTMENT : COMPUTER SCIENCE (SOFTWARE ENGINEERING)";
	cin.get();
}

void entry_menu() //Function that edits the student record.
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	write_student(); break;
	case '2':	display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			display_sp(num); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			modify_student(num);break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			delete_student(num);break;
	case '6':	break;
	default:	cout<<"\a"; entry_menu();
	}
}


void about() // The about menu.
{
	system("cls");
	cout<<"\n{";
	cout<<"\n\nCreated By Arsalan Fazal";
	cout<<"\nFor the Department of Computer sci. Software Engg. ";
	cout<<"\nSo you check the about section? well looks like you're at the end! press any key to go back.";
	cout<<"\n\n}";
	getch();

}




int main()
{
	char ch;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); // program outputs decimal number to two decimal places
	intro();
	do
	{
		system("cls");
		cout<<"\n\n\n\tCUSIT STUDENT MANAGEMENT SYSTEM";
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. ABOUT";
		cout<<"\n\n\t04. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-4) ";
		cin>>ch;
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3': about();
				break;
			case '4':
			break;	
			default :cout<<"\a";
		}
    }while(ch!='4');
	return 0;
}



