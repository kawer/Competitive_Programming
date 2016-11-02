//
//  main.cpp
//  TriangularNumbers
//
//  Created by Lazaro Kawer on 10/23/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(int argc, const char * argv[]) {
//    unsigned long long a;
//    
//    
//    while (cin >> a && a != 0){
//        if(sqrt(8*a+1) == long(sqrt(8*a+1))){
//            cout << "YES" << endl;
//        }
//        else{
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}
////
//  main.cpp
//  TriangularNumbers
//
//  Created by Lazaro Kawer on 10/23/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    intmax_t a;
    bool flag = false;
    int one = 1;
    int big = pow(2, 64);
    
    while (cin >> a && a != 0){
        flag = false;
        for(int i = 0; i < pow(2, 64); i++){
            if(binary_search(one, big, 1, a)){
                flag = true;
                break;
            }
            if(2*i > a)
                break;
        }
        if(flag == true){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

