//
//  main.c
//  p3_2
//
//  Created by 酒井綾菜 on 2018-05-25.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>

void printOriginal(char word[6]) {
    
    printf("Orignial order is %s\n", word);
    
}

void printReverse(char word[6]) {
    
    int i;
    
    printf("Reverse order is\t");
    for(i=5; i>=0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    
}

int main(int argc, const char * argv[]) {
    
    char word[6];
    
    scanf("%s", word);
    
    printOriginal(word);
    printReverse(word);
    
    return 0;
}
