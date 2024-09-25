//base class monster with 3 derived classes: zombie, vampire and dragon 
//pure virtual fuction would be attack but everyone has different style of attacking
//zombie; swallow
//vampire: bite
//dragon; burn

#include<iostream>
using namespace std;

class Monster{
public:
    virtual void attack() = 0;
};

class Zombie: public Monster{
public: 
    void attack(){
        cout << "Swallows" <<endl;
    }
};

class Vampire: public Monster{
public:
    void attack(){
        cout << "Bites" <<endl;
    }
};

class Dragon: public Monster{
public:
    void attack(){
        cout << "Burns" <<endl;
    }
};

int main(){
    Monster* monsters[3];
    monsters[0] = new Zombie();
    monsters[1] = new Vampire();
    monsters[2] = new Dragon();

    for(int i = 0; i<=2; i++){
        monsters[i]->attack();
    }
    cin.get();
}