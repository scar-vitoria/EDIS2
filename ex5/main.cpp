/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitor
 *
 * Created on 17 de outubro de 2021, 00:12
 */

#include <cstdlib>
#include <iostream>

#include "volumeEsfera.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    volumeEsfera *Obj = new volumeEsfera();
    Obj-> lerDados();
    return 0;
}

