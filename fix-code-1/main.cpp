#include <iostream>
#include <string>
using namespace std;

// Calculate the total precipitation numbers in Boston.
int main() {
    int DAYS_PER_YEAR = 365;
    float average_rainfall = .23;
    float averagesnowfall = .12;

    float averagePrecipitation = average_rainfall + averagesnowfall;

    float total_precipitation = DAYS_PER_YEAR * averagePrecipitation;

    cout << "The precipitation in Boston is: " << total_precipitation << " in." << endl;
}
