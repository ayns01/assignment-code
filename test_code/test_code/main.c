//
//  main.c
//  test_code
//
//  Created by 酒井綾菜 on 2018-05-19.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 5, y = 7;
    y = ++x;
    printf("%d\n", y);
    
    
    int a = 6;
    if(a == 6) {
        int a = 5;
        {
            printf("%d\n", a);
        }
    }
    
    int sum;
    for(int i=0; i<5; i++) {
        sum = 0;
        sum = sum + i;
    }
    printf("%d", sum);
    
    return 0;
}
