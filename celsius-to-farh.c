#include <stdio.h>

/*
    print Celcius-Farhenheit table
    for celsius = 0, 15, .... 150
*/
main
()

{
    printf("Celcius-To-Farhenheit Table\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temprature table
    upper = 150; // upper limit
    step = 15; // step size

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}
