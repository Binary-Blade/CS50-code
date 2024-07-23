#include <stdio.h>
#include <stdlib.h>

void calcTips(double bill, double tax, int tipPercentage);

int main(int argc, char *argv[]) {
  if (argc == 4) {
    double bill = atof(argv[1]);
    double tax = atof(argv[2]);
    int tipPercentage = atoi(argv[3]);
    calcTips(bill, tax, tipPercentage);
  } else {
    printf("Usage: You have to write bill taxPercentage tipPercentage \n");
    return 1;
  }
  return 0;
}

void calcTips(double bill, double tax, int tipPercentage) {
  double taxAmount = bill * tax / 100;
  double afterTax = bill + taxAmount;
  double tipAmount = afterTax * tipPercentage / 100;
  double totalDue = afterTax + tipAmount;
  double halfAmount = totalDue / 2;

  printf("Total bill before tax: %.2f\n", bill);
  printf("Total bill after tax: %.2f\n", afterTax);
  printf("Tip amount: %.2f\n", tipAmount);
  printf("Total amount payable: %.2f\n", totalDue);
  printf("You will owe $%.2f\n", halfAmount);
}
