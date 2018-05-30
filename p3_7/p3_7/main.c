//
//  main.c
//  p3_7
//
//  Created by 酒井綾菜 on 2018-05-28.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int printElements(int array[5]) {
    int i;
    printf("The elements of the array: \t");
    for(i=0;i<5;i++) {
        printf("%d\t", array[i]);
    }
    return 0;
}

int calcSum(int array[5]) {
    int i;
    int sum = 0;
    for(i=0;i<5;i++) {
        sum = sum + array[i];
    }
    return sum;
}

int calcAvg(int array[5]) {
    int i;
    int sum = 0;
    int avg = 0;
    for(i=0;i<5;i++) {
        sum = sum + array[i];
    }
    avg = sum / 5;
    return avg;
}

int findMax(int array[5]) {
    int i;
    int max = 0;
    for(i=0;i<5;i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int findMin(int array[5]) {
    int i;
    int min = array[0];
    for(i=1;i<5;i++) {
        if(min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int main(int argc, const char * argv[]) {
    int i, sum, avg, max, min;
    int array[5];
    char ch;

    printf("Enter five numbers to store in an array\n");
    for(i=0;i<5;i++){
        scanf("%d", &array[i]);
    }
    
    printf("If you wanna play to :\n");
    printf("1. print the array, press 'p'\n");
    printf("2. print sum all of numbers, press 'c'\n");
    printf("3. print average of numbers, press 'v'\n");
    printf("4. print the minimum number, press 'm'\n");
    printf("5. print the maximum number, press 'x'\n");
    printf("6. Exit and terminate, press 'q'\n");
    printf("7. enter a new array(with same length), press 'n'\n");
    scanf("%c", &ch);
    
    printElements(array);
    sum = calcSum(array);
    printf("\nSum of the elements: %d\n", sum);
    avg = calcAvg(array);
    printf("Average of the elements: %d\n", avg);
    max = findMax(array);
    printf("The biggest number in the elements: %d\n", max);
    min = findMin(array);
    printf("The minimum number in the elements: %d\n", min);
    return 0;
}
