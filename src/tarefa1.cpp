#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include "searchElement.h"
#include "quadrado.h"
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

const double PI = 3.1416;

int main(int argc, char *argv[])
{
    const char *geometrics[] = {
        "triangulo", "retangulo", "quadrado", "circulo",
        "piramide", "cubo", "paralelepipedo", "esfera"};

    if (argc < 2)
    {
        std::cout << "Insira a figura geometrica" << std::endl;
        return 1;
    }

    int result = searchElement(geometrics, 8, argv[1]);

    if (result != -1)
    {
        std::cout << "Geometric found: " << argv[1] << std::endl;

        if (strcmp(argv[1], "quadrado") == 0 && argc > 2)
        {
            int side = std::stoi(argv[2]);
            quadrado(side);
        }
        else if (strcmp(argv[1], "retangulo") == 0 && argc > 3)
        {
            int base = std::stoi(argv[2]);
            int altura = std::stoi(argv[3]);
            retangulo(base, altura);
        }
        else if (strcmp(argv[1], "triangulo") == 0 && argc > 2)
        {
            double base = std::stod(argv[2]);
            triangulo(base);
        }
        else if (strcmp(argv[1], "circulo") == 0 && argc > 2)
        {
            int radius = std::stoi(argv[2]);
            circulo(radius);
        }
        else if (strcmp(argv[1], "piramide") == 0 && argc > 2)
        {
            double base = std::stod(argv[2]);
            double altura = std::stod(argv[3]);
            piramide(base, altura);
        }
        else if (strcmp(argv[1], "cubo") == 0 && argc > 2)
        {
            double aresta = std::stod(argv[2]);
            cubo(aresta);
        }
        else if (strcmp(argv[1], "paralelepipedo") == 0 && argc > 4)
        {
            double aresta1 = std::stod(argv[2]);
            double aresta2 = std::stod(argv[3]);
            double aresta3 = std::stod(argv[4]);
            paralelepipedo(aresta1, aresta2, aresta3);
        }
        else if (strcmp(argv[1], "esfera") == 0 && argc > 2)
        {
            double raio = std::stod(argv[2]);
            esfera(raio);
        }
        else
        {
            std::cout << "Argumentos insuficientes para " << argv[1] << std::endl;
        }
    }
    else
    {
        std::cout << "Figura não encontrada" << std::endl;
    }

    return 0;
}
