#include <iostream>
#include "functions.h"

std::string box(int width, int height);
std::string checkerboard(int width, int height);
std::string cross(int size);
std::string lower(int size);
std::string upper(int size);
std::string trapezoid(int width, int height);
std::string checkerboard3x3(int width, int height);

int main()
{
    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task A\n";
    std::cout << "-----------------------------------\n";
    std::cout << "box(7,4) returns:\n\n" << box(7,4) << "\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task B\n";
    std::cout << "-----------------------------------\n";
    std::cout << "checkerboard(11, 6) returns:\n\n" << checkerboard(11,6) << "\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task C\n";
    std::cout << "-----------------------------------\n";
    std::cout << "cross(8) returns:\n\n" << cross(8) << "\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task D\n";
    std::cout << "-----------------------------------\n";
    std::cout << "lower(6) returns:\n\n" << lower(6) << "\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task E\n";
    std::cout << "-----------------------------------\n";
    std::cout << "upper(5) returns:\n\n" << upper(5) << "\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task F\n";
    std::cout << "-----------------------------------\n";
    std::cout << "trapezoid(12,5) returns:\n\n" << trapezoid(12,5) << "\n";
    std::cout << "-----------------------------------\n";
    std::cout << "trapezoid(5,3) returns:\n\n" << trapezoid(5,3) << "\n";
    std::cout << "-----------------------------------\n";
    std::cout << "trapezoid(12,7) returns:\n\n" << trapezoid(12,7) << "\n\n";

    std::cout << "-----------------------------------\n";
    std::cout << "Tests for task G\n";
    std::cout << "-----------------------------------\n";
    std::cout << "checkerboard3x3(16,11) returns:\n\n" << checkerboard3x3(16,11) << "\n";
    std::cout << "-----------------------------------\n";
    std::cout << "checkerboard3x3(27,27) returns:\n\n" << checkerboard3x3(27,27) << "\n";

    return 0;
}