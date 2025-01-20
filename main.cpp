#include <iostream>
#include <iomanip> // For controlling output precision

using namespace std;

int main() {
    // Declare variables for Fahrenheit, Celsius, and Kelvin
    double fahrenheit, celsius, kelvin;

    // Ask the user to input the temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    // Output the equivalent temperatures with 2 decimal places
    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
    cout << "Equivalent temperature in Celsius: " << celsius << " °C" << endl;
    cout << "Equivalent temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}
