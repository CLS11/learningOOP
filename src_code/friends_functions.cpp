// A friend function has access to private and protected members of a class.
// It can access these members because of the friendship relationship.
// Friendship is inherited.
#include <iostream>
using namespace std;

class EquilateralTriangle {
  float a;
  float circumference;
  float area;

public:
  void setA(float length) {
    a = length;
    circumference = a * 3;
    area = (1.73 * a * a) / 4;
  }

  //friend void printResults(EquilateralTriangle);
  friend class Homework;
};

class Homework {
public:
  void printResults(EquilateralTriangle et) {
    cout << "circumference: " << et.circumference << endl;
    cout << "area: " << et.area << endl;
  }
};

int main() {
  EquilateralTriangle et;
  et.setA(3);
  Homework h;
  h.printResults(et);

  system("pause>nul");
}