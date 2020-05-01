#include <iostream>
#include <string>
using namespace std;

int main() {
  int price_avocado;
  int price_tomato;
  int num_avocados;
  int num_tomatoes;

  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
  cout << "How many advocados are there? ";  
  cin >> num_avocados;

  cout << "How many tomatos are there? ";
  cin >> num_tomatoes;

  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
  cout << "What is the price of the advocados? ";
  cin >> price_avocado;

  cout << "What is the price of the tomatos? ";
  cin >> price_tomato;
  
  // Step 3: Calculate the total cost.
  int total_cost = price_avocado * num_avocados + price_tomato * num_tomatoes;
  
  // Step 4: Print out the total cost.
  cout << "The total cost is " << total_cost << endl;
}
