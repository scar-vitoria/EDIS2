/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   volumeEsfera.cpp
 * Author: vitor
 * 
 * Created on 17 de outubro de 2021, 00:12
 */
#include <iostream>
#include <math.h>
#include "volumeEsfera.h"

using namespace std;

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}

void volumeEsfera::lerDados(){
    
    float raio;
    cout << "Digite o raio da esfera: ";
    cin >>  raio;
    cout << this -> calcularVolume(raio);
    
}

float volumeEsfera::calcularVolume(float raio){
    
    float volume = 4 / 3 * 3.14 * pow(raio, 3);
    
    return volume;
}

