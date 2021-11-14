/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cNum.cpp
 * Author: vitor
 * 
 * Created on 20 de outubro de 2021, 22:37
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
    
    cout << "Retorno do menor valor: " << endl;
    cout << "Informe um valor inteiro: ";
    cin >> this -> num1;
    cout << "Informe um valot inteiro: ";
    cin >> this -> num2;
    cout << endl;
    
}

void cNum:: resultado() {
    
    if (this -> num1 < this -> num2)
        cout << "O menor valor é: " << this -> num1;
    else
        cout << "O menor valor é: " << this -> num2;
    
}
