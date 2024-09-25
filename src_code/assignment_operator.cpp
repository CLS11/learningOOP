// Copy constructor is used to create a new object based on other object
// Assignment operator replacing the values of aready existing objects based on
// another objects.

#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
  string Name;
  string Genre;
  float Rating;
  int ActorsCounter;
  string *Actors; // Have to create

  Movie(string name, string genre, float rating) {
    Name = name;
    Genre = genre;
    Rating = rating;
    ActorsCounter = 0;
    Actors = new string[ActorsCounter];
  } // parameterized constructor

  ~Movie() {
    delete[] Actors;
    Actors = nullptr;
  } // destructor to free the memory

  Movie() {
    Name = "";
    Genre = "";
    Rating = 0;
  } // default constructor
  Movie(const Movie &original) {
    Name = original.Name;
    Genre = original.Genre;
    Rating = original.Rating;

    ActorsCounter = original.ActorsCounter;
    Actors = new string[ActorsCounter];
    for (int i = 0; i < ActorsCounter; i++)
      Actors[i] = original.Actors[i];
  } // copy constructor
  Movie &operator=(const Movie &original) {
    if (&original != this) {
      Name = original.Name;
      Genre = original.Genre;
      Rating = original.Rating;
      ActorsCounter = original.ActorsCounter;

      delete[] Actors;
      Actors = new string[ActorsCounter];
      for (int i = 0; i < ActorsCounter; i++)
        Actors[i] = original.Actors[i];

      return *this;
    }

  } // assignment operator

  void addActor(string newActorName) {
    string *newActors = new string[ActorsCounter + 1];
    for (int i = 0; i < ActorsCounter; i++)
      newActors[i] = Actors[i];

    newActors[ActorsCounter] = newActorName;

    delete[] Actors;
    Actors = newActors;
    ActorsCounter++;
  }

  void printInfo() {
    cout << Name << endl;
    cout << Genre << endl;
    cout << Rating << endl;
    cout << "Actors: " << endl;
    for (int i = 0; i < ActorsCounter; i++)
      cout << Actors[i] << endl;
    cout << endl;
  }
};

int main() {
  Movie movie1("The Dark Knight", "Action", 9.5);
  Movie movie2("The Lion King", "Animated", 8);

  Movie movie3;
  Movie movie4(movie1);
  movie4 = movie2;
  // movie4.operator=(movie2);

  Movie movie5 = movie1;
  movie5 = movie2;

  cin.get();
}
