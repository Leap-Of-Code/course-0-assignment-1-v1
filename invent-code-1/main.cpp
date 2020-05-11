#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string city;

  // Step 1. Ask the user for their name and their city.
  cout << "What is your name, bigshot?" << endl;
  cin >> name;

  cout << "From where do you hail?" << endl;
  cin >> city; 

  // Step 2. Print the greeting back to the user.
  cout << "Welcome to " << city << ", " << name << "! Wash your hands, don't touch your face, let's keep " << city << " a COVID-free place." << endl;
}
