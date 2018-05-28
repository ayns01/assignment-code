//
//  main.c
//  p4_1
//
//  Created by 酒井綾菜 on 2018-05-28.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

// define a structure called date
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
    
    struct Date detail;
    struct Date *dates;
    dates = &detail;
    dates->day = 10;
    
    struct Machine value;
    struct Machine *mpu641;
    mpu641 = &value;
    mpu641->memory = "CPUtype";
    mpu641->name = 10;
    
    struct Time *times;
    struct Time dtl;
    times = &dtl;
    times->&day = 10;
    
    
    return 0;
}
