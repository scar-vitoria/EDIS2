/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitor
 *
 * Created on 19 de outubro de 2021, 18:19
 */

#include <cstdlib>

#include "cPessoa.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cPessoa *Obj = new cPessoa;
    Obj -> lerDados();
    Obj -> calcIdade();
    
    return 0;
}

