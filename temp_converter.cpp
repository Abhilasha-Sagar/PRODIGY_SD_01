#include <iostream>
#include <string>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

void convertTemperature(double value, char unit) {
    unit = toupper(unit);
    switch (unit) {
        case 'C':
            cout << value << " degC is:\n" << celsiusToFahrenheit(value) << " degF and " << celsiusToKelvin(value) << " K" << endl;
            break;
        case 'F':
            cout << value << " degF is:\n" << fahrenheitToCelsius(value) << " degC and " << fahrenheitToKelvin(value) << " K" << endl;
            break;
        case 'K':
            cout << value << " K is:\n" << kelvinToCelsius(value) << " degC and " << kelvinToFahrenheit(value) << " degF" << endl;
            break;
        default:
            cout << "Invalid unit of measurement. Please use 'C' for Celsius, 'F' for Fahrenheit, or 'K' for Kelvin." << endl;
            break;
    }
}

int main() {
    double value;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> value;

    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    convertTemperature(value, unit);

    return 0;
}
