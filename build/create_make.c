#include <unistd.h>
#include <stdio.h>
#include <linux/limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
    
    
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

    printf("OK: All good! %s %s\n", chapter, project); 
    


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
