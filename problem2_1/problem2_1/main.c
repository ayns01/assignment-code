//
//  main.c
//  problem2_1
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

long factorial(int n) {
    
    int res = 1;
    
    for(int i=n; i>=1; i--) {
        res = res * n;
        n = n - 1;
    }
    
    printf("factorial is %d\n", res);
    
    return 0;
    
}



int main(void) {
    
    int n = 0;
    printf("Culclate factorial\n");
    printf("Enter integer\n");
    scanf("%d", &n);
    
    factorial(n);
    
    return 0;
    
}
