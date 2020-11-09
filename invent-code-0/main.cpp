#include <iostream>
#include <string>
using namespace std;

int main() {
  float price_avocado;
  float price_tomato;
  int num_avocados;
  int num_tomatoes;

  cout << "Number of Tomatoes:";
  cin >> num_tomatoes;

  cout << "Number of Avocados:";
  cin >> num_avocados;

  cout << "Cost of One Tomato:";
  cin >> price_tomato;

  cout << "Cost of One Avocado:";
  cin >> price_avocado;
  
  float total_cost = (num_tomatoes * price_tomato) + (num_avocados * price_avocado);
  cout << "Total cost is $" << total_cost << endl;
  
}
