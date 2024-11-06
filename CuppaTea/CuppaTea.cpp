#include <iostream>

const double PI = 3.14159265;


struct cuppa {
    double hi;
    double rad;

    void set_height(double nhi) {
        hi = nhi;
    }

    void set_radius(double nrad) {
        rad = nrad;
    }

    double get_volume() {
        return PI * (rad * rad) * hi;
    }

    double get_area() {
        return PI * (rad * rad);
    }

};



int main()
{
    double hi;
    double rad;

    std::cout << "Height: ";
    std::cin >> hi;

    std::cout << "Radius: ";
    std::cin >> rad;

    cuppa cup;

    cup.set_height(hi);
    cup.set_radius(rad);

    std::cout << "Volume: " << cup.get_volume();
    std::cout << std::endl;

    std::cout << "Area: " << cup.get_area();;
    std::cout << std::endl;
}

