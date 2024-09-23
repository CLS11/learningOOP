// Operator functions are used to determine the behavior of an operator with a
// certain datatype.

#include <iostream>
#include <list>
#include <string>
using namespace std;

struct YTChannel {
  string Name;
  int SubscriberCount;

  YTChannel(string name, int subscriberCount) {
    Name = name;
    SubscriberCount = subscriberCount;
  }
  bool operator== (const YTChannel& channel)const{
    return this->Name == channel.Name;
  }
};

// overloading the insertion operator
ostream &operator<<(ostream &COUT, YTChannel &ytChannel) {
  COUT << "Name:" << ytChannel.Name << endl;
  COUT << "Subscribers: " << ytChannel.SubscriberCount << endl;
  return COUT;
};

struct MyCollection {
  list<YTChannel> myChannels;

  void operator+=(YTChannel &channel) { this->myChannels.push_back(channel); }
  void operator-=(YTChannel &channel) { this->myChannels.remove(channel); }
};
ostream &operator<<(ostream &COUT, MyCollection myCollection) {
  for (YTChannel ytChannel : myCollection.myChannels)
    COUT << ytChannel << endl;
  return COUT;
}

int main() {
  YTChannel yt1 = YTChannel("MnM", 80000);
  YTChannel yt2 = YTChannel("Seb", 7000);
  MyCollection myCollection;
  myCollection += yt1;
  myCollection += yt2;
  myCollection -= yt2;

  cout << myCollection;
  cin.get();
}