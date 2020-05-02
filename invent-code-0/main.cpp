#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_avocados;
  cout << "Number of avocados needed: " << endl; 
  cin >> num_avocados;

  int num_tomatoes;
  cout << "Number of tomatoes needed: " << endl; 
  cin >> num_tomatoes; 

  float price_avocado;
  cout << "Cost of each avocado: " << endl; 
  cin >> price_avocado;

  float price_tomato;
  cout << "Cost of each tomato: " << endl;
  cin >> price_tomato;

  int total_cost = (price_avocado * num_avocados) + (price_tomato * num_tomatoes); 

  cout << "total cost is: $" << total_cost << endl;
  

  // Step 1: Prompt the user to input the number of tomatoes and avocados required.

  // Step 2: Prompt the user to input the cost of tomatoes and avocados.

  // Step 3: Calculate the total cost.

  // Step 4: Print out the total cost.
}
