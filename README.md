# PRODIGY_SD_01
## Temperature Conversion Program

### Overview

This program converts temperatures between Celsius, Fahrenheit, and Kelvin scales. The user is prompted to input a temperature value and the original unit of measurement. The program then converts the temperature to the other two units and displays the converted values.

### Features

- Convert temperature from Celsius to Fahrenheit and Kelvin.
- Convert temperature from Fahrenheit to Celsius and Kelvin.
- Convert temperature from Kelvin to Celsius and Fahrenheit.

### Usage

1. **Compile the Program**

   Ensure you have a C++ compiler installed. Use the following command to compile the program:

   ```sh
   g++ -o temp_converter temp_converter.cpp
   ```

2. **Run the Program**

   Execute the compiled program:

   ```sh
   ./temp_converter
   ```

3. **Input Temperature**

   Follow the prompts:
   
   - Enter the temperature value (e.g., `25`).
   - Enter the unit of measurement: `C` for Celsius, `F` for Fahrenheit, or `K` for Kelvin.

   The program will display the converted temperature values in the other two units.

### Code Explanation

#### Functions

- **celsiusToFahrenheit(double celsius)**: Converts Celsius to Fahrenheit.
- **celsiusToKelvin(double celsius)**: Converts Celsius to Kelvin.
- **fahrenheitToCelsius(double fahrenheit)**: Converts Fahrenheit to Celsius.
- **fahrenheitToKelvin(double fahrenheit)**: Converts Fahrenheit to Kelvin.
- **kelvinToCelsius(double kelvin)**: Converts Kelvin to Celsius.
- **kelvinToFahrenheit(double kelvin)**: Converts Kelvin to Fahrenheit.

#### Main Function

- **convertTemperature(double value, char unit)**:
  - Converts the input temperature value to the other two units based on the input unit.
  - Displays the converted values.
  - Handles invalid input units.

#### Main Execution

1. Prompts the user to enter the temperature value.
2. Prompts the user to enter the unit of measurement.
3. Calls `convertTemperature` to perform and display the conversions.

### Requirements

- C++ compiler

### Compilation and Execution

```sh
g++ -o temp_converter temp_converter.cpp
./temp_converter
```
