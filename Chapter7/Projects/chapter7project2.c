#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o sand sand.c


int main(void)
{
  int i, n;
  int counter = 25;
  //char ch;
  
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar();
  for (i = 1; i <= n; i++){
    
    if(i == counter){
        
        printf("Press Enter to continue ...");
        getchar();
        counter += 25;
    }

    printf("%10d%10d\n", i, i * i);

  }

  return 0;
}
