#include <stdio.h>

int main(void)
{
  
  int month, day, year;

  // Conversion specification for printf() function: %m.pX or %-m.pX
  // m and p are integer constants, X is a letter.
  // m - minimal field width , along with "-" can cause left justification
  // ########################################
  // p - precision, X - conversion specifier

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date %d%.2d%.2d\n", year, month, day);

  return 0;
}