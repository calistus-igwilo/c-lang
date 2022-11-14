#include <stdio.h>

/*
write a C-program that reads a decimal number representing a temperature 
in degrees Celsius and prints out the corresponding temperature in 
degrees Fahrenheit with 1 decimal place. Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0
*/

int main(void) {
    double temperature, farenheight;
    
    printf("Enter the temperature in degree celcius \n");
    scanf("%lf", &temperature);
    farenheight = temperature * 9.0 / 5.0 + 32.0;
    printf("%.1lf\n", farenheight);


}