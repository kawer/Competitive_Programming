//
//  main.cpp
//  Funghi
//
//  Created by Lazaro Kawer on 10/10/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int hongos[11];
    for(int i = 0; i < 8; i++){
        cin >> hongos[i];
    }
    hongos[8] = hongos[0];
    hongos[9] = hongos[1];
    hongos[10] = hongos[2];
    
    int cantidadHongos = 0;
    
    for(int i=0; i < 8; i++) {
        int hongosseccion = hongos[i] + hongos[i+1] + hongos[i+2] + hongos[i+3];
        if(hongosseccion > cantidadHongos) {
            cantidadHongos = hongosseccion;
        }
    }
    
    cout << cantidadHongos << endl;
    
    return 0;
}
