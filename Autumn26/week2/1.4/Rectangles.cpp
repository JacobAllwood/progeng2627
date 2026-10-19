#include <iostream>
#include <string>

int main() {
    int length, width, area, perimeter;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    std::cout << "area of the rectangle is: " << area << std::endl;
    std::cout << "perimiter of the rectangle is: " << perimeter << std::endl;
}