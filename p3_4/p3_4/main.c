//
//  main.c
//  p3_4
//
//  Created by 酒井綾菜 on 2018-05-27.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    float array[100], max, min, diff;
    int n, i;
    
    printf("finds the maximum and minimum elements in the array:\n");
    printf("Input the number of elements to be stored in the array of float:\n");
    scanf("%d", &n);
    
    printf("Input %d elements in the array:\n", n);
    
    for(i=0;i<n;i++) {
        printf("element - %d:", i);
        scanf("%f", &array[i]);
    }
    
    max = array[0];
    
    for(i=1; i<n; i++) {
        if(array[i] > max) {
             max = array[i];
        }
    }
    
    printf("Maximum element is %.2f\n", max);
    
    min = array[0];
    
    for(i=1; i<n; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    
    printf("Minimum element is %.2f\n", min);
    
    diff = max - min;
    
    printf("The difference between the max and min : %.2f\n", diff);
    
    
    return 0;
}
