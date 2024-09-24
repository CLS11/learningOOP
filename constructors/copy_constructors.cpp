// Copy constructors are used to construct objects based on an already exisiting
// object. Default copy constructor After using pointers, a customized copy
// constructor becomes a necessity. Copy constructor must be in a public area of
// the class. It doesn't have a return type. It will have the same name as teh
// class it belongs to. It receives 1 parameter and it should be same as the
// class it belongs to.
// When a compiler makes copy of an object then it invokes opy constructor.

#include <iostream>
using namespace std;

class Book {
public:
  string Title;
  string Author;
  float *Rates;
  int RatesCounter;

  Book(string title, string author) {
    Title = title;
    Author = author;

    RatesCounter = 2;
    Rates = new float[RatesCounter];
    Rates[0] = 5;
    Rates[1] = 4;
  }
  // Destructor
  ~Book() {
    delete[] Rates;
    Rates = nullptr;
  }

  Book(Book &original) {
    Title = original.Title;
    Author = original.Author;
    RatesCounter = original.RatesCounter;
    for (int i = 0; i < RatesCounter; i++) {
      Rates[i] = original.Rates[i];
    }
  }
};

void printBook(Book book) {
  cout << "Title: " << book.Title << endl;
  cout << "Author: " << book.Author << endl;

  float sum = 0;
  for (int i = 0; i < book.RatesCounter; i++) {
    sum += book.Rates[i];
  }
  cout << "Average Rate: " << sum / book.RatesCounter << endl;
}

int main() {
  Book book1("The Art of War", "Sun Tzu");
  Book book2("The psychology of money", "Morgan Housel");
  Book book3(book1);
  printBook(book1);
  printBook(book2);
  printBook(book3);
  cin.get();
}