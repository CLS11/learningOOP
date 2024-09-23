// constructors are methods inside the class whose names are the same as
// classes' parameters in constructors should be filled in whenever a class is
// accessed. constructor variables override methods It is a method that is
// involved each time when an object is created in a class. Method is going to
// be called on the construction of that object Constructors do not have a
// return type
#include <iostream>
#include <list>
using namespace std;

class YTChannel {
public:
  string Name;
  string ownerName;
  int subscriberCount;
  list<string> publishedVideoTitles;

  // making a constructor
  YTChannel(string Name, string ownerName) {
    Name = Name;
    ownerName = ownerName;
    subscriberCount = 0;
  }

  // method or printing
  void printInfo() {
    cout << "Name: " << Name << endl;
    cout << "Owner Name: " << ownerName << endl;
    cout << "Subscriber Count: " << subscriberCount << endl;
    for (const string &videoTitle : publishedVideoTitles) {
      cout << videoTitle << endl;
    }
  }
};

int main() {
  YTChannel ytChannel1("MnM", "Tracy");
  ytChannel1.publishedVideoTitles.push_back("A");
  ytChannel1.publishedVideoTitles.push_back("B");
  ytChannel1.publishedVideoTitles.push_back("C");
  /*yt.Name = "MnM";
  yt.ownerName = "Tracy";
  yt.subscriberCount = 2000;
  yt.publishedVideoTitles = {"A", "B", "C"};*/

  YTChannel ytChannel2("Cups", "Alissa");

  ytChannel1.printInfo();
  ytChannel2.printInfo();
  return 0;
}
