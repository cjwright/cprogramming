#include <stdio.h>

int main(){

    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300; 
    step = 50;

    fahr = lower;
    while (fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;    
    }


}