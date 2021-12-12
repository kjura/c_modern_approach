#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o sand sand.c


int main(void)
{
  

  char ch;
  int vowel_counter = 0;
  int i = 1;
  // a e i o u -> 1.E 2.A 3. O 4.I 5. U Descending distribution of letters in English language.

  printf("Enter a sentence: ");
  while ( (ch = getchar()) != '\n'){

    //printf("In this iteration number: %d char is %c\n", i, ch);

    if(ch == 'E' || ch == 'e'){
        //printf("I found the E/e!\n");
        vowel_counter += 1;
        continue;
    }

    if(ch == 'A' || ch == 'a'){
        //printf("I found the A/a!\n");
        vowel_counter += 1;
        continue; 
    }

    if(ch == 'O' || ch == 'o'){
        //printf("I found the O/o!\n");
        vowel_counter += 1;
        continue; 
    }
      
    if(ch == 'I' || ch == 'i'){
        //printf("I found the I/i!\n");
        vowel_counter += 1;
        continue;
    }

    if(ch == 'U' || ch == 'u'){
        //printf("I found the U/u!\n");
        vowel_counter += 1;
        continue; 
    }
    
    
    //printf("\n");
    i += 1;
     
  }
  
  printf("Your sentence contains %d vowels.\n", vowel_counter);

  return 0;
}
