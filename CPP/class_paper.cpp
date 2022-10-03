#include<iostream>
using namespace std;

class vehicle
{

private:
int model_n;
int year;

protected:
string type;

string owner_name;

float weight;

public:
void Honk ()
  {
    cout << "BEEP BEEP" << endl;
  } 
void Lights ()
  {
    cout << "Lights are on!" << endl;
  } 
void func_disp () 
  {
    
cout << owner_name << " is the owner of this car" << endl;
    
cout << "This vehicle is a " << type << " made in the year " << year << endl;
  
cout << "it weighs "<<weight<<" tons"<<endl;
} 

void set_pers_data (int m, int y) 
{
    
model_n = m;
    
year = y;
    
}
 
 
}; 



class smart_car : public vehicle
{
public:
void set_protec_dat(float w, string t, string o)
{  
type = t;

owner_name = o;

weight = w;
}


};
 
 
int main () 
{
  
smart_car sol;
  
sol.Honk ();
  
sol.Lights ();
  
sol.set_pers_data (298, 2019);
 
sol.set_protec_dat(2.7,"Smart car","Rahim");
  
sol.func_disp ();



}

