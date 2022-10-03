#include<iostream>
using namespace std;
class shop_book
{
	public:
	int price;
	int qty;
	string name;
	int tax;
	void book();

};
void shop_book::book()
{
	cout<<price<<endl;
	cout<<qty<<endl;
	cout<<name<<endl;
	cout<<tax<<endl;
}
	
int main()
{
	
shop_book Khad;
	Khad.price = 2000; 
	Khad.qty = 1;
	Khad.tax = 200;
	Khad.name= "Best Book Vol.1";
	Khad.book();
	return 0;
}
