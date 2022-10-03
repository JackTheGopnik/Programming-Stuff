#include<iostream>
using namespace std;
class car //parent class
{
private: //data members
string model_n;
string brand;
double price;
double year;
double final_price;
string fuel_type;
public:
void set_data_base_class() //setter function
{
	int choice_fuel;
	bool ans_fuel=false;
	cout<<"Enter the Brand of the car: "<<endl;
	getline(cin, brand);
	cout<<"Enter the model of the car: "<<endl;
	getline(cin, model_n);
	cout<<"Enter the price of the car: "<<endl;
	cin>>price;
	cout<<"Enter the year the car was made: "<<endl;
	cin>>year;
	do{	// loops until a correct case is selected.
	cout<<"Enter the fuel type of this vehicle (1.Petrol/Gasoline or 2.Diesel): "<<endl;
	cin>>choice_fuel;
	switch(choice_fuel)
	{
	case 1: fuel_type="Petrol/Gasoline";ans_fuel=true;
	break;
	case 2: fuel_type="Diesel";ans_fuel=true;
	break;
	default: cout<<"You have entered an invalid value."<<endl;
	break;
	}	
}while(!ans_fuel);	
}
string get_data_base_class_names() //getter function that displays because returning each value individually would be 
//too confusing and lenghty.
{
double fp=calculate(price);
cout<<">=========CAR DETAILS========<"<<endl;
cout<<"Brand of the car: "<<brand;
cout<<"\nModel of the car: "<<model_n;
cout<<"\nPrice of the car without taxes: $"<<price;
cout<<"\nyear of manufacturing: "<<year;
cout<<"\n final price of the car: $"<<fp;
cout<<"\nFuel type of the car: "<<fuel_type;
}
//simple calculate function for tax because the template function confused me too much.
double calculate(double p)
{
	double tax=25000;
	final_price=p+tax;
	return final_price;
}
};

class BMW : public car //derived class, inherits car's data members and functions.
{
	private:
	string PassengerAirBag;
	string AlloyWheels;
	int number_of_AI_modules;
	// initialization of data members using child class.			
	public:	
	BMW()
	{}
	void ask_for_BMW_stuff() //i love putting quirky names in the source code ;P
	{
	bool choicea=false;
	bool choiceb=false;
		int choice1, choice2;
		do{
		
		cout<<"Does the Car have Air Bags? (1 for yes, 2 for no)"<<endl;
		cin>>choice1;
		switch(choice1)
		{
			case 1:{ 
			PassengerAirBag="YES"; choicea=true;
			break;
			}
			case 2: {
				PassengerAirBag="NO";
				choicea=true;
				break;
			}
			default: cout<<"incorrect option, try again."<<endl;
		}
	} while (choicea==!true);
		do{
			cout<<"Does the Car have Alloy wheels? (1 for yes, 2 for no)"<<endl;
		cin>>choice2;	
				switch(choice2)
		{
			case 1: 
			{
				AlloyWheels="YES"; choiceb=true;
				break;
			}
			case 2:
			{
				AlloyWheels="NO"; choiceb=true;
				break;
			} 
			default: {
				cout<<"incorrect option, try again."<<endl;
				break;
			}
		}
		cout<<"Enter the number of AI modules: "<<endl;	
		cin>>number_of_AI_modules;
	}while(choiceb==!true);	
} 

	void show_BMW_stuff()
	{
	cout<<"Does the Car have Air Bags "<<PassengerAirBag<<endl;	
	cout<<"Does the Car Have Alloy Wheels "<<AlloyWheels<<endl;	
	cout<<"No. Of AI Modules in the car: "<<number_of_AI_modules;	
		
	}
	int gear=0;
	void shiftgear()
	{
	do{
		gear++;
		cout<<"you are now on Gear "<<gear<<endl;
	}while(gear==!5);
			if(gear==5)
		{
			cout<<"you have reached the maximum gear, Resetting gear to 0"<<endl;
			gear=0;
		}
	}
};

int main()
{	
BMW merc;
merc.shiftgear();
merc.shiftgear();
merc.shiftgear();
merc.shiftgear();
merc.shiftgear();
merc.shiftgear();
cout<<"=========Car Data========"<<endl;
merc.set_data_base_class();
merc.ask_for_BMW_stuff();
merc.get_data_base_class_names();
merc.show_BMW_stuff();

}
