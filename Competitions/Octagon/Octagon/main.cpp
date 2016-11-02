//
//  main.cpp
//  Octagon
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    int N;
    float x;
    double area;
    for(int i= 0; i < 1000; i++){
        cin >> N;
        if(N == 0){
            break;
        }
            x = (((sqrt(2*N+1*sqrt(2)))/2));
            area = (2*(1+sqrt(2))* pow(x, 2));
            cout << setprecision(3) << fixed <<  area << endl;

        }
    return 0;
}

//cout << setprecision(4) << fixed <<  answer << '\n';
//printf("%d %d\n", cuadrados, rectangulos);     }
//while (scanf("%d", &N) != 0){
//    x = (N/2.41483);
//    area = (2*(1+sqrt(2))* pow(x, 2));
//    cout << setprecision(3) << fixed <<  area << '\n';
//    
//    }
