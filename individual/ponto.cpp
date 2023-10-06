#include <iostream>
#include <cmath>

class Ponto {
private:
    double x;
    double y;

public:
    Ponto() : x(0.0), y(0.0) {}

    Ponto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    void setX(double xCoord) {
        x = xCoord;
    }

    void setY(double yCoord) {
        y = yCoord;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double calcularDistanciaOrigem() const {
        return std::sqrt(x * x + y * y);
    }
};

int main() {
    double x, y;

    std::cout << "Digite as coordenadas do ponto (x y): ";
    std::cin >> x >> y;

    Ponto ponto1; // Ponto na origem (0,0)
    Ponto ponto2(x, y); // Ponto com coordenadas especificadas

    std::cout << "Ponto 1: (" << ponto1.getX() << ", " << ponto1.getY() << ")" << std::endl;
    std::cout << "Distância até a origem para Ponto 1: " << ponto1.calcularDistanciaOrigem() << std::endl;

    std::cout << "Ponto 2: (" << ponto2.getX() << ", " << ponto2.getY() << ")" << std::endl;
    std::cout << "Distância até a origem para Ponto 2: " << ponto2.calcularDistanciaOrigem() << std::endl;

    return 0;
}
