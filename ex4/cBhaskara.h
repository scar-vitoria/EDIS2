/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBaskara.h
 * Author: vitor
 *
 * Created on 20 de outubro de 2021, 21:47
 */

#ifndef CBHASKARA_H
#define CBHASKARA_H

class cBhaskara {
public:
    cBhaskara();
    cBhaskara(const cBhaskara& orig);
    virtual ~cBhaskara();
    
    int a, b, c;
    void lerDados();
    //função com passagem de parâmetros
    int delta(int a, int b, int c);
    
    
private:

};

#endif /* CBASKARA_H */

