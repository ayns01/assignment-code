//
//  main.c
//  problem2
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

void printStar(int numberOfStars) {
    
    for(int i=0; i<numberOfStars; i++) {
        printf("*");
    }
    printf("\n");
    
}

void printShape(int numberOfStars) {
    
    for (int i=numberOfStars; i>0; i--) {
        printStar(i);
    }
    
}

int main(void) {

    int c = 0;
    printf("Enter number of stars\n");
    scanf("%d", &c);
    
    printShape(c);
    
    return 0;
    
}
