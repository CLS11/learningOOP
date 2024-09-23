// Class represents a blue print/ template and an object represents an instance
// of that class. Class is a user-defined datatype
#include <iostream>
#include <list>
using namespace std;

class YTChannel {
public:
    string Name;
    string ownerName;
    int subscriberCount;
    list<string> publishedVideoTitles;
};

int main() {
    YTChannel yt;
    yt.Name = "MnM";  
    yt.ownerName = "Tracy";  
    yt.subscriberCount = 2000;  
    yt.publishedVideoTitles = {"A", "B", "C"};

    cout << "Name: " << yt.Name << endl;  
    cout << "Owner Name: " << yt.ownerName << endl;  
    cout << "Subscriber Count: " << yt.subscriberCount << endl;  
    for (const string& videoTitle : yt.publishedVideoTitles) {  
        cout << videoTitle << endl;  
    }

    return 0;  
}
