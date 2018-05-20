//
//  main.c
//  problem2_1
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

/*
    Write a function called “factorial”which take a number and calculate the factorial of the number.
    For instanceif the user enters 5, it should calculate5*4*3*2*1
    The factorial is shown by ! symbol. For instance 5! = 5*4*3*2*1
    -Using the factorial function calculate the combination function.
    The combination number take two numbers like a and b and returns the result of the following:
    a!/ ((a+b)!*b!
 */

#include <stdio.h>

long calcFactorial1(int n) {
    
    long result = 1;
    
    for(int i=n; i>=1; i--) {
            
        result = result * i;
            
    }
    
    return result;
    
}

long calcFactorial2(int a, int b) {
    
    long result = 1;
    int total = a + b;
    
    for(int i=total; i>=1; i--) {
        
        result = result * i;
        
    }
    
    return result;
    
}

void printFactorial(int n) {
    
    long result = calcFactorial1(n);
    
    if(n < 0) {
        
        printf("it can not be calculated.\n");
        
    }else if(n == 0) {
        
        printf("The factorial of 0 is 1\n");
        
    }else {
        
        printf("The factorial of %d is %ld\n", n, result);
        
    }
    
    
}

long calc(int a, int b) {
    
    long factA = calcFactorial1(a);
    long factB = calcFactorial1(b);
    long factSum = calcFactorial2(a, b);
    float result = 1;
    
    result  = (float)factA / (factSum * factB);
    
    if(a <=0 || b <= 0) {
        
        printf("it can not be calculated.\n");
        
    }else {
    
        printf("The result of calclation is %f\n", result);
        
    }
    
    return 0;
    
}

int main(void) {
    
    int num = 0;
    printf("Culclation of factorial\n");
    printf("Enter positive integer\n");
    scanf("%d", &num);
    printFactorial(num);
    
    int num1 = 0, num2 = 0;
    printf("Enter two positive integer to culculate a!/((a+b)!*b!)\n");
    scanf("%d%d", &num1, &num2);
    calc(num1, num2);
    
    return 0;
    
}
