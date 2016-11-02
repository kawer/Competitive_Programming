//
//  main.cpp
//  Problema_1Final
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

#include <stdio.h>
#include <math.h>
int arr[1000005];

void calculate()
{
    double m;
    int i;
    
    arr[0] = 1;
    for(i = 1; i <= 1000000; i++){
        m = i;
        arr[i] = (arr[(int)(m-sqrt(m))]%1000000 + arr[(int)log(m)]%1000000 + arr[(int)(m*sin(m)*sin(m))]%1000000)%1000000;
    }
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int num;
        
        calculate();
        while(1)
        {
            scanf("%d", &num);
            if(num == -1) break;
            printf("%d\n", arr[num]);
        }
        return 0;
    }
   
