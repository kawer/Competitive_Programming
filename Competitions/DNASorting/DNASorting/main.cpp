//
//  main.cpp
//  DNASorting
//
//  Created by Lazaro Kawer on 10/24/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <algorithm>
#include <iostream>
using namespace std;

struct data{
    string seq;
    int n;
    
    bool operator <(const data& d) const {
        return (n < d.n) ||
        (n == d.n && seq < d.seq);
    }
    
    void calculate() {
        n = 0;
        for(int i = 0; i < seq.length(); i++) {
            for(int j =i + 1; j < seq.length(); j++) {
                if (seq[i] > seq[j])
                    n ++;
            }
        }
    }
};

data arr[105];

int main(){
    int n, m;
    cin >> n >> m;
    while(! (n == 0 && m == 0)) {
        for(int i = 0; i < m; i++) {
            cin >> arr[i].seq;
            arr[i].calculate();
        }
        sort(arr, arr + m);
        
        for(int i = 0; i < m; i++) {
            printf("%s\n", arr[i].seq.c_str());
        }
        cin >> n >> m;
        if (! (n == 0 && m == 0)) printf("\n");
    }
    return 0;
}

