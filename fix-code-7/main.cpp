#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_pigs = 3;
  int num_cows = 4;

  int average_pig_weight = 150;
  int average_cow_weight = 300;

  int total_weight = num_pigs * average_cow_weight + num_cows * average_pig_weight;

  cout << "The total weight of all animals is: " << total_weight << endl;
}
