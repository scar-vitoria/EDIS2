/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitor
 *
 * Created on 20 de outubro de 2021, 21:46
 */
#include <iostream>
#include <cstdlib>

#include "cBhaskara.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cBhaskara *Obj = new cBhaskara();
    Obj -> lerDados();
    Obj -> delta(Obj -> a, Obj -> b, Obj -> c);
    //int resultado;
    //quando está fora da classe refencia com o "Obj" ao invés do this
    //resultado = Obj -> delta(Obj -> a, Obj -> b, Obj -> c);
    //cout << resultado;
    return 0;
}

