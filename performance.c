#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE 100000

// Function to get high-resolution time in milliseconds
double performance_now() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (double)ts.tv_sec * 1000.0 + (double)ts.tv_nsec / 1000000.0; // Convert to milliseconds
}

void findNemo(char* array[], int size) {
    double t0 = performance_now();
    
    for(int i = 0; i < size; i++) {
        if(strcmp(array[i], "nemo") == 0) {
            printf("Found Nemo!\n");
        }
    }
    
    double t1 = performance_now();
    printf("Call to findNemo took %.3f ms\n", t1 - t0);
}

int main() {
    // Create an array and fill it with "nemo"
    char* large[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
        large[i] = "nemo";
    }

    // Call findNemo with the array
    findNemo(large, ARRAY_SIZE);

    return 0;
}
