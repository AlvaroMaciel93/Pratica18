#include "Ponto.hpp"
#include <iostream>
using namespace std;

int main(void) {
    Ponto p1(3,4);
    Ponto p2(2,6);
    cout << "Distancia entre" << p1.escrevePonto() << " e origem: " << p1.calculaDistancia() << endl;
    p1.setPonto(4.0, 2.0);
    cout << "Distancia entre" << p1.escrevePonto() << " e origem: " << p1.calculaDistancia() << endl;
    cout << "Distancia entre" << p2.escrevePonto() << " e origem: " << p2.calculaDistancia() << endl;

    return 0;
}