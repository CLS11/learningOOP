// Hiding the complexity from the user.
// Behavior of an interface can be simulated by the use of abstract classes.

#include <iostream>
using std::string;

class AbstractEmployee {
  virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
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

  void setName(string name) { Name = name; }

  string getName() { return Name; }

  void setCompany(string company) { Company = company; }

  string getCompay() { return Company; }

  void setAge(int age) {
    if (age >= 18)
      Age = age;
  }

  int getAge() { return Age; }

  void askForPromotion() {
    if (Age > 30)
      std::cout << Name << " got promoted." << std::endl;
    else
      std::cout << Name << " no promotion granted." << std::endl;
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
    e1.askForPromotion();
    e2.askForPromotion();
}