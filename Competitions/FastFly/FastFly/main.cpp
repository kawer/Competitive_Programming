//
//  main.cpp
//  FastFly
//
//  Created by Lazaro Kawer on 10/5/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int t;
    double d, v1, v2, m;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
    cin >> d >> v1 >> v2 >> m;
    
    float distancia;
    distancia = (d/(v1+v2))*m;
        
    printf("%.2f\n",distancia);
    }
    
    return 0;
}
