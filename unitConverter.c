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

int numOfConversions;
void temperature(double temp, char unit);
void length(double length, char unit);
void weight(double wt, char unit);

int main(void) {
    int i, numOfConversions;
    double value, temp, len, wt;
    char unit;
    
    scanf("%d", &numOfConversions);
    
    for(i=0; i<numOfConversions; i++) {
        scanf("%lf %c", &value, &unit);
    
        if (unit == 'm') {
            len = value;
            length(len, unit);
        }else if (unit == 'c'){
            temp = value;
            temperature(temp, unit);
            
        }else if (unit == 'g'){
            wt = value;
            weight(wt, unit); 
        }
        
    }
}

void temperature(double temp, char unit) {
    temp = 32 + 1.8 * temp;
    printf("%lf f\n", temp);
}

void length(double len, char unit) {
    len = len *  3.2808;
    printf("%lf ft\n", len);
}

void weight(double wt, char unit) {
    wt = wt * 0.002205;
    printf("%lf lbs\n", wt);
}