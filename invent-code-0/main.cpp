#include <iostream>
#include <string>
using namespace std;

int main() {
  int price_avocado;
  int price_tomato;
  int num_avocados;
  int num_tomatoes;
  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
cout << "input # of avacado" <<" " ;
cin >> num_avocados;
cout << "input # of tomato" <<" " ;
cin >> num_tomatoes;
  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
cout << "input $ of avacado" <<" " ;
cin >> price_avocado; 
cout << "input $ of tomato" <<" " ;
cin >> price_tomato;
  // Step 3: Calculate the total cost.

int total_cost = ((num_avocados * price_avocado ) + ( num_tomatoes * price_tomato ));

  // Step 4: Print out the total cost.
cout << "Total cost is: $" << total_cost;
}
