//
//  main.c
//  p4_3
//
//  Created by 酒井綾菜 on 2018-05-30.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    typedef struct Item
    {
        int age;
        struct Item *next;
    }Item;
    
    int i, n, j;
    int ages[10];
    Item *p, *start, sValue;
    p = &sValue;
    
    printf("Enter age that you wanna put in Linked List\n");
    for(j=0; j<10; j++){
        scanf("%d", &n);
        ages[j] = n;
    }
    
    for(i=0; i<10; i++) {
        if(i == 0) {
            p = malloc(sizeof(Item));
            start = p;
        }else {
            p->next = malloc(sizeof(Item));
            p = p->next;
        }
        p->age = ages[i];
        p->next = NULL;
    }
    
    printf("Shows all of age using Linked List: \n");
    p = start;
    while (p != NULL) {
        printf("%d\t", p->age);
        p = p->next;
    }
    printf("\n");
    
    return 0;
}
