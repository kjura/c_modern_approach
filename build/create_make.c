#include <stddef.h>
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

// /home/jakub/Coding/c-projects/c_modern_approach/build

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



    // 1. Check if the chapter/project_12 exists -> YES = NOOP, NO = CREATE
    //      1.a Check if Chapter exists
    //      1.b Check if Project exists
    // 2. CREATE PROJECT


    // [...]/build/create_make.c


    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("OK: Current working dir: %s\n", cwd);
    } else {
        perror("ERROR: getcwd() error");
        return -1;
    }
        
    // Linux only probably?
    const char* correct_project_path_tail = "/c_modern_approach";
    size_t slash_index = 0;
    unsigned short slash_existence = 0;
    for (size_t i = strlen(cwd) - 1; i > 0; --i){
        
        if (cwd[i] == '/'){
            slash_existence = 1;
            slash_index = i;
            break;
        }

    }

    if (!slash_existence){
        
        printf("Could not find '/' character in the path tail\n");
        return -1;
    }

    else {

        const char* c_cwd = &cwd[slash_index];
        while (*c_cwd  != '\0' && *correct_project_path_tail != '\0') {
            if (*c_cwd != *correct_project_path_tail){
    
                printf("ERROR: create_make.c must be run from the project directory e.g ~.../c_modern_approach\n");
                return -1;
    
            }
            ++c_cwd; ++correct_project_path_tail;
        }

    }



    // char dst[strlen(correct_project_path_tail) + 1]; // + 1 for the null term
    // const char* maybe_correct_project_path = strcpy(, correct_project_path_tail);
    


    // char* symlinkpath = "/build/";
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
