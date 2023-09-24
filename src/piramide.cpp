#include <iostream>
#include "piramide.h"

void piramide(double base, double lateral, double altura)
{
    double area = (base * lateral) / 2;
    double volume = (area * altura) / 3;

    std::cout << "Area da piramide: " << area << std::endl;
    std::cout << "Volume da piramide: " << volume << std::endl;
}
