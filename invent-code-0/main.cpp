#include <iostream>
#include <string>
using namespace std;

int main() {
  int price_avocado;
  int price_tomato;
  int num_avocados;
  int num_tomatoes;

  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
    cout << "Enter the number of avocados and tomatoes respectively: ";
    cin >> num_avocados >> num_tomatoes;

  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
    cout << "Enter the price of avocados and tomatoes respectively: ";
    cin >> price_avocado >> price_tomato;
  // Step 3: Calculate the total cost.
    int total_cost = num_avocados*price_avocado + num_tomatoes*price_tomato;
  // Step 4: Print out the total cost.

    cout << "The total cost is: " << total_cost;
}
