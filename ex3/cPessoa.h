/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoa.h
 * Author: vitor
 *
 * Created on 19 de outubro de 2021, 18:19
 */

#ifndef CPESSOA_H
#define CPESSOA_H

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    int anos, meses, dias, i;
    float lerDados();
    float calcIdade();
    
private:

};

#endif /* CPESSOA_H */

