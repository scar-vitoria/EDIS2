/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitor
 *
 * Created on 16 de outubro de 2021, 17:31
 */

#include <cstdlib>
#include <iostream>
#include "cExpressao.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cExpressao obj1;
    obj1.lerDados();
    cout << obj1.calcularExpressao();
    
    return 0;
}

