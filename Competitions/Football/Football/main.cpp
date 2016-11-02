//
//  main.cpp
//  Football
//
//  Created by Lazaro Kawer on 10/18/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    //if 0 pongale gol
    int t, g, s = 0, r;
    int p = 0;
    //int j=0;
    int count = 0;
    
    cin >> t >> g;
    
    int arr[t];
    
    for(int k = 0; k < t; k++) {
        cin >> s >> r;
        s-=r;
        arr[k] = s;
        count++;
    }
    sort(arr, arr + count);
    
    for(int i=count-1; i>=0; i--){
        
        while(arr[i]<=0 && g>0){
            arr[i]++;
            g--;
        }
    }
    for(int k = 0; k < t; k++) {
        if(arr[k]>0){
            p+=3;
        }
        else if(arr[k]==0){
            p+=1;
        }
    }
    
//    while(count!= 0){
//
//        if(arr[count-1]>0){
//            p+=3;
//        }
//        else if(arr[count-1] == 0 && g>arr[count - 1]){
//            g--;
//            p+=3;
//        }
//        else if(arr[count-1] ==0 && g==0){
//            p+=1;
//        }
//        count--;
//    }
//    
//    if(g!=0){
//            while(t > 0){
//                if(arr[j] < 0){
//                    if(g > (arr[j] * -1)){
//                        g += arr[j] - 1;
//                        p += 3;
//
//                    }
//                    else if(arr[j] * -1 == g) {
//                        p += 1;
//                        g+=arr[j];
//                    }
//                    j++;
//            }
//                t--;
//    }
//    }
    cout << p << endl;

    return 0;
}
