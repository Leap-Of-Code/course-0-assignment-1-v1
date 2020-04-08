#include <iostream>
#include <string>
using namespace std;

// Calculate the total precipitation numbers in Boston.
int main() {
    int days_per_year = 365;
    float average_rainfall = .23;
    float average_snowfall = .12;

    float average_precipitation = average_rainfall + average_snowfall;

    float total_precipitation = days_per_year * average_precipitation;

    cout << "The precipitation in Boston is: " << total_precipitation << " in." << endl;
}
