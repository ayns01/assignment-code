//
//  main.c
//  problem2_3
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int BetweenNumExcludeInput(int a, int b) {
    
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

int BetweenNum(int a, int b) {
    
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

int averageNum(int a, int b) {
    
    int average;
    average = (a + b) / 2;
    
    printf("Average of the numbers is %d\n", average);
    
    return 0;
    
}



int main(void) {
    
    int a = 0, b = 0;
    printf("Enter integer\n");
    scanf("%d", &a);
    printf("Enter integer\n");
    scanf("%d", &b);
    
    BetweenNumExcludeInput(a, b);
    BetweenNum(a, b);
    averageNum(a, b);
    
    return 0;
}
