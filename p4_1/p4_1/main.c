//
//  main.c
//  p4_1
//
//  Created by 酒井綾菜 on 2018-05-28.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int month;
    int day;
    int year;
};

struct Machine
{
    int name;
    char *memory;
};

struct Time
{
    int *day;
    int *month;
    int *year;
};

int main(int argc, const char * argv[]) {
    
    struct Date dates;
    struct Date *pdates;
    pdates = &dates;
    pdates->day = 10;
    
    struct Machine mpu641;
    struct Machine *pmpu641;
    pmpu641 = &mpu641;
    pmpu641->memory = "CPUtype";
    pmpu641->name = 10;
    
    struct Time p1;
    struct Time *times;
    struct Time *sample[10];
    times = &p1;
    times->day = (int *)malloc(sizeof(int));
    sample[2] = (struct Time *)malloc(sizeof(struct Time));
    sample[2]->month = (int *)malloc(sizeof(int));
    *(times->day) = 10;
    *(sample[2]->month) = 12;
    
    printf("Date day is %d\n", pdates->day);
    printf("Machine memory is %s\n", pmpu641->memory);
    printf("Machine name is %d\n", pmpu641->name);
    printf("Time day is %d\n", *(times->day));
    printf("Time month is %d\n", *(sample[2]->month));
    
    return 0;
}
