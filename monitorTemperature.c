#include <stdio.h>

/*
A device measures the temperature every 15 seconds and provides these measurement 
to your program. 

Your program should first read two integers representing the minimum and maximum 
safe temperatures. Next, your program should continuously read temperatures (integers) 
that are being provided by the device. Once the chemical reaction is complete the 
device will send a value of -999, indicating to you that temperature readins are done. 
For each recorded temperature that is in the correct range (it could also be equal to 
the min or max values), your program should display the text "Nothing to report". But 
as soon as a temperature reaches an unsafe level your program must display the text "Alert!" 
and stop reading temperatures (although the device may continue sending temperature values).
*/

int main(void) {
    int minTemp, maxTemp, temperature, end;
    
    scanf("%d %d", &minTemp, &maxTemp);
    
    while (temperature != -999) {
        scanf("%d", &temperature);
        if (temperature >= minTemp && temperature <= maxTemp) {
            printf("Nothing to report\n");
        }else if (temperature == -999) {
            break;
        }else{
            printf("Alert!\n");
            break;
        }
    }
}