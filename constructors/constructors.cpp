#include<iostream>
using namespace std;

class User{
public:
    string firstName;
    string lastName;
    int age;
    string email;
    User(){
        firstName = "nn";
        lastName = "nl";
        age = 0;
        email = "not set";
    }//default constructor
};

int main(){
    User user1;
    
    cout<<"First name: "<<user1.firstName<<endl;
    cout<<"Last name: "<<user1.lastName<<endl;
    cout<<"Age: "<<user1.age<<endl;
    cout<<"Email: "<<user1.email<<endl;
    cin.get();
}