/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitor
 *
 * Created on 20 de outubro de 2021, 22:36
 */
#include <iostream>
#include <cstdlib>
#include "cNum."

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cNum *Obj = new cNum();
    Obj -> lerNum();
    Obj -> resultado();
        
    return 0;
}

