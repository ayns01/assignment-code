//
//  main.c
//  problem2_5
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int swap(int *a, int *b) {
    
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    return 0;
    
}

int main(void) {
    // call by Reference...
    int n1, n2;
    printf("Enter two numbers to swap\n");
    scanf("%d%d", &n1, &n2);
    
    swap(&n1, &n2);
    
    printf("Swapped number is %d%d\n",n1, n2);
    
    return 0;
}
