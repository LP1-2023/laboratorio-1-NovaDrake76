#include <iostream>
#include "esfera.h"

void esfera(int radius)
{
    const double PI = 3.1416;
    std::cout << "Area da esfera: " << (4 * PI * radius * radius) << std::endl;
}
