/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBaskara.cpp
 * Author: vitor
 * 
 * Created on 20 de outubro de 2021, 21:47
 */
#include <iostream>
#include <math.h>
#include "cBhaskara.h"

using namespace std;

cBhaskara::cBhaskara() {
}

cBhaskara::cBhaskara(const cBhaskara& orig) {
}

cBhaskara::~cBhaskara() {
}

void cBhaskara:: lerDados(){
    
    cout << "Calculo de delta: " << endl;
    cout << "Informe o valor de a: ";
    cin >> this -> a;
    cout << "Informe o valor de b: ";
    cin >> this -> b;
    cout << "Informe o valor de c: ";
    cin >> this -> c;
    
    //resultado é apresetado nessa função
    //cout << this -> delta(this -> a, this -> b, this -> c);
}

int cBhaskara:: delta(int a, int b, int c){
    
    int delta;
    delta = pow(b, 2) - 4 * a * c;
    
    return delta;
}

