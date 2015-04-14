#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#ifdef __APPLE__
  #include <histedit.h>
#elif __linux
  #include <editline/history.h>
#endif

int main(int argc, char** argv){
  /*  Print Version and Exit Information */
  puts("Lispy version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");
  
  /* In a never ending loop */
  while (1) {

    /* Output prompt and get input */
    char* input = readline("bksay> ");
    
    /* Add input to history */
    add_history(input);
    
    /* Echo input back to user */
    printf("You say bk say %s\n", input);

    /* Free retrieved input */
    free(input);
  }
  
  return 0;
}
