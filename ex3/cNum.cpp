/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cNum.cpp
 * Author: vitor
 * 
 * Created on 20 de outubro de 2021, 23:12
 */
#include <iostream>
#include "cNum.h"

using namespace std;

cNum::cNum() {
}

cNum::cNum(const cNum& orig) {
}

cNum::~cNum() {
}

void cNum:: lerNum(){
    
    cout << "Verificação de valores: " << endl;
    cout << "Informe um valor: ";
    cin >> this -> num;
    
}

void cNum:: resultado(){
    
    if (this -> num == 0)
        cout << "0";
    else if (this -> num > 0)
            cout << "1";
    else
        cout << "-1";
    
}

