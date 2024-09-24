// Class is a building block of object oriented programming.
// Class is said to be user-defined datatype.
//A constructor doesn't have a return type.
//A constructor has the same name as its class.
//There's an inbuilt constructor everytime a class is created.
//Constructor must be public (but not necessarily).
#include <iostream>
using std::string;

class Employee {
public:
  string Name;
  string Company;
  int Age;

  void introduceYourself() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Company: " << Company << std::endl;
    std::cout << "Age: " << Age << std::endl;
  }

  //Creating a constructor
  Employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;

  }
};

int main() {
  // creating an object for class as it is a user defined datatype
  Employee e1 = Employee("Jess", "Amazon", 25);
  Employee e2 = Employee("Kylie", "Dyson", 28);
  /*e1.Name = "Jess";
  e1.Company = "Amazon";
  e1.Age = 25;
  e2.Name = "Kylie";
  e2.Company = "Dyson";
  e2.Age = 28;*/
  e1.introduceYourself();
  e2.introduceYourself();

}