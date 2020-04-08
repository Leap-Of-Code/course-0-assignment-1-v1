#include <iostream>
#include <string>
using namespace std;

int main() {
  // Calculate the total number of hours students spent on assignments.
  int num_assignments1 = 12;
  int hours_per_assignment = 3;
  int total_hours_on_assignments = hours_per_assignment * num_assignments1;

  // Calculate the total number of lines of code written on assignments.
  int num_assignments2 = 16;
  int lines_per_assignment = 45;
  int total_lines_of_code = num_assignments2 * lines_per_assignment;

  cout << "The total amount of time on assignments is: " << total_hours_on_assignments << endl;
  cout << "The total number of lines of code written is: " << total_lines_of_code << endl;
}
