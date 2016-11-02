//
//  main.cpp
//  SimpleCalc
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N, cuadrados, rectangulos;
    
    while (scanf("%d", &N) != EOF){
        
        cuadrados = (N*(N + 1)*(2*N + 1))/6; 
        rectangulos = (N*(N+1)*N*(N+1))/4;
        
        printf("%d %d\n", cuadrados, rectangulos);     }
    return 0;
}
