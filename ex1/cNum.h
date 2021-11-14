/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cNum.h
 * Author: vitor
 *
 * Created on 20 de outubro de 2021, 22:37
 */

#ifndef CNUM_H
#define CNUM_H

class cNum {
public:
    cNum();
    cNum(const cNum& orig);
    virtual ~cNum();
    
    int num1, num2;
    void lerNum();
    void resultado();
    
private:

};

#endif /* CNUM_H */

