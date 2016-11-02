//
//  main.cpp
//  Naebbirac
//
//  Created by Lazaro Kawer on 10/14/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int t;
    string word1, word2;
    int changes;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> word1;
        cin >> word2;
        int n = word1.length();
        changes = 0;
        for(int j=0; j < n; j++){
            if(word1[j] != word2[j])
                changes++;
        }
        cout << changes << endl;
    }
    return 0;
}
