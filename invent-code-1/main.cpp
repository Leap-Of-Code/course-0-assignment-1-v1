#include <iostream>
#include <string>
using namespace std;
int main() {
  string name;
  string city;
  cout << "What is your name?: ";
  getline(cin,name);
  cout << "What is your city?: ";
  getline(cin, city);
  cout << "Nice to meet you " << name << " from " << city << ". Have a great day!" << endl;
  // Step 1. Ask the user for their name and their city.

  // Step 2. Print the greeting back to the user.
}
