#include<iostream>
#include<conio.h>
using namespace std;
// Globally Initilizing Appitizers Values for use.	
int Monti= 240;	
int Beef_Pie= 270;	
int GarlicB= 160;	
int Fish_F= 690;
int C_N= 270;
// Globally Initilizing Sandwich Values for use.	
int Chick_S= 330;
int Beef_S= 400;
int Club_S= 430;
int Kid_S= 230;
int Reg_mayo_S= 120;

int item;
void func_food_app()
{

	int choice;
	float tax= 4.50;
cout<<"List Of Items----------------------------------------Price"<<endl<<endl;	
cout<<"1) Monticarlo                                        Rs 240"<<endl;       	
cout<<"2) Beef Pie                                          Rs 270"<<endl;    	
cout<<"3) Garlic Bread                                      Rs 160"<<endl;    	
cout<<"4) Finger Fish                                       Rs 690"<<endl;    	
cout<<"5) Chicken Nuggets                                   Rs 270"<<endl;    	
cout<<" Enter your items <<+Rs 4.50 will be taxed with the item.>> "<<endl;
	cin>>choice;
if (choice==1)
{

	cout<<" Monticarlo with a tax of Rs 4.50 = Rs."<<Monti+tax<<endl;
}

if (choice==2)
{
	cout<<" Beef Pie with a tax of Rs 4.50 = Rs."<<Beef_Pie+tax<<endl;
}

if (choice==3)
{
	cout<<" Garlic Bread with a tax of Rs 4.50 = Rs."<<GarlicB+tax<<endl;
}
if (choice==4)
{
	cout<<" Finger Fish with a tax of Rs 4.50 = Rs."<<Fish_F+tax<<endl;
}

if (choice==5)
{
	cout<<"Chicken Nuggets with a tax of Rs 4.50 = Rs."<<C_N+tax<<endl;
}



}

void func_food_S()
{

	int choice;
	int tax= 4.50;
cout<<"List Of Items----------------------------------------Price"<<endl<<endl;	
cout<<"1) Chicken Sandwich                                  Rs 330"<<endl;       	
cout<<"2) Beef Sandwich                                     Rs 400"<<endl;    	
cout<<"3) Club Sandwich                                     Rs 430"<<endl;    	
cout<<"4) Kid Combo Sandwich                                Rs 230"<<endl;    	
cout<<"5) Regular Mayoniese                                 Rs 120"<<endl;    	
cout<<" Enter your items <<+Rs 4.50 will be taxed with the item.>> "<<endl;
	cin>>choice;
if (choice==1)
{
	cout<<" Chicken Sandwich with a tax of Rs 4.50 = Rs."<<Chick_S+tax<<endl;
}

if (choice==2)
{
	cout<<" Beef Sandwich with a tax of Rs 4.50 = Rs."<<Beef_S+tax<<endl;
}

if (choice==3)
{
	cout<<" Club Sandwich with a tax of Rs 4.50 = Rs."<<Club_S+tax<<endl;
}
if (choice==4)
{
	cout<<" Kid Combo Sandwich with a tax of Rs 4.50 = Rs."<<Kid_S+tax<<endl;
}

if (choice==5)
{
	cout<<"Regular Mayoniese Sandwich with a tax of Rs 4.50 = Rs."<<Reg_mayo_S+tax<<endl;
}

}

