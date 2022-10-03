#include<iostream>
using namespace std;
class person1
{
private:
int ss1;
string sr1;


public:
void setter(int s, string st){
ss1=s;	
sr1=st;
}
void getter()
{
	return sr1;
	
	
}

};




int main()
{

	person1 s;
	s.setter(12,"Vby5y4r4ew3t0[iphn3q5y08h]");
cout<< s.getter() <<endl;	
}
