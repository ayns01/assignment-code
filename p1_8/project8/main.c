//
//  main.c
//  project8
//
//  Created by 酒井綾菜 on 2018-05-17.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1 = 0;
    int num2 = 0;
    int q;
    printf("Enter positive integer\n");
    scanf("%d", &num1);
    printf("Enter positive integer\n");
    scanf("%d", &num2);
    
    q = (int)num1/num2;
    
    printf("The quotient is %d\n", q);
    return 0;
}
