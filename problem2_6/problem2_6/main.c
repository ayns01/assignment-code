//
//  main.c
//  problem2_6
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int printPrimeNumBetweenNum(int a, int b) {
    
    int r = 0;
    int flag = 0;
    
    printf("All prime numbers between the two numbers is\n");
    
    if(a < b) {
        
        int na = a + 1;
        
        for(int i=na; i<b; i++) {
            
            for(int j=2; j<na; j++) {
                    r = na % j;
                    if(r == 0){
                        flag = 1;
                        break;
                    }
            }
            if(flag != 1) {
                printf("%d\t", na);
            }
            na = na + 1;
            flag = 0;
        }
        
    }else if(a > b) {
        
        int nb = b + 1;
        
        for(int i=nb; i<a; i++) {
            for(int j=2; j<nb; j++) {
                r = nb % j;
                if(r == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag != 1) {
                printf("%d\t", nb);
            }
            nb = nb + 1;
            flag = 0;
        }
        
    }
    
    printf("\n");
    return 0;
    
}

int main(void) {
    
    int a = 0, b = 0;
    
    printf("Enter positive integer\n");
    scanf("%d", &a);
    printf("Enter positive integer\n");
    scanf("%d", &b);
    
    printPrimeNumBetweenNum(a, b);
    
    return 0;
    
}
