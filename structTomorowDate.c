#include <stdio.h>

/*
Implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". 
The function advanceDay() should take as input a date (stored in a struct date) and return the date 
of the following day. You do not have to take into account leap years (although you may if you wish to). 
That is, it is okay for your function to always return March 1 as the day following February 28, no 
matter the year.

You are provided with a main function as well as the function prototypes for the readDate(), printDate(),
 and advanceDate() functions. Simply add your function definitions underneath the main() function. 
 For the readDate() and printDate() functions you may simply copy and paste the code you developed in the 
 previous task.

*/

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *today) {
    scanf("%d %d %d", &(*today).year, &(*today).month, &(*today).day);
}

void printDate(struct date today) {
    printf("%02d/%02d/%04d\n", today.month, today.day, today.year);
}

struct date advanceDay(struct date today) {
    int advance, numDays;
    struct date tomorrow;
    
    if (today.month == 2) {
        numDays = 28; 
    }else if (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11) {
        numDays = 30;
    }else {
        numDays = 31;
    }
    
    advance = today.day + 1;
    tomorrow.day =  advance % numDays;
    tomorrow.month = (advance/numDays) + today.month % 12;
    tomorrow.year = (advance/numDays + today.month) % 12 + today.year;
    
    return tomorrow ; 
}

