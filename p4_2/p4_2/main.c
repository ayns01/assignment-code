//
//  main.c
//  p4_2
//
//  Created by 酒井綾菜 on 2018-05-29.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;

int printPoint(struct point coord) {
    printf("The coordination of x and y is (%d %d)\n", coord.x, coord.y);
    return 0;
}

double average(struct point data[3], char axis) {
    int i;
    int sum = 0;
    int ave;
    
    for(i=0; i<3; i++) {
        if(axis == 'x') {
          sum = sum + data[i].x;
        }else if(axis == 'y') {
          sum = sum + data[i].y;
        }else {
            printf("please make sure to enter 'x' or 'y'\n");
        }
    }
    ave = sum /3;
    return ave;
}

struct point *vectorAverage(struct point data[3]) {
    double avgx = average(data, 'x');
    double avgy = average(data, 'y');
    struct point array[1];
    array->x = (int)avgx;
    array->y = (int)avgy;
    return array;
}

int main(int argc, const char * argv[]) {
    //point coord;
    point data[3];
    int i;
//    printf("Input x and y coodination\n");
//    scanf("%d %d", &coord.x, &coord.y);
//    printPoint(coord);
    
    printf("Enter char 'x' and 'y'\n");
    for(i=0;i<3;i++) {
       printf("Enter int value for data[%d].x and data[%d].y\n", i, i);
       scanf("%d %d", &data[i].x, &data[i].y);
    }
    struct point *avg = vectorAverage(data);
    printPoint(*avg);
    return 0;
}
