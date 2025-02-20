#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
// ofstream -->	Creates and writes to files
// ifstream -->	Reads from files
// fstream -->	A combination of ofstream and ifstream: creates, reads, and
// writes to files

using namespace std;

void createFile(string filename = "filename.txt") {
  ofstream MyFile(filename);

  MyFile << "Files can be tricky, but it is fun enough!";
  MyFile.close();
  cout << "\n-->    File " << filename << " created successfully.\n";
}

void readFile(string filename = "filename.txt") {
  string line;
  ifstream MyFile(filename);
  while (getline(MyFile, line)) {
    cout << line << endl;
  }
}

void time() {
  time_t now = time(0);
  char *dt = ctime(&now);
  cout << "\n-->    The local date and time is: " << dt << endl;
  struct tm datetime;
  time_t timestamp;

  datetime.tm_year = 2025 - 1900;
  datetime.tm_mon = 12 - 1; // Number of months since January
  datetime.tm_mday = 17;
  datetime.tm_hour = 12;
  datetime.tm_min = 30;
  datetime.tm_sec = 1;
  // Daylight Savings must be specified
  // -1 uses the computer's timezone setting
  datetime.tm_isdst = -1;

  timestamp = mktime(&datetime);

  cout << ctime(&timestamp);
}

int filesMain() {
  cout << "\n-->    Files Main\n";
  createFile("test.txt");
  readFile("test.txt");
  time();
  return 0;
}
