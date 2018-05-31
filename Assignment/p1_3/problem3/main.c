//
//  main.c
//  problem3
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

void checkPrimeNum(int putNumber){
    
    int flag = 0;
    
    if(putNumber == 1){
        flag = 1;
    }
    
    for(int i=2; i<putNumber; i++){
        
        int r = putNumber % i;
        
        if(r == 0){
            flag = 1;
            break;
        }
        
    }
    if(flag == 0) {
        printf("%d is prime number", putNumber);
    }else {
        printf("%d is not prime number", putNumber);
    }
    
}

int main(void) {
    
    int n = 0;
    printf("Enter positive integer\n");
    scanf("%d", &n);
    
    checkPrimeNum(n);
    
    return 0;
    
}
