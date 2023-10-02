#include "Ponto.hpp"

Ponto::Ponto(double _x, double _y) {
    x = _x;
    y = _y;
}

void Ponto::setPonto(double _x, double _y) {
    x = _x;
    y = _y;
}

double Ponto::getX() const{
    return x;
}

double Ponto::getY() const{
    return y;
}

double Ponto::calculaDistancia() {
    return sqrt(pow(getX(), 2) + pow(getY(), 2));
}

std::string Ponto::escrevePonto() {
    return "(" + std::to_string(getX()) + ", " + std::to_string(getY()) + ")";
}
