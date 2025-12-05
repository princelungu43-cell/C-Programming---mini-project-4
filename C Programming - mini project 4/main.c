//
//  main.c
//  C Programming - mini project 4

//  Created by PRINCE LUNGU (GROUP B)
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int celsius;
    int fahrenheit;
    int finalCel;
    int finalFah;
    
    printf("ENTER TEMPERETURE IN CELSIUS: ");
    scanf("%d", &celsius);
    
    finalFah = celsius * 9/5 + 32;
    
    printf("in Fahrenheit : %d\n", finalFah);
    
    printf("ENTER TEMPERATURE IN FAHRENHEIT: ");
    scanf("%d\n", &fahrenheit);
    
    finalCel = fahrenheit - 32 * 5/9;
    printf("IN CELCIUS : %d\n", finalCel);
    return 0;
}
