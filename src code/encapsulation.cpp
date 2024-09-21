// properties in the class should be private instead of public.
// Create methods for the properties so that they can be accessed by the user.
#include <iostream>
#include <list>
using namespace std;

class ytChannel {
private:
  string Name;
  string ownerName;
  int subscriberCount;
  list<string> publishedVideoTitles;

  // making a constructor
public:
  ytChannel(string Name, string ownerName) {
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

  void subscribe() { subscriberCount++; }

  void unsubscribe() {
    if (subscriberCount > 0)
      subscriberCount--;
  }

  void publishVideo(string title) { publishedVideoTitles.push_back(title); }
};

int main() {
  ytChannel ytChannel1("MnM", "Tracy");
  ytChannel1.publishVideo("A");
  ytChannel1.publishVideo("B");
  ytChannel1.publishVideo("C");
  ytChannel1.subscribe();
  ytChannel1.subscribe();
  ytChannel1.subscribe();
  ytChannel1.unsubscribe();

  ytChannel1.printInfo();

  return 0;
}
