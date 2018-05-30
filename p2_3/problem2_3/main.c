//
//  main.c
//  problem2_3
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

/*
    Write a function, which takes two integer numbers and
    o Returns the number of numbers between the two input numbers (excluding the input numbers) and
    o Also prints all numbers between these two input numbers. For instance if the user enters 10 and 15 it is
    going to print:The numbers between 10 and 15 are 11 12 13 14 and there are 4 numbers between 10 and 15.
    o Also prints the average of the numbers between the two input numbers.
*/

#include <stdio.h>

int BetNumExcInput(int a, int b) {
    
    printf("The numbers between input numbers excluding the input numbers is\n");
    
    if(a < b) {
        
        for(int i=a+1; i<b; i++) {
            
            printf("%d\t", i);
            
        }
        
    }else if(a > b) {
        
        for(int i=b+1; i<a; i++) {
            
            printf("%d\t", i);
            
        }
        
    }
    
    return 0;
    
}

int BetNum(int a, int b) {
    
    printf("The numbers between input numbers is\n");
    
    if(a < b) {
        
        for(int i=a; i<=b; i++) {
            
            printf("%d\t", i);
            
        }
        
    }else if(a > b) {
        
        for(int i=b; i<=a; i++) {
            
            printf("%d\t", i);
            
        }
        
    }
    
    return 0;
    
}

int avgNum(int a, int b) {
    
    int avg;
    
    avg = (a + b) / 2;
    
    printf("Average of the numbers is %d\n", avg);
    
    return 0;
    
}



int main(void) {
    
    int a = 0, b = 0;
    printf("Enter integer\n");
    scanf("%d", &a);
    printf("Enter integer\n");
    scanf("%d", &b);
    
    BetNumExcInput(a, b);
    BetNum(a, b);
    avgNum(a, b);
    
    return 0;
    
}
