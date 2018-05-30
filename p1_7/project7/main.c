//
//  main.c
//  project7
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int findPrimeNum(int num) {
    
    int a;
    int r;
    a = num + 1;
    
    if(a == 2) {
        printf("The prime number that is bigger than input number is %d\n", a);
    }else if(a > 2){
        
        for(int i=2; i<a; i++) {
            r = a % i;
            if(r == 0) {
                a = a + 1;
                i = 2;
            }
        }
        printf("The prime number that is bigger than input number is %d\n", a);
        
    }
    
    return 0;
    
}

int main(void) {
    
    int n = 0;
    printf("Enter positive integer\n");
    scanf("%d", &n);
    
    findPrimeNum(n);
    
    return 0;
    
}