void item_range()
{


int L1,L2;
returnhere1:
cout<<"enter your range From a minimum of 100-700 "<<endl;
cout<<"Enter the First Range "<<endl;
cin>>L1;
cout<<"Enter the Second Range "<<endl;
cin>>L2;
if (L1<100)
{
	cout<<"The First Range Is less than 100 please enter again "<<endl;	
	goto returnhere1;
 } 
	if (L2>700)
{
	cout<<"The Second Range Is exceeds 700 please enter all values again "<<endl;	
	goto returnhere1;
 } 
 if (L1==L2||L1>L2){
 	cout<<"The Limit Range is Invalid, please try again "<<endl;
 	goto returnhere1;
 }
	
if (L1>=100 && L2<=200)
{
	cout<<"Regular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;	
	cout<<"Garlic Bread = "<<GarlicB<<endl;

}
      if (L1>=100 && L2<=300){
		cout<<"From Appitizers "<<endl;
		cout<<endl;
     cout<<"\nMonticarlo = "<<Monti<<endl;	
     cout<<"Beef Pie = "<<Beef_Pie<<endl;
     cout<<"Chicken Nuggets = "<<C_N<<endl;	
     cout<<"From Sandwiches "<<endl;
     cout<<endl;
     cout<<"\nRegular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;
     cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;    
	}	
		      if (L1>=100 && L2<=400){
		 	cout<<"From Appitizers "<<endl;
		 	cout<<endl;
		 	cout<<"Garlic Bread = "<<GarlicB<<endl;
     		cout<<"Monticarlo = "<<Monti<<endl;	
     		cout<<"Beef Pie = "<<Beef_Pie<<endl;
     		cout<<"Chicken Nuggets = "<<C_N<<endl;	
     		cout<<"From Sandwiches "<<endl;
     		cout<<endl;
     		cout<<"Regular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;
     		cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		 	cout<<"Chicken Sandwich = "<<Chick_S<<endl;    
			}
		
				if (L1>=100 && L2<=500)
 				{
		 		cout<<"From Appitizers "<<endl;
		 		cout<<endl;
		 		cout<<"Garlic Bread = "<<GarlicB<<endl;
     			cout<<"Monticarlo = "<<Monti<<endl;	
     			cout<<"Beef Pie = "<<Beef_Pie<<endl;
     			cout<<"Chicken Nuggets = "<<C_N<<endl;	
     			cout<<"From Sandwiches "<<endl;
     			cout<<endl;
     			cout<<"Regular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;
     			cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		 		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
				 cout<<"Club Sandwich = "<<Club_S<<endl;    
				}
				
					  if (L1>=100 && L2<=600)
 					{
		 			cout<<"From Appitizers "<<endl;
		 			cout<<endl;
		 			cout<<"Garlic Bread = "<<GarlicB<<endl;
     				cout<<"Monticarlo = "<<Monti<<endl;	
     				cout<<"Beef Pie = "<<Beef_Pie<<endl;
     				cout<<"Chicken Nuggets = "<<C_N<<endl;	
     				cout<<"From Sandwiches "<<endl;
     				cout<<endl;
     				cout<<"Regular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;
     				cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
					 cout<<"Chicken Sandwich = "<<Chick_S<<endl;    
					}
					  	if (L1>=100 && L2<=700)
 						{
		 				cout<<"From Appitizers "<<endl;
		 				cout<<endl;
		 				cout<<"Garlic Bread = "<<GarlicB<<endl;
     					cout<<"Monticarlo = "<<Monti<<endl;	
     					cout<<"Beef Pie = "<<Beef_Pie<<endl;
     					cout<<"Fish Fingers = "<<Fish_F<<endl;
     					cout<<"Chicken Nuggets = "<<C_N<<endl;	
     					cout<<"From Sandwiches "<<endl;
     					cout<<endl;
     					cout<<"Regular Mayoniese Sandwich = "<<Reg_mayo_S<<endl;
     					cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
						 cout<<"Chicken Sandwich = "<<Chick_S<<endl;    
						}





if (L1>=200 && L2<=300)
{
	cout<<"From Appitizers "<<endl;
cout<<"\nMonticarlo = "<<Monti;	
cout<<"Beef Pie = "<<Beef_Pie<<endl;
cout<<"Chicken Nuggets = "<<C_N<<endl;	
    cout<<"From Sandwiches "<<endl;
cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;    
		
}
		if (L1>=200 && L2<=400)
	{
		cout<<"From Appitizers "<<endl;
		cout<<"\nMonticarlo = "<<Monti;	
		cout<<"Beef Pie = "<<Beef_Pie<<endl;
		cout<<"Chicken Nuggets = "<<C_N<<endl;	
	    cout<<"From Sandwiches "<<endl;
		cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
	}


			if (L1>=200 && L2<=500)
			{
		cout<<"From Appitizers "<<endl;
		cout<<"\nMonticarlo = "<<Monti;	
		cout<<"Beef Pie = "<<Beef_Pie<<endl;
		cout<<"Chicken Nuggets = "<<C_N<<endl;	
	    cout<<"From Sandwiches "<<endl;
		cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
		cout<<"Beef Sandwich = "<<Chick_S<<endl;
		cout<<"Club Sandwich = "<<Chick_S<<endl;
			}


				if (L1>=200 && L2<=600)
				{
		cout<<"From Appitizers "<<endl;
		cout<<"\nMonticarlo = "<<Monti;	
		cout<<"Beef Pie = "<<Beef_Pie<<endl;
		cout<<"Chicken Nuggets = "<<C_N<<endl;	
	    cout<<"From Sandwiches "<<endl;
		cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
		cout<<"Beef Sandwich = "<<Chick_S<<endl;
		cout<<"Club Sandwich = "<<Chick_S<<endl;
				}



					if (L1>=200 && L2<=700)
					{
		cout<<"From Appitizers "<<endl;
		cout<<"\nMonticarlo = "<<Monti;	
		cout<<"Beef Pie = "<<Beef_Pie<<endl;
		cout<<"Chicken Nuggets = "<<C_N<<endl;	
		cout<<"Fish Fingers = "<<Fish_F<<endl;
	    cout<<"From Sandwiches "<<endl;
		cout<<"Kid Combo Sandwich = "<<Kid_S<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
		cout<<"Beef Sandwich = "<<Chick_S<<endl;
		cout<<"Club Sandwich = "<<Chick_S<<endl;
					}



	if (L1>=300 && L2<=400)
{
	    cout<<"From Sandwiches "<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
		cout<<"Beef Sandwich = "<<Chick_S<<endl;
		cout<<"Club Sandwich = "<<Chick_S<<endl;
}



		if (L1>=300 && L2<=500)
	{
	    cout<<"From Sandwiches "<<endl;
		cout<<"Chicken Sandwich = "<<Chick_S<<endl;
		cout<<"Beef Sandwich = "<<Chick_S<<endl;
		cout<<"Club Sandwich = "<<Chick_S<<endl;
	}	








}

int main()
{

begin:
int choices;
int exit_choice;
cout<<"**************** Peshawar Restraunt ****************"<<endl;
cout<<"             All for one, One for All!        "<<endl;
cout<<endl;
cout<<"Enter an number to open one of the following"<<endl;
cout<<endl;
cout<<"Enter 1 for Appitizers"<<endl;
cout<<"Enter 2 for Sandwiches"<<endl;
cout<<"Enter 3 to find item in Price Range"<<endl;
cout<<"Enter 4 to exit the program"<<endl;
cout<<endl;
cout<<"your choice"<<endl;
cin>>choices;
switch (choices){

case 1:
func_food_app();
break;
case 2:
func_food_S();
break;
case 3:
item_range();
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


