#include <iostream>
#include <string>
using namespace std;

int main() {
  int price_avocado;
  int price_tomato;
  int num_avocados;
  int num_tomatoes,total_cost;

  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
    cin >> num_avocados >> num_tomatoes;
  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
    cin >> price_tomato >> price_avocado;
  // Step 3: Calculate the total cost.
     total_cost = num_avocados*price_avocado + num_tomatoes*price_tomato;
  // Step 4: Print out the total cost.
    cout << total_cost;
}
