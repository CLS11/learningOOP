//Constructors which receives the value in the form of parameters or arguments.
//Uses those parameters/arguments to instantiate the properties.

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

    User(string fName, string lName, int Age){
        firstName = fName;
        lastName = lName;
        age = Age;
        email = fName+"."+lName+"@gmail.com";
    }//parametrized constructor
};

void getUserInfo(User u){
    cout<<"First name: "<<u.firstName<<endl;
    cout<<"Last name: "<<u.lastName<<endl;
    cout<<"Age: "<<u.age<<endl;
    cout<<"Email: "<<u.email<<endl;
}

int main(){
    User user1("Jessica", "Hess", 36);
    getUserInfo(user1);
    
    cin.get();
}