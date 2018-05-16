/*
  ============================================================================
  Name        : problem5.c
  Author      : ayana
  Version     :
  Copyright   : Your copyright notice
  Description : Hello World in C, Ansi-style
  ============================================================================
  */

#include <stdio.h>
#include <stdlib.h>

void sumDigit(int number){
    
    int sum = 0;
    int r = 0;
    
    while(number != 0){
        r = number%10;
        sum = sum + r;
        number = (int)number/10;
    };
    //sum = sum + number;
    printf("sum of the digit of number is %d", sum);
    
}

int main(void) {
    
    int n = 0;
    printf("Enter positive integer: ");
    scanf("%d", &n);
    
    sumDigit(n);
    
}

