//
//  main.cpp
//  Div6
//
//  Created by Lazaro Kawer on 10/13/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    char num[1000];

    for(int i = 0; i < t; i++) {
    cin >> num;
    long long remainder = 0;
    for (int i = 0; num[i] != '\0'; ++i)
        remainder = (remainder * 10 + num[i] - '0') % 6;
    
    remainder == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    
    
    
    return 0;
}
