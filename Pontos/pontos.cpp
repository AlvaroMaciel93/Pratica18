#include <iostream>
#include <cmath>

class Ponto {
private:
    double x;
    double y;

public:
    // Construtor padrão
    Ponto() : x(0.0), y(0.0) {}

    // Construtor com parâmetros para definir as coordenadas
    Ponto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Métodos para definir as coordenadas
    void setX(double xCoord) {
        x = xCoord;
    }

    void setY(double yCoord) {
        y = yCoord;
    }

    // Métodos para obter as coordenadas
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Método para calcular a distância até a origem (0,0)
    double calcularDistanciaOrigem() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    // Criando um objeto Ponto
    Ponto ponto1(3.0, 4.0);

    // Obtendo e exibindo as coordenadas
    std::cout << "Coordenadas do ponto: (" << ponto1.getX() << ", " << ponto1.getY() << ")" << std::endl;

    // Calculando e exibindo a distância até a origem
    std::cout << "Distância até a origem: " << ponto1.calcularDistanciaOrigem() << std::endl;

    return 0;
}
