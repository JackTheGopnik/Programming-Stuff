#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
class publication<int*>
{
private:	
	string title;
	float price;
public:

void set_pubdat()
{
	cout<<"Enter the Title of the Book: "<<endl;
 	getline (cin, title);
 	locked:
 	cout<<"Now Enter the Price of the book: ";
 	cin>>price;

}

void show_pubdat()
{
	cout<<"Title of the book: "<<title<<endl;
	cout<<"Price of the book: $"<<price<<endl;
}

}; 

class book : public publication
{
	private:
	int num_pages;
	public:

	void setpage()
	{
	
		cout<<"Enter the number of pages for this book: "<<endl;
		cin>>num_pages;
	}
	void showpages(){cout<<"This book has "<<num_pages<<" no. of pages"<<endl;}
};


class audio_tape : public publication
{
	private:
		float time;
	public:

	void set_playtime(){
		cout<<"Enter the length of this tape in minutes: "<<endl;
		cin>>time;
	}
	void show_playtime(){
		cout<<"This tape is "<<time<<" minutes long."<<endl;
	}
};



int main()
{
	book b1;
	audio_tape at1;
	b1.set_pubdat();
	b1.setpage();
	at1.set_playtime();
	b1.show_pubdat();
	b1.showpages();
	at1.show_playtime();
	
}

