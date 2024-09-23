#include <iostream>
#include <list>
using namespace std;

// Base class
class YTChannel {
private:
  string Name;
  int subscriberCount;
  list<string> publishedVideoTitles;

protected:
  string ownerName;

  // making a constructor
public:
  YTChannel(string name, string OwnerName) {
    Name = name;
    ownerName = OwnerName;
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

// inheriting all the public properties/methods of youtube channel into the new
// class. derived class Can have its own members
class ArtYTChannel : public YTChannel {
public:
  ArtYTChannel(string Name, string ownerName)
      : YTChannel(Name, ownerName) {} // making public constructor
  void practice() {
    cout << ownerName
         << "is practicing vocals, learning instruments, studying nodes"
         << endl;
  }
};

int main() {
  ArtYTChannel ytChannel2("Sebastian", "SJ Sebastian");
  ArtYTChannel ytChannel3("JJ Lin", "Jason");
  ytChannel2.publishVideo("Acoustics");
  ytChannel2.publishVideo("Solo");
  ytChannel2.subscribe();
  ytChannel2.subscribe();
  ytChannel2.printInfo();
  ytChannel2.practice();
  return 0;
}