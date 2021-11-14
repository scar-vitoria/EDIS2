/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   volumeEsfera.h
 * Author: vitor
 *
 * Created on 17 de outubro de 2021, 00:12
 */

#ifndef VOLUMEESFERA_H
#define VOLUMEESFERA_H

class volumeEsfera {
public:
    
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    
    void lerDados();
    float calcularVolume(float raio);
private:

};

#endif /* VOLUMEESFERA_H */

