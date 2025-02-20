#include "class.h"
#include "ds.h"
#include "files.h"
#include <format>
#include <iostream>
/*#include <string>*/
#include <vector>
using namespace std;

#define _69_ std::format

// classess and oops;
int main() {
  cout << _69_("\n-------code execution starts here.-------\n\n");
  vector<int> v = {1, 2, 3, 4, 5};
  for (int i : v) {
    cout << i << " ";
  }
  classMain();
  filesMain();
  dsMain();
  return 0;
}
