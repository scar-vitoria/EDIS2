/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoa.cpp
 * Author: vitor
 * 
 * Created on 19 de outubro de 2021, 18:19
 */
#include <iostream>
#include "cPessoa.h"

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

float cPessoa::lerDados(){
    
    cout << "Ler idade: " << endl;
    cout << "Informe sua idade em anos: ";
    cin >> this -> anos;
    cout << "Informe sua idade em meses: ";
    cin >> this -> meses;
    cout << "Informe sua idade em dias: ";
    cin >> this -> dias;
    
    return anos, meses, dias;
    
}

float cPessoa::calcIdade(){
    
    this -> i = 365 * this -> anos;
    
    cout << "A idade em dias é: " << this -> i;
    
    return this -> i;
}

