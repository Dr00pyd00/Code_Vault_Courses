

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/wait.h>

int main() {

    int id = fork();

    int n;

    if (id == 0) {
        // C
        n = 1;
    } else {    
        // P
        n = 6;
        wait(NULL);  // attend vraiment que le child finisse !
    }

    for (int i = 0; i < 5; i++ ) {
        printf("%d - ", n + i);

        // forcer le buffer  => fflush(stdout) : "rincer / nettoyer"  : precise quel buffer.
        fflush(stdout);
    }

    if (id != 0) printf("\n\n\n");





    return 0;
}


