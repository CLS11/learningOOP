// Showing the important information while capping the unimportant ones.
// We can't create instances of abstract class but the pointers can't be
// created.

#include <iostream>
using namespace std;

class Smartphone {
public:
  virtual void takeASelfie() = 0; // abstract class
  virtual void makeCalls() = 0;
};

class Android : public Smartphone {
public:
  void takeASelfie() { cout << "Android is taking a selfie\n"; }
  void makeCalls() { cout << "Android is calling\n"; }
};
class Iphone : public Smartphone {
public:
  void takeASelfie() { cout << "Iphone is taking a selfie\n"; }
  void makeCalls() { cout << "Iphone is calling\n"; }
};

int main() {
  Smartphone *s1 = new Android();
  s1->takeASelfie();
  s1->makeCalls();
  Smartphone *s2 = new Iphone();
  s2->takeASelfie();
  system("pause>0");
}