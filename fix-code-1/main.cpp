#include <iostream>
#include <string>
using namespace std;

// Calculate the total precipitation numbers in Boston.
int main() {
    int DAYS_PER_YEAR = 365;
    float average_rainfall = .23;
    float average_snowfall = .12;

    float average_precipitation = average_rainfall + average_snowfall;

    float total_precipitation = DAYS_PER_YEAR * average_precipitation;

    cout << "The precipitation in Boston is: " << total_precipitation << " in." << endl;
}
