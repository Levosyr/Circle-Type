#ifndef CIRCLETYPE_CPP
#define CIRCLETYPE_CPP

#include "CircleType.h"
#include <cmath>  // For sqrt and pow functions

// Define PI if it's not defined
#ifndef M_PI
const double PI = 3.14159265358979323846;
#else
const double PI = M_PI;
#endif

// Calculate the radius of the circle
template <typename T>
double CircleType<T>::getRadius() const {
    return center.distance(circumferencePoint);
}

// Calculate the circumference of the circle
template <typename T>
double CircleType<T>::getCircumference() const {
    return 2 * PI * getRadius();
}

// Calculate the area of the circle
template <typename T>
double CircleType<T>::getArea() const {
    double radius = getRadius();
    return PI * radius * radius;
}

// Print circle properties
template <typename T>
void CircleType<T>::print() const {
    std::cout << "Radius: " << getRadius() << std::endl;
    std::cout << "Circumference: " << getCircumference() << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
}

#endif // CIRCLETYPE_CPP
