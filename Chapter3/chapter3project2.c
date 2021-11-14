#include <stdio.h>

// %m.pX or %-m.pX



int main(void)
{
  int item_number, month, day, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("\n");
  printf("Item \t Unit \t\t Purchase \n \t Price \t\t Date \n%d \t $%7.2f \t %.2d/%.2d/%d\n", item_number, unit_price, month, day, year);



  return 0;
}