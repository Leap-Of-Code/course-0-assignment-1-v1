#include <iostream>
#include <string>
using namespace std;

int main() {
  int hotdogs_eaten = 5;
  int hamburgers_eaten = 2;
  int calories_per_hotdog = 100;
  int one_hamburger_calories = 120;
  int total_calories = hotdogs_eaten * calories_per_hotdog + hamburgers_eaten * one_hamburger_calories;

  cout << "The total calories eaten: " << total_calories << endl;
}
