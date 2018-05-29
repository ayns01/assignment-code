//
//  main.c
//  problem5
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

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
