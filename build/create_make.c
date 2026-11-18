#include <unistd.h>
#include <stdio.h>
#include <linux/limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h> 



void lower_ch(char* s) {
    
   for (int i = 0; s[i] != '\0'; i++){
        s[i] = (char) tolower(s[i]);
   } 

}



int main(int argc, char **argv){

   if (argc != 3) {

        printf("ERROR: The program must take exactly 2 args, but it received %d args\n", argc - 1);
        printf("The args given:");
        for (int i = 1; i < argc; i++){
            printf(" %s", argv[i]);
        }
        printf("\nQuitting...\n");
        return -1;
   }

   else {
       printf("OK: Args loaded correctly!\n");
   }

    char* chapter = argv[1];
    char* project = argv[2];
    lower_ch(chapter); lower_ch(project); 


    const char* maybe_strstr_chapter = strstr(chapter, "--chapter_");
    const char* maybe_strstr_project = strstr(project, "--project_");

    if (maybe_strstr_chapter == NULL){
        printf("No --chapter_ substr found\n");
        return -1;
    }
    
    if (maybe_strstr_project == NULL){
        printf("No --project_ substr found\n");
        return -1;
    }


    
    if (!strcmp("--chapter_", maybe_strstr_chapter)){
        
        printf("--chapter_ == maybe_strstr_chapter\n");
        return -1;
    }



    if (!strcmp("--project_", maybe_strstr_project)){
        
        printf("--project_ == maybe_strstr_project\n");
        return -1;
    }

    
    if (maybe_strstr_chapter != NULL) {
        
       for (size_t i = 11; i < strlen(chapter); ++i){
           if (!isdigit(chapter[i])){
               printf("Wrong args\n");
               return -1;
            }
       }

       printf("All good for %s\n", chapter);

    }

    else {

        printf("Wrong args\n");
        return -1;
        
    }
    


    if (maybe_strstr_project != NULL) {
        
       for (size_t i = 11; i < strlen(project); ++i){
           if (!isdigit(project[i])){
               printf("Wrong args\n");
               return -1;
            }
       }

       printf("All good for %s\n", project);

    }

    else {

        printf("Wrong args\n");
        return -1;
        
    }

    // if (!strcmp("--chapter_", chapter)) {
    //
    //     printf("%s is equal to --chapter_\n", chapter);
    //
    // } 
    //
    // if (!strcmp("--project_", project)) {
    //
    //     printf("%s is equal to --chapter_\n", project);
    //
    // } 

    // char* program_name = "create_make.c";
    // char* symlinkpath = "build";
    // char actualpath[PATH_MAX];
    // char* ptr;
    // ptr = realpath(symlinkpath, actualpath);
    //
    //
    // if (ptr == NULL){
    //     printf("Nullptr\n");
    // }
    // else {
    //     printf("%s\n", ptr);
    // }


    // const int = 42; 

    
    // ./create_projects_make Chapter<NUMBER> project_<number>  
    


    //printf("%s\n", ptr);
    //printf("%s\n", actualpath);
    
    
    
    
    // wherever I run create_make.c
    // I want to get ~/../c_modern_approach/build/create_make.c

    // c_modern_approach/build/create_make.c
    // /home/jakub/Coding/c-projects/c_modern_approach/Chapter7/Exercises/exercise1.c 
    // /home/jakub/Coding/c-projects/c_modern_approach/Chapter7/Projects/project_1/(project_1.c and makefile)


    return 0;

}
