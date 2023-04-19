#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {

  int age;

  for(int i = 1; i < 5; i++) {
     
  pid_t a = fork();


  if(a == 0) {
     
   printf("What is your name?\n");
   scanf("%d",&age);
   printf("your name is %d \n\n",&age);
 
 }

    else if (a > 0) {
     
        while(wait(NULL) > 0);
        
        printf("JOB IS DONE.\n");
     
        exit(1);
 }
 
 }
 exit (EXIT_SUCCESS);
}
