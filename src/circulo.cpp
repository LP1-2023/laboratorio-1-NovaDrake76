#include <iostream>
#include "circulo.h"

void circulo(int radius)
{
    const double PI = 3.1416;
    std::cout << "Area do circulo: " << (radius * radius * PI) << std::endl;
    std::cout << "Perimetro do circulo: " << (2 * PI * radius) << std::endl;
}
