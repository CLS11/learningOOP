//Pure virtual functions force all the derived classes to make their own implementation instead of using the one in base class.
//An abstract class has atleast 1 pure virtual function. 

#include <iostream>
using namespace std;

class Instrument {
public:
  virtual void makeSound() = 0; //pure virtual function
};

class Accordian : public Instrument {
public:
  void makeSound() { 
    cout << "Accordian is playing..\n"; }
};

class Piano: public Instrument{
    public:
    void makeSound(){
        cout << "Piano is playing..\n";
    } 
};


int main() {
  Instrument* i1 = new Accordian();
  i1->makeSound();
  Instrument* i2 = new Piano();
  i2->makeSound();
  
  system("pause>0");
}