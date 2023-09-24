#include <iostream>
#include "retangulo.h"

void retangulo(int length, int width)
{
    std::cout << "Area do retangulo: " << (length * width) << std::endl;
    std::cout << "Perimetro do retangulo: " << 2 * (length + width) << std::endl;
}
