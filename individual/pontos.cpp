#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
    private:
        double x;
        double y;

    public:
        // Construtor padrão
        Ponto() : x(0.0), y(0.0) {}

        // Construtor que aceita coordenadas iniciais
        Ponto(double CoordX, double CoordY) : x(CoordX), y(CoordY) {}

        void definirCoordenadas(double novoX, double novoY) {
            x = novoX;
            y = novoY;
        }

        double obterX() const {
            return x;
        }

        double obterY() const {
            return y;
        }

        double calcularDistanciaOrigem() const {
            float dist;
            dist = sqrt(x * x + y * y);
            return dist;
        }
};

int main() {
    Ponto ponto1;
    Ponto ponto2;

    // Definir novas coordenadas
    ponto1.definirCoordenadas(1.0, 2.0);
    ponto2.definirCoordenadas(3.0, 4.0);

    // Obter as coordenadas dos pontos e calcular distância
    cout << "Coordenadas do ponto1: (" << ponto1.obterX() << ", " << ponto1.obterY() << ")\n";
    cout << "Coordenadas do ponto2: (" << ponto2.obterX() << ", " << ponto2.obterY() << ")\n";
    cout << "Distância de ponto1 até a origem: " << ponto1.calcularDistanciaOrigem() << "\n";
    cout << "Distância de ponto2 até a origem: " << ponto2.calcularDistanciaOrigem() << "\n";

    return 0;
}
