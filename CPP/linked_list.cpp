#include<iostream>
using namespace std;
struct node
{
int data;
node* next=NULL;
};

int main ()
{
	node n1,n2,n3;
	n1.data = 4;
	n1.next = &n2;
	n2.data = 9;
	n2.next = &n3;
	n3.data = 5;
cout <<"address of node after n2: "<<n2.next<<endl<<"so data at "<<n2.next<<" is "<<n3.data<<endl;	
}
