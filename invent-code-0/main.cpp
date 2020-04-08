#include <iostream>
#include <string>
using namespace std;

int main() {
  int price_avocado;
  int price_tomato;
  int num_avocados;
  int num_tomatoes;
  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
  cout << "What is the number of tomatoes required? " << endl;
  cin >> num_tomatoes; 
  cout << "What is the number of avocados required? " << endl;
  cin >> num_avocados; 

  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
  cout << "What is the price of tomatoes? " << endl;
  cin >> price_tomato; 
  cout << "What is the price of avocados? " << endl;
  cin >> price_avocado; 
  // Step 3: Calculate the total cost.
  int total_cost = (num_tomatoes * price_tomato) + (num_avocados * price_avocado); 

  // Step 4: Print out the total cost.
  cout << "The total cost is: " << total_cost << endl;
}
