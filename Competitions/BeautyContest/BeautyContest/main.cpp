//
//  main.cpp
//  BeautyContest
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    int girlNum;
    int arr[15];
    int score = 0;
    int cns = 1;
    while(n--){
        girlNum = cns;
        for(int i=0;i<10;i++){
            cin >> arr[i];
        }
        sort(arr, arr+10);
        arr[0] = 0;
        arr[9] = 0;
        
        for(int k=0;k<9;k++){
            score += arr[k];
        }

        
        cout << girlNum << " " << score << endl;
        score = 0;
        cns++;
    }
    
    
    return 0;
}
