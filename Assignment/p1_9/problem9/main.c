//
//  main.c
//  problem9
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int culcPower(int num, int power) {
    
    int res = 1;
    
    for(int i=0; i<power; i++) {
        res = res * num;
    }
    
    printf("A to the power of B is %d\n", res);
    
    return 0;
    
}

int main(void) {
    
    int n = 0;
    int p = 0;
    printf("Enter number A\n");
    scanf("%d", &n);
    printf("Enter power B\n");
    scanf("%d", &p);
    
    culcPower(n, p);
    
    return 0;
}
