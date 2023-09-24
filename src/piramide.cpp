#include <iostream>
#include "piramide.h"

void piramide(double base, double altura)
{
    double area = (base * base) + (4 * (base * altura) / 2);
    double volume = (base * base * altura) / 3;

    std::cout << "Area da piramide: " << area << std::endl;
    std::cout << "Volume da piramide: " << volume << std::endl;
}
