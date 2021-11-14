/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cExpressao.cpp
 * Author: vitor
 * 
 * Created on 16 de outubro de 2021, 17:34
 */

#include <iostream>
#include "cExpressao.h"
#include <math.h>

using namespace std;
cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

//modularização (criação de funções)

void cExpressao::lerDados(){
    
    cout << "Digite o valor A: " << endl;
    cin >> A;
    cout << "Digite o valor B: " << endl;
    cin >> B;
    cout << "Digite o valor C: " << endl;
    cin >> C;
}

float cExpressao::calcularExpressao(){
    R = pow((A + B), 2);
    S = pow((B + C), 2);
    D = (R + S) / 2;
    
    return D;
}

