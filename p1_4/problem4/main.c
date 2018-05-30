//
//  main.c
//  problem4
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int n = 0,sum = 0;
    
    do{
        sum = sum + n;
        printf("Enter number. When you enter 0, it ends\n");
        scanf("%d", &n);
    }
    while (n > 0);
    
    printf("Sum is %d\n", sum);
    
    return 0;
}
