//
//  main.cpp
//  Excellence
//
//  Created by Lazaro Kawer on 10/12/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   
    long long n;
    long totalMiddle = 0;
    
    cin >> n;
    int s[n];
    int total[(n/2)];


    for(int i=0; i < n; i++) {
        cin >> s[i];
    }
    
    sort(s, s+n);
    
    int r = (n-1);

    for(int j = 0; j < n; j++) {
        if(!(j==r)){
        total[j] = s[j] + s[r];
            r --;
        }
    }
    
    sort(total, total + (n/2));
    
    cout << total[0] << endl;
         

    
    return 0;
}
