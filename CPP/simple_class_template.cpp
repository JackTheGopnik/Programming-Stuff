#include <iostream>
template <class T>
class twoPeas { //two peas of the same pond
    T a, b;
  public:
    twoPeas (T first, T second)
      {a=first; b=second;}
    T getmax ();
};

template <class T> //a template class that checks the condition
T twoPeas<T>::getmax ()
{
  T retval;
  retval = a>b? a : b; //condition
  return retval;
}

int main () {
  int a,b;
  std::cout <<"Enter two numbers "<<std::endl;
  std::cin >> a >>b;
  twoPeas <int> myobject (a, b);
  std::cout <<"The Bigger Number is = "<< myobject.getmax()<<" in the pair of peas.";
  return 0;
}

