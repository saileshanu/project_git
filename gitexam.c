#include <stdio.h>  // Required for printf()

int main(void) {
    // Print the message to the console
    if (printf("Hello, World!\n") < 0) {  
        // Error handling in case printing fails
        fprintf(stderr, "Error: Unable to print message.\n");
        return 1; // Non-zero return indicates error
    }

    return 0; // Successful execution
}


