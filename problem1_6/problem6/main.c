//
//  main.c
//  problem6
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    
    printf("num1 is %d num2 is %d\n", a, b);
    
    return 0;
}

int main(void) {
    int num1 = 0;
    int num2 = 0;
    printf("Swap 2 number\n");
    printf("Enter number\n");
    scanf("%d", &num1);
    printf("Enter number\n");
    scanf("%d", &num2);
    
    swap(num1, num2);
    
    return 0;
}
