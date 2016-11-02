//
//  main.cpp
//  MaxSubsetOfArray
//
//  Created by Lazaro Kawer on 10/22/16.
//  Copyright © 2016 Kawer. All rights reserved.
//
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <math.h>
//
//
//using namespace std;
//
//int main() {
//    long long t, n;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> t;
//    while(t--){
//        long long sum=0;
//        long long numZ = 0;
//        long totalZ = 0;
//        cin >> n;
//        long long arr[5005];
//        for(int i=0;i<n;i++){
//            cin >> arr[i];
//        }
//        sort(arr,arr+n);
//        long long count = 1;
//        long long negCount = 1;
//        
//        if(arr[n-1]<0){
//            for(long long k=n-1; k>=0; k--){
//                if(arr[k] == arr[k-1]){
//                    sum = arr[k];
//                    negCount++;
//
//                }
//                else {
//                    sum=arr[k];
//                    break;
//                }
//            }
//            cout << sum  << " " << negCount % 1000000009 << endl;
//
//        }
//        else{
//            for(int m=0;m<n;m++){
//                if(arr[m]>=0){
//                    if(arr[m]==0){
//                        totalZ++;
//                    }
//                    numZ++;
//                    sum += arr[m];
//                }
//                if(totalZ != 0){
//                    count = pow(2, totalZ);
//                    if(arr[n-1]==0) count = count = (pow(2, totalZ) - 1);
//                    
//                }
//                else
//                    count = 1;
//            }
//            
//            cout << sum << " " << count % 1000000009 << endl;
//        }
//
//    }
//    
//    return 0;
//}
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, N, zero, i;
    long long count, sum;
    int arr[50005];
    cin >> t;
    
    while(t--){
        zero = 0;
        i = 0;
        count = 0;
        cin >> N;
        cin >> arr[i];
        sum = arr[i];
        if(!sum) zero++;
        for(i = 1; i < N; i++){
            cin >> arr[i];
            if(arr[i] == 0){
                zero++;
                if(sum < 0) sum = 0;}
            else if(arr[i] > 0 && sum > 0)
                sum += arr[i];
            else if(arr[i] > 0 && sum <= 0)
                sum = arr[i];
            else sum = sum < arr[i] ? arr[i] : sum;
        }
        if(sum < 0){
            for(i = 0; i < N; i++)
                if(arr[i] == sum)
                    count++;
        }
        else{
            if(!zero)
                count++;
            else{
                long long multiplier = 2;
                long long m = zero;
                long long result = 1;
                while (m > 0){
                    if (m % 2 != 0)
                        result = result * multiplier % 1000000009;
                    multiplier = multiplier * multiplier % 1000000009;
                    m /= 2;
                }
                count = result;
            }
            if(!sum) count-=1;
        }
        cout << sum << " " << count << endl;
    }
    return 0;
}
