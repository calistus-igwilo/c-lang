/* 
Write a program to read the data for the customer, calculate the interest and 
service charge, and print the customer’s name, average balance, interest, and 
service charge.

interest = 6% of average balance
service charge = 50 cents per transaction

*/

#include <stdio.h>
#include <string.h>

int main(){

char name[50], acctNum[20];
double aveBalance, interest, servCharge;
int transactions;



printf("Enter customer's name: ");
gets(name);


printf("Enter account number: ");
gets(acctNum);

printf("Enter the average balance: ");
scanf("%lf", &aveBalance);

printf("Enter the number of transactions: ");
scanf("%d", &transactions);

interest = 6.0/100 * aveBalance;
servCharge = 0.5 * transactions;

printf("Name: %s\n", name);
printf("Average balance: $%3.2f\n", aveBalance);
printf("Interest: $%3.2f\n", interest);
printf("Service Charge: $%3.2f\n", servCharge);

}