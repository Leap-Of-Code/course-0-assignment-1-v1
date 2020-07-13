#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string city;

  // Step 1. Ask the user for their name and their city.
  cout << "Enter your name and city respectively: ";
  cin >> name >> city;

  // Step 2. Print the greeting back to the user.

  cout << "Your name is:" << name << endl;
  cout << "Your city is:" << city;
}
