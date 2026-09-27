#include <iostream>
#include "Fraction.h"

class Box {
private:
    int width;
public:
    explicit Box(int w) : width(w) {
        std::cout << "Box created with width: " << width << '\n';
    }

    friend void PrintBoxWidth(const Box& b);
};

void PrintBoxWidth(const Box& b) {
    std::cout << "Width of the box: " << b.width << '\n';
}

int main()
{
    int number = 10;

    std::cout << ++number << '\n';

    Fraction f1 = Fraction(1, 7);
    Fraction f2 = Fraction(3, 7);

    //f1++;
    //f2--;

    //Fraction sum = Fraction::add(f1, f2);
    Fraction sum = f1 + f2;

    Fraction f = 1 + f1;
    //Fraction f = f1 + 2;

    std::cout << sum << '\n';

    std::cin >> f1;

    std::cout << f1;
}