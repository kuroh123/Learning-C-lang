#include <stdio.h>

/*
    print Farhenheit-Celcius table
    for fahr = 0, 20, .... 300
*/
main
()

{
    printf("Farhenheit-To-Celcius Table\n");
    float fahr, celsius;
    int f_lower, f_upper, f_step;

    f_lower = 0; // lower limit of temprature table
    f_upper = 300; // upper limit
    f_step = 20; // step size

    fahr = f_lower;
    while (fahr <= f_upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + f_step;
    }
    
}
