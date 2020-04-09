#include <iostream>
#include <string>
using namespace std;

int main() {
  float price_avocado;
  float price_tomato;
  int num_avocados;
  int num_tomatoes;
  // Step 1: Prompt the user to input the number of tomatoes and avocados required.
  cout << "Enter number of avacados ";
  cin >> num_avocados; 

  cout << "Enter number of tomatoes ";
  cin >> num_tomatoes;

  // Step 2: Prompt the user to input the cost of tomatoes and avocados.
  cout << "Enter the cost of avacados $";
  cin >> price_tomato;

  cout << "Enter the cost of tomatoes $";
  cin >> price_avocado;

  // Step 3: Calculate the total cost.
  int total_cost = (num_avocados * price_avocado);
  int tomato_all = (num_tomatoes * price_tomato);

  // Step 4: Print out the total cost.
  cout << "Avacado cost is: " << total_cost;
  cout << "tomato cost is " << tomato_all << endl;
}
