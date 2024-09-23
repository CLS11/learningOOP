// A virtual function is defined in base class and then re-defined in derived
// class. Gives the ability of runtime polymorphism. If a derived class doesn't
// have its own implementation then virtual funtions help in executing the
// implementation of base class.
#include <iostream>
using namespace std;

class Instrument {
public:
  virtual void makeSound() { 
    cout << "Instrument is playing..\n"; }
};

class Accordian : public Instrument {
public:
  void makeSound() { 
    cout << "Accordian is playing..\n"; }
};

int main() {
  Instrument* i1 = new Accordian();
  i1->makeSound();

  system("pause>0");
}