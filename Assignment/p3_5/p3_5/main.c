//
//  main.c
//  p3_5
//
//  Created by 酒井綾菜 on 2018-05-27.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, i, j, k;
    int array[50];
    int odd[50];
    int even[50];
    
    j = 0;
    k = 0;
    
    printf("Counts and prints odd and even integers\n");
    printf("How many elements do you want to put in array?\n");
    scanf("%d", &n);
    
    printf("Input %d elements in the array:\n", n);
    for(i=0;i<n;i++) {
        printf("element - %d:", i);
        scanf("%d", &array[i]);
    }
    
    for(i=0; i<n; i++) {
        if(array[i] % 2 == 0) {
            even[j] = array[i];
            j++;
        }else {
            odd[k] = array[i];
            k++;
        }
    }
    
    printf("Even numbers: ");
    for(i=0; i<j; i++) {
        printf("%d\t", even[i]);
    }
    
    printf("\nOdd numbers: ");
    for(i=0; i<k; i++) {
        printf("%d\t", odd[i]);
    }
    
    printf("\n");
    
    return 0;
}
