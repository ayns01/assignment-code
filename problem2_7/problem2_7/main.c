//
//  main.c
//  problem2_7
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int judgeOddOrEven(int n) {
    
    if(n % 2 == 0) {
        printf("even\n");
    }else {
        printf("odd\n");
    }
    return 0;
    
}

int judgeDividendOf3(int n) {
    
    if(n % 3 == 0) {
        printf("dividend of 3\n");
    }
    return 0;
    
}

int judgeDividendOf7(int n) {
    
    if(n % 7 == 0) {
        printf("dividend of 7\n");
    }
    return 0;
    
}

int main(void) {
    
    int n = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    
    printf("input number %d is\n", n);
    
    judgeOddOrEven(n);
    judgeDividendOf3(n);
    judgeDividendOf7(n);

    return 0;
}
