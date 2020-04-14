#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_students = 30;
  int num_lessons = 12;
  float hours_per_lesson = 3.2;
  int tota_student_time = (num_students * num_lessons * hours_per_lesson);

  cout << "Total student time is: ";
  cout << tota_student_time;
  cout << endl;
}
