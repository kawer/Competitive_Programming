//
//  main.cpp
//  EasyStringProb
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main() {
//
//    int t;
//    cin >> t;
//    string flag;
//    for(int i = 0; i<t; i++){
//        flag = "yes";
//        string S,P,s2;
//
//        cin >> S >> P;
//        s2 = S;
//        int r = (S.length()-1);
//        
//        if(S.length() == 1){
//            if(S != P){
//                cout << "NO" << endl;
//                flag = "no";
//                continue;
//            }
//        }
//        
//        for(int j = 0; j < S.length()-1; j++) {
//            if(S[j]!=P[j]){
//                S[j] = S[r];
//                S[r] = s2[j];
//                r --;
//            }
//            if(S[j]!=P[j] || S[r] != P[r]){
//                cout << "NO" << endl;
//                flag = "no";
//                break;
//                
//            }
//        }
//        if(!(flag == "no")){
//        cout << "YES" << endl;
//        }
//    }
//    
//    return 0;
//}
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int itests;
    cin >> itests;
    for (int i=0; i<itests; i++) {
        string one;
        string toShow = "NO";
        cin >> one;
        string two;
        cin >> two;
        int contador=0;
        
        string toVoltear;
        for (int i=0; i<one.size(); i++) {
            
            toVoltear+="0";
        }
        
        for (int i=0; i<one.size(); i++) {
            if (one[i] == two[i]) {
                contador++;
                
            }
            else {
                if(one[i] == two[two.size()-i-1])
                { contador++;}
            }
            
        }
        
        if (contador==one.size()) {
            cout << "YES" << endl;
        }
        else {cout <<"NO" << endl;
        }
        
    }
    return 0;
}
