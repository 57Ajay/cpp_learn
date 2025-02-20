#include <iostream>
#include <list>
#include <vector>

using namespace std;

void vectors() {
  vector<int> v = {1, 2, 3, 4, 5};
  v.push_back(7);
  v.pop_back();
  for (int i : v) {
    cout << i << " ";
  }
  cout << "\n" << v.front() << " " << v.back() << " " << v.size() << endl;
  cout << v.at(3);
}

void lists() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  cars.push_front("Tesla");

  cars.push_back("VW");

  cout << "\n";
  if (cars.empty()) {
    cout << "Empty list\n";
  }
  for (string car : cars) {
    cout << car << "\n";
  }
}

int dsMain() {
  cout << "\n-->    DS Main\n";
  vectors();
  lists();
  return 0;
}
