//
//  main.c
//  p3_6
//
//  Created by 酒井綾菜 on 2018-05-28.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int findNumber(int n, int array[], int value) {
    
    int i;
    
    for(i=0; i<n; i++) {
        if(value == array[i]) {
            return(i);
        }
    }
    return(-1);
    
}

int main(void) {
    
    int n, i, value;
    int array[50];
    int index;
    
    printf("How many elements do you want to put in an array?\n");
    scanf("%d", &n);
    
    printf("Input number in an array\n");
    for(i=0; i<n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Finds the number within an array\n");
    printf("Input the number you want to find in an array\n");
    scanf("%d", &value);
    
    index = findNumber(n, array, value);
    if(index == -1) {
        printf("The value %d was not found\n", value);
    }else {
        printf("The value %d was found at %d\n", value, index);
    }
    
    return 0;
}
