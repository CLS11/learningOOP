#include <iostream>
using namespace std;

class Student {
public:
  string Name;
  int Age;
  char Gender;

  virtual void study() = 0;
};

class ProgrammingStudent : public Student {
public:
  void study() { cout << "Learning programming\n" << endl; }
};

class ArtStudent : public Student {
public:
  void study() { cout << "Learning to paint\n" << endl; }
};

class MusicStudent : public Student {
public:
  void study() { cout << "Learning to play an instrument\n" << endl; }
};

int main() {
  Student *students[3];
  students[0] = new ProgrammingStudent();
  students[1] = new ArtStudent();
  students[2] = new MusicStudent();

  for (int i = 0; i <= 2; i++) {
    students[i]->study();
  }

  // de-allocating the memory
  for (int i = 0; i <= 2; i++) {
    delete students[i];
  }
  cin.get();
}