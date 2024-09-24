// The sole purpose is to prevent the data access outside the class.
//'Public' function can be envoked in order to interact, modify the data in a
// class by others. To access the data, methods are used which are known as
// getters and setters.

#include <iostream>
using std::string;

class Employee {
private:
  string Name;
  string Company;
  int Age;

public:
  void introduceYourself() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Company: " << Company << std::endl;
    std::cout << "Age: " << Age << std::endl;
  }

  void setName(string name) {
    Name = name; // setter
  }

  string getName() {
    return Name; // getter
  }

  void setCompany(string company) {
    Company = company; // setter
  }

  string getCompay() {
    return Company; // getter
  }

  void setAge(int age) {
    if(age>=18)
    Age = age; // setter
  }

  int getAge() {
    return Age; // getter
  }

  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  }
};

int main() {
  Employee e1 = Employee("Jess", "Amazon", 25);
  Employee e2 = Employee("Kylie", "Dyson", 28);
  e1.introduceYourself();
  e2.introduceYourself();

  e1.setAge(30);
  std::cout << e1.getName()<<" is "<<e1.getAge()<< " is  years old\n";
} 