//
//  main.c
//  problem1
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int culc(int a, int b, char c) {
    
    int res = 0;
    
    if(c == '+') {
        res = addition(a, b);
    } else if(c == '-') {
        res = subtraction(a, b);
    } else if(c == '*') {
        res = multiplication(a, b);
    } else if (c == '/') {
        if(a != 0 && b == 0) {
            printf("error");
        }else {
        res = division(a, b);
        }
    }
    
    printf("result is %d\n", res);
    
    return 0;
    
}

int main(void) {
    
    int num1 = 0, num2 = 0;
    char sign;
    printf("Enter two number\n");
    scanf("%d", &num1);
    printf("Enter number2\n");
    scanf("%d", &num2);
    printf("Enter sign\n");
    scanf(" %c", &sign);
    
    culc(num1, num2, sign);
    
    return 0;
}
