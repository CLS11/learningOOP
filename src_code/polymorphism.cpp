 // It describes the ability of an object to have multiple forms.
// 2 or more objects inheriting from the same base class. They can have methods
// with same name but different implementation.
#include <iostream>
#include <list>
using namespace std;

class YTChannel {
private:
  string Name;
  int subscriberCount;
  list<string> publishedVideoTitles;

protected:
  string ownerName;
  int contentQuality;

public:
  YTChannel(string name, string OwnerName) {
    Name = name;
    ownerName = OwnerName;
    subscriberCount = 0;
    contentQuality = 0;
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

  void checkAnalytics() {
    if (contentQuality < 5)
      cout << Name << " has bad quality content." << endl;
    else
      cout << Name << "has good quality content." << endl;
  }
};

class ArtYTChannel : public YTChannel {
public:
  ArtYTChannel(string Name, string ownerName)
      : YTChannel(Name, ownerName) {} // making public constructor
  void practice() {
    cout << ownerName
         << " is practicing vocals, learning instruments, studying nodes"
         << endl;
    contentQuality++;
  }
};

class TravelYTChannel : public YTChannel {
public:
  TravelYTChannel(string Name, string ownerName)
      : YTChannel(Name, ownerName) {} // making public constructor
  void practice() {
    cout << ownerName
         << " is practicing photography, learning languages, planning" << endl;
    contentQuality++;
  }
};

int main() {
  ArtYTChannel ytChannel2("Sebastian", "SJ Sebastian");
  TravelYTChannel ytChannel3("Beautysail", "Frank");
  ytChannel2.practice();
  ytChannel3.practice();
  ytChannel3.practice();

  // creating a pointer
  // POinters of base class pointing towards the derived class
  YTChannel *yt1 = &ytChannel2;
  YTChannel *yt2 = &ytChannel3;

  yt1->checkAnalytics();
  yt2->checkAnalytics();
  return 0;
}