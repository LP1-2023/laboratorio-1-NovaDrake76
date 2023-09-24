#include <iostream>
#include <cmath>
#include "triangulo.h"

void triangulo(double base, double height)
{
    double area = 0.5 * base * height;
    double perimeter = base + 2 * std::sqrt(std::pow(height, 2) + std::pow(base / 2, 2));

    std::cout << "Area do triangulo: " << area << std::endl;
    std::cout << "Perimetro do triangulo: " << perimeter << std::endl;
}
