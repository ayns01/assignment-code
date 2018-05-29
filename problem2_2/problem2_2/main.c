//
//  main.c
//  problem2_2
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

/*
    Write a function which takes 3 inputs, a, b and r and calculate how many circles
    with radius r can be entered inside a rectangle with sides a and b.
*/
 
#include <stdio.h>

int calc(int h, int w, int r) {
    
    int a, b, res;
    
    a = (int)h / (2 * r);
    b = (int)w / (2 * r);
    
    res = a * b;
    
    printf("Circles in the rectagle is %d\n", res);
    
    return 0;
    
}

int main(void) {
    
    int h = 0, w = 0, r = 0;
    printf("The calculation of how many circles can be entered inside a rectangle\n");
    printf("Enter height of rectangle\n");
    scanf("%d", &h);
    printf("Enter width of rectangle\n");
    scanf("%d", &w);
    printf("Enter radius of circles\n");
    scanf("%d", &r);
    
    calc(h, w, r);
    
    return 0;
    
}
