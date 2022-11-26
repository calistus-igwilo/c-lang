#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *today) {
    scanf("%d %d %d", &(*today).year, &(*today).month, &(*today).day);
}

void printDate(struct date today) {
    printf("%02d/%02d/%04d", today.month, today.day, today.year);
}

