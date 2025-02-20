#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
  string name;
  int age;
  float height;
  Animal(string n, int a, float h) {
    this->name = n;
    this->age = a;
    this->height = h;
  };

  void data() {
    cout << "\n-->    " << name << " is " << age << " years old and " << height
         << " inches tall.\n";
  }
};

class Dog : public Animal {
public:
  Dog(string n, int a, float h) : Animal(n, a, h) {}
  void getData() {
    cout << "\n-->    " << name << " is " << age << " years old and " << height
         << " inches tall.\n";
  }
};

int classMain() {
  Dog dog("Tommy", 5, 12.5);
  dog.getData();
  return 0;
}
