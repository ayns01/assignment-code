//
//  main.c
//  graph-theory
//
//  Created by 酒井綾菜 on 2018-05-24.
//  Copyright © 2018 Ayana Sakai. All rights reserved.
//

#include <stdio.h>
#include "string.h"

#define N 8

int main()
{
    int m[N+1][N+1] =
    {
        {0,0,0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,1,0},
        {0,1,0,0,1,1,0,0,0},
        {0,0,0,1,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,1,0},
        {0,0,1,0,1,0,1,0,0},
        {0,0,0,0,1,1,0,0,0}
    };
    
    
    
    int head = 0;
    int tail = 0;
    
    int v[N+1];
    
    int queue[100];
    
    for(int i = 0 ; i <= N ; i++)
    {
        v[i] = 0;
    }
    
    queue[tail] = 1;
    tail++;
    
    v[1] = 1;
    
    
    while(head != tail)
    {
        int i = queue[head];
        
        for( int t = 1 ; t <= N ; t++ )
        {
            if ( m[i][t] == 1  && v[t] == 0)
            {
                v[t] = 1;
                queue[tail] = t ;
                tail++;
                printf("%d から %d への道を探索...\n",i,t);
            }
        }
        
        head ++;
    }
    
    return 0;
    
}
