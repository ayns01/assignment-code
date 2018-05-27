//
//  main.c
//  p3_1
//
//  Created by 酒井綾菜 on 2018-05-25.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n[5] = {10, 20, 30, 40, 50};
    int j;
    
    for (j=0; j<5; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
    
    return 0;
}
