/**
 * Author: Hifza Nazir
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax here
  // there i will you the nested if else statement by taking the data from tables
  if(agi>=0 && agi<=19900)
  {
    if(agi>=4000 && agi<=20000 && numChildren==1)
    {
      childCredit = 0;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (10.0/100);
    totalTax = tax * (agi-0);
    tax = tax - childCredit;
  }
   else if(agi>=19901 && agi<=81050)
  {
    if(agi>=20000 && agi<=120000 && numChildren==0)
    {
      childCredit = 2002.00;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (12.0/100);
    totalTax = tax * (agi-19900);
    tax = tax - childCredit;
  }
   else if(agi>=81051 && agi<=172750)
  {
    if(agi>=120000 && agi<=150000 && numChildren==3)
    {
      childCredit = 11897.00;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (22.0/100);
    totalTax = tax * (agi-81050);
    tax = tax - childCredit;
  }
   else if(agi>=172751 && agi<=329850)
  {
    if(agi>=150000 && agi<=250000 && numChildren==4)
    {
      childCredit = 16497.00;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (24.0/100);
    totalTax = tax * (agi-172750);
    tax = tax - childCredit;
  }
  else if(agi>=329851 && agi<=418850)
  {
    if(agi>=250000 && agi<=500000 && numChildren==0)
    {
      childCredit = 48042.00;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (32.0/100);
    totalTax = tax * (agi-329850);
    tax = tax - childCredit;
  }
  else if(agi>=418851 && agi<=628300)
  {
    if(agi<=150000 && numChildren==5)
    {
      childCredit = 114088.50;
    }
    else 
    {
      childCredit = numChildren*2000;
    }
    tax = agi * (35.0/100);
    totalTax = tax * (agi-418850);
    tax = tax - childCredit;
  }

  

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
