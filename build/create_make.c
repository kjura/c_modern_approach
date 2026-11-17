#include <unistd.h>
#include <stdio.h>
#include <linux/limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h> 



void lower_ch(char* s) {
    
   for (int i = 0; s[i] != '\0'; i++){
        s[i] = tolower(s[i]);
   } 

}

bool check_arg_double_hyphen(const char* s){
    if (s[0] == '\0'){
        return false;
    }

    if (s[0] == '-' && s[1] == '-'){

        return true;

    }

    return false;

}


bool check_arg_pattern(const char* s){

    
    if (s == NULL){
        return false;
    }


    int s_count = strlen(s);


    // check if 'chapter' or 'project' is in an arg 
    const char* chap = "--chapter_";
    const char* proj = "--project_";    

    const char* maybe_pattern_chap_substr = strstr(s, chap); 
    const char* maybe_pattern_proj_substr = strstr(s, proj); 
 
    if (maybe_pattern_chap_substr != NULL || maybe_pattern_proj_substr != NULL) {
        
        for (int i = 11; i < s_count; ++i){
            
            if (!isdigit(s[i])){

                printf("Wrong char encountered: %c\n", s[i]);
                return false;
            }

        }

        return true;

    }

    else {

        return false;

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

    if(check_arg_double_hyphen(chapter) && check_arg_double_hyphen(project)) {

        printf("OK: Parsing ok!\n");

    }

    else {

        printf("ERROR: Wrong args format\n");
        return -1;
        
    }


    if (check_arg_pattern(chapter) && check_arg_pattern(project)){

        printf("OK: All good! %s %s\n", chapter, project); 

    }

    else {
        printf("ERROR: Wrong args format\n");
    }


    


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
