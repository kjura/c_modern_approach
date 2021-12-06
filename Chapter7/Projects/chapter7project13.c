// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter7project13 chapter7project13.c

//#################################################################################################################
// TO DO: Make sure that white-spaces before the first character are not taken into account when summing characters.
//#################################################################################################################
/*

Write a program that calculates the average word length for a sentence:

Example:

Enter a sentence: It was deja vu all over again.
Average word length: 3.4

Explanation:

It - 2 letters, was - 3 letters, deja - 4 letters, vu - 2 letters, all - 3 letters, over - 4 letters, again - 6 letters

All words in one sentence - 7

Average = 24 / 7 = 3,428571429 ~ 3,4


For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.

*/


int main(void)
{

 
  //float avg_len;

  int space_counter = 0;
  int no_space_chars = 0;
  int total = 0;
  

  printf("Enter a sentence: ");
  char ch = getchar();
  while(ch != '\n'){

    total += 1; 
    //printf("Counter_no_spaces is: %d\n", counter_no_spaces);
      

    if( ch == ' '){

        space_counter += 1;
        
        //printf("Words_counter: %d\n", words_counter);

    }
    else{

        no_space_chars += 1;
      
    }

    //printf("getchar() is now: %c\n", ch);
    ch = getchar();



  }

  printf("Number of spaces in a sentence: %d\n", space_counter);
  printf("Number of characters counter without spaces: %d\n", no_space_chars);
  printf("Total number of characters read by getchar(): %d\n", total);
  printf("Average word length: %.1f\n", no_space_chars / (space_counter + 1.0f));

  return 0;
}

