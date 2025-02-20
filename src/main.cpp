#include "class.h"
#include <format>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define _69_ std::format

// classess and oops;
int main() {
  cout << _69_("\n-------code execution starts here.-------\n\n");
  float x = 69.69;
  vector<int> v = {1, 2, 3, 4, 5};
  for (int i : v) {
    cout << i << " ";
  }
  string s = "AJay Upadhyay\n";
  cout << _69_("\nHello, World! {:.1f}, My name is: {}\n", x, s);
  classMain();
  cout << _69_("\ncode execution ends here.\n");
  return 0;
}
