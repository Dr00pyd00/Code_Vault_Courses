
// Pour fork sur LINUX :
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    // le pid du child est TOUJOURS 0
    pid_t pid = fork();

    //printf("Hello world from pid = %d\n", pid);

    if (pid == 0 ) {
        // child proc:
        printf("hello form C\n");
    }
    else {
        // parent proc:
        printf("hello from P\n");
    }



    return 0;
}




