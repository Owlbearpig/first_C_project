#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

double explicit_reflectance(double a, double b){
    return (a+b)/2;
}

double a[10];

int main() {
    printf("Hello, World!\n");

    float startTime = (float) clock() / CLOCKS_PER_SEC;
    //double huge_number = cos(2)*cos(2)+sin(2)*sin(2);
    float timeElapsed = ((float)clock() / CLOCKS_PER_SEC) - startTime;

    printf("Hello %f \n \a", a[2]);


    return 0;
}
