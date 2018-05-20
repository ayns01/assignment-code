//
//  main.c
//  problem2_6
//
//  Created by 酒井綾菜 on 2018-05-18.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

/*
    Write a function,which takes two numbers and returns all prime numbers between the two numbers.
*/

#include <stdio.h>

int printPrimeBetNum(int a, int b) {
    
    int r = 0;
    int flag = 0;
    
    printf("All prime numbers between %d and %d is\n", a, b);
    
    if(a < b) {
        
        int nxta = a + 1;
        
        for(int i=nxta; i<b; i++) {
            
            for(int j=2; j<nxta; j++) {
                
                    r = nxta % j;
                
                    if(r == 0){
                        
                        flag = 1;
                        break;
                        
                    }
                
            }
            
            if(flag != 1) {
                
                printf("%d\t", nxta);
                
            }
            
            nxta = nxta + 1;
            flag = 0;
            
        }
        
    }else if(a > b) {
        
        int nxtb = b + 1;
        int i, j;
        
        for(i=nxtb; i<a; i++) {
            
            for(j=2; j<nxtb; j++) {
                
                r = nxtb % j;
                
                if(r == 0){
                    
                    flag = 1;
                    break;
                    
                }
            }
            
            if(flag != 1) {
                
                printf("%d\t", nxtb);
                
            }
            
            nxtb = nxtb + 1;
            flag = 0;
            
        }
        
    }
    
    printf("\n");
    
    return 0;
    
}

int main(void) {
    
    int a = 0, b = 0;
    
    printf("it is called all prime numbers between the two numbers\n");
    
    printf("Enter positive integer\n");
    scanf("%d", &a);
    
    printf("Enter positive integer\n");
    scanf("%d", &b);
    
    printPrimeBetNum(a, b);
    
    return 0;
    
}
