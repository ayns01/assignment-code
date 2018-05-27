//
//  main.c
//  test_code
//
//  Created by 酒井綾菜 on 2018-05-19.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct Employee
{
    int no;
    char name[51];
    int salary;
};

int main(int argc, char *argv[])
{
    struct Employee e[] = {
        {100, "Taro", 200000},
        {100, "Jiro", 300000},
        {100, "Saburo", 170000},
        {100, "Hanako", 500000},
    };
    
    struct Employee *e_ptr;
    
    e_ptr = e;
    
    while(1) {
        if(e_ptr->no == 0) {
            break;
        }
        printf("%d,%s,%d\n", e_ptr->no, e_ptr->name, e_ptr->salary);
        
        e_ptr++;
        
    }
    
    return 0;
}
    

