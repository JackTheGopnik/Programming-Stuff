#include<iostream>
using namespace std;
class MyClass //declaration of the class itself
{
	public:
int num_pvt=3;	
float num_longer=9.45;
char key='v';	
    void myMethodin() {  // Method/function defined inside the class
      cout << "Hello World!"<<endl;
    }
    void myMethodOut();
};

void MyClass::myMethodOut()
{
cout<<"Goodbye world!";
}
int main()
{
	
MyClass Myobj1,Myobj2,Myobj3;
Myobj1.myMethodin();
cout<<Myobj1.key<<endl;
cout<<Myobj1.num_longer<<endl;
cout<<Myobj1.num_pvt<<endl;
Myobj1.myMethodOut();
return 0;
}
