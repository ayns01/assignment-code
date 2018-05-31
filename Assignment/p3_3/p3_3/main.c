//
//  main.c
//  p3_3
//
//  Created by 酒井綾菜 on 2018-05-25.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr1[100], arr2[100];
    int i, n;
    
    printf("Copying the elements one array into another array and return the new array:\n");
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d", &n);
    
    printf("Input %d elements in the array:\n", n);
    for(i=0;i<n;i++) {
        printf("element - %d:", i);
        scanf("%d", &arr1[i]);
    }
    
    for(i=0; i<n; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("The result of first array is\t");
    for(i=0; i<n; i++) {
        printf("%d", arr1[i]);
    }
    printf("\n");
    
    printf("The result of copying second array is\t");
    for(i=0; i<n; i++) {
        printf("%d", arr2[i]);
    }
    printf("\n");
    
    return 0;
}
