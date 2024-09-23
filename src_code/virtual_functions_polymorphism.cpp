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
  //i1->makeSound();
  Instrument* i2 = new Piano();
  //i2->makeSound();

  Instrument* instruments[2]={i1,i2};//polymorphism
  for(int i =0; i<2; i++)
    instruments[i]->makeSound();
  
  system("pause>0");
}