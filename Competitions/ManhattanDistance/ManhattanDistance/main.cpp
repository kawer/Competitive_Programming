//
//  main.cpp
//  ManhattanDistance
//
//  Created by Lazaro Kawer on 10/14/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0;
    int x1=0, x2=0, y1=0, y2=0, xSum=0, ySum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       
        xSum = x2 - x1;
        ySum = y2 - y1;
        if(xSum < 0)
        {
            xSum *= -1;
        }
        if(ySum < 0)
        {
            ySum *= -1;
        }
        
        
        printf("%d\n",xSum+ySum);
        
    }
    return 0;
}
