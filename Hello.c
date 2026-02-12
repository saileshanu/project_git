#include <stdio.h>  // Required for printf()
//#include <conio.h>

int main(void) {
    // Print the message to the console
    if (printf("Hello, World! my world\n") < 0) {  
        // Error handling in case printing fails
        fprintf(stderr, "Error: Unable to print message.\n");
        return 1; // Non-zero return indicates error
    }

    
//	getch();
	return 0; // Successful execution
}


