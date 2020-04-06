#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_students = 30;
  int num_lessons = 12;
  int hours_per_lesson = 3.2;

  cout << "Total student time is: " << (num_students * num_lessons * hours_per_lesson) << endl;
}
