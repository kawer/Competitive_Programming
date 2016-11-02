//
//  main.cpp
//  SumOfTriangleSides
//
//  Created by Lazaro Kawer on 10/21/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    long long a, b, max, min;
    
    std::cin >> a >> b;

    max = a + b -1;
    min = std::abs(a - b)+1;
    
    unsigned long long resMax;
    unsigned long long n;

    n = max;
    resMax = ((n*(n+1))/2);
    n = min -1;
    resMax -= ((n*(n+1))/2);
    
    
    std::cout << resMax << std::endl;
    
    return 0;
}
// min + b > a
// min > a - b
// min = abs(a - b + 1);
