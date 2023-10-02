#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include <cmath>
#include <string>

class Ponto {
private:
    double x, y;

public:
    Ponto(double _x = 0, double _y = 0);
    void setPonto(double _x, double _y);
    double getX() const;
    double getY() const;
    double calculaDistancia();
    std::string escrevePonto();
};

#endif