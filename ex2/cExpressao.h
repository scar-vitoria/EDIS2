/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cExpressao.h
 * Author: vitor
 *
 * Created on 16 de outubro de 2021, 17:34
 */

#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    
    //variaveis
    int A, B, C, R, S;
    float D;
    void lerDados();
    float calcularExpressao();
    
private:

};

#endif /* CEXPRESSAO_H */

