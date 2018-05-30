//
//  main.c
//  problem2_7
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

/*
    Write a function ask for an numerical input from the user and reads the input from the user
    and will check the following:oWhether the number is odd or even.
    o Whether the number is dividend of 3.
    o Whether the number if dividend of 7.
    o Whether the number is a prime number.
 */

#include <stdio.h>

void isOddOrEven(int n) {
    
    if(n % 2 == 0) {
        
        printf("even\n");
        
    }else {
        
        printf("odd\n");
        
    }
    
}

void isDividendOf3(int n) {
    
    if(n % 3 == 0) {
        
        printf("dividend of 3\n");
        
    }
    
}

void isDividendOf7(int n) {
    
    if(n % 7 == 0) {
        
        printf("dividend of 7\n");
        
    }
        
}

int main(void) {
    
    int num = 0;
    
    printf("Enter number\n");
    scanf("%d", &num);
    
    printf("input number %d is\n", num);
    
    isOddOrEven(num);
    isDividendOf3(num);
    isDividendOf7(num);

    return 0;
}
