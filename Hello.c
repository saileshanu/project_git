#include <stdio.h>  // Required for printf()
//#include <conio.h>

int main(void) {
    int i =0;
    // Print the message to the console
    if (printf("Hello, World! my world printed   byr git example \nlo\n") < 0) {  
        // Error handling in case printing fails
        fprintf(stderr, "Error: Unable to print message.\n");
        return 1; // Non-zero return indicates error
    }

    printf( " increasing the number with out  %d \n", i);
        for(; i < 10; i++)
        printf( " increasing the number with out  %d \n", i);
         
getchar();
	return 0; // Successful execution
}


