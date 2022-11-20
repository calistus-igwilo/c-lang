#include <stdio.h>

/*
Write a C-program that converts metric measurements to imperial system values. 
Measurements are provided to your program in meters, grams or degrees Celsius 
and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of 
the following lines contains a value to be converted as well as its unit: m, g or 
c (for meters, grams or degrees Celsius). There will be a space between the number and 
the unit. You should print your output value for each input line immediately after 
calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their 
unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should 
be printed on its own line, and you should store and display all decimal values as doubles.

You may use functions to complete this exercise, but that is not required. However, you will need to use a comparison operation with characters, for example:
*/


double metersToFeet(double meters);
double gramsToPounds(double grams);
double celsiusToFahrenheit(double celsius);

int main(void) {
    int nbConversions, iConv;
    double value;
    char unit;
    
    scanf("%d", &nbConversions);
    for (iConv = 0; iConv < nbConversions; iConv = iConv + 1) {
        scanf("%lf %c", &value, &unit);
        if (unit == 'm'){
                printf("%lf ft\n", metersToFeet(value));
        } else if (unit == 'g'){
                printf("%lf lbs\n", gramsToPounds(value));
        }
        else if (unit == 'c'){
                printf("%lf f\n", celsiusToFahrenheit(value));
        }
    }
    return(0);
}

double metersToFeet(double meters)
{
    double feet_per_meter = 3.2808;
    return meters*feet_per_meter;
}
 
double gramsToPounds(double grams)
{
    double pounds_per_gram = .002205;
    return grams * pounds_per_gram;
}
 
double celsiusToFahrenheit(double celsius)
{
    double fahrenheit_per_celsius = 1.8;
    double zero_celsius_in_fahrenheit = 32;
    return celsius * fahrenheit_per_celsius + zero_celsius_in_fahrenheit;
}