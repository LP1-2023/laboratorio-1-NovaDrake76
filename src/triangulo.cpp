#include <iostream>
#include <cmath>
#include "triangulo.h"

void triangulo(double base)
{
    double area = (base * base) * std::sqrt(3) / 4;
    double perimeter = 3 * base;

    std::cout << "Area do triangulo: " << area << std::endl;
    std::cout << "Perimetro do triangulo: " << perimeter << std::endl;
}
