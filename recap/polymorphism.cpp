// Ability of an object or a method to have many forms

#include <iostream>
using std::string;

class AbstractEmployee {
  virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
  string Company;
  int Age;

protected:
  string Name;

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

  virtual void work() {
    std::cout << Name << " is checking email, task backlog,performing tasks"
              << std::endl;
  }
};

class Developer : public Employee {
public:
  string programmingLanguage;
  Developer(string name, string company, int age, string language)
      : Employee(name, company, age) {
    programmingLanguage = language;
  }

  void fixBug() {
    std::cout << Name << " fixes bug using " << programmingLanguage
              << std::endl;
  }

  void work() {
    std::cout << Name << " is writing" << programmingLanguage << " code"
              << std::endl;
  }
};

class Teacher : public Employee {
public:
  string Subject;
  void prepareLesson() {
    std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
  }
  Teacher(string name, string company, int age, string subject)
      : Employee(name, company, age) {}

    void work() {
    std::cout << Name << " is teaching" << Subject
              << std::endl;
  }
};

int main() {
  Employee e1 = Employee("Jess", "Amazon", 25);
  Employee e2 = Employee("Kylie", "Dyson", 28);
  Developer d = Developer("Erica", "Nestle", 37, "C++");
  Teacher t = Teacher("Jane", "DD", 28, "History");
  
  Employee* e3 = &d;
  Employee* e4 = &t;

  e3->work();
  e4->work();

}