// constructors are methods inside the class whose names are the same as
// classes' parameters in constructors should be filled in whenever a class is
// accessed. constructor variables override methods It is a method that is
// involved each time when an object is created in a class. Method is going to
// be called on the construction of that object Constructors do not have a
// return time
#include <iostream>
#include <list>
using namespace std;

class ytChannel {
public:
  string Name;
  string ownerName;
  int subscriberCount;
  list<string> publishedVideoTitles;

  // making a constructor
  ytChannel(string Name, string ownerName) {
    Name = Name;
    ownerName = ownerName;
    subscriberCount = 0;
  }
};

int main() {
  ytChannel ytChannel1("MnM", "Tracy");
  /*yt.Name = "MnM";
  yt.ownerName = "Tracy";
  yt.subscriberCount = 2000;
  yt.publishedVideoTitles = {"A", "B", "C"};*/

  cout << "Name: " << ytChannel1.Name << endl;
  cout << "Owner Name: " << ytChannel1.ownerName << endl;
  cout << "Subscriber Count: " << ytChannel1.subscriberCount << endl;
  for (const string &videoTitle : ytChannel1.publishedVideoTitles) {
    cout << videoTitle << endl;
  }

  ytChannel ytChannel2("Cups", "Alissa");
  cout << "Name: " << ytChannel2.Name << endl;
  cout << "Owner Name: " << ytChannel2.ownerName << endl;
  cout << "Subscriber Count: " << ytChannel2.subscriberCount << endl;
  for (const string &videoTitle : ytChannel2.publishedVideoTitles) {
    cout << videoTitle << endl;
  }
  return 0;
}
