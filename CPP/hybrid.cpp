#include<iostream>
#include<conio.h>

class arithmetic
{
    protected:
    int num1, num2;
    public:
    void getdata()
    {
        std::cout<<"For Addition:";
        std::cout<<"\nEnter the first number: ";
        std::cin>>num1;
        std::cout<<"\nEnter the second number: ";
        std::cin>>num2;
    }
};
class plus:public arithmetic
{
    protected:
    int sum;
    public:
    void add()
    {
        sum=num1+num2;
    }
};
class minus
{
    protected:
    int n1,n2,diff;
    public:
    void sub()
    {
        std::cout<<"\nFor Subtraction:";
        std::cout<<"\nEnter the first number: ";
        std::cin>>n1;
        std::cout<<"\nEnter the second number: ";
        std::cin>>n2;
        diff=n1-n2;
    }
};
class result:public plus, public minus //hybrid inheritance is being performed here
{
    public:
    void display()
    {
        std::cout<<"\nSum of "<<num1<<" and "<<num2<<"= "<<sum;
        std::cout<<"\nDifference of "<<n1<<" and "<<n2<<"= "<<diff;
    }
};
int  main()
{
    result z;
    z.getdata();
    z.add();
    z.sub();
    z.display();
    return 0;
}
