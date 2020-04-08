#include <iostream>
#include <string>
using namespace std;

// Calculate the total precipitation numbers in Boston.
int main() {
    int DAYS_PER_YEAR = 365;
    float average_rainfall = .23;
    float Average_Snowfall = .12;

    float average_Precipitation = average_rainfall + Average_Snowfall;

    float total_precipitation = DAYS_PER_YEAR * average_Precipitation;

    cout << "The precipitation in Boston is: " << total_precipitation << " in." << endl;
}
