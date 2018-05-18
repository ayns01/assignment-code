//
//  main.c
//  problem2_2
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int culc(int a, int b, int r) {
    
    int p, q, res;
    
    p = (int)a / (2 * r);
    q = (int)b / (2 * r);
    
    res = p * q;
    
    printf("Circles in the rectagle is %d\n", res);
    
    return 0;
    
}

int main(void) {
    
    int a = 0, b = 0, r = 0;
    printf("calculate how many circles can be entered inside a rectangle\n");
    printf("Enter height of rectangle\n");
    scanf("%d", &a);
    printf("Enter width of rectangle\n");
    scanf("%d", &b);
    printf("Enter radius of circles\n");
    scanf("%d", &r);
    
    culc(a, b, r);
    
    return 0;
}
