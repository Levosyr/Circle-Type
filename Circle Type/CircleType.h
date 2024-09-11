#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include "PointType.h"
#include <iostream>
#include <cmath>

template <typename T>
class CircleType {
private:
    PointType<T> center;
    PointType<T> circumferencePoint;

public:
    // Default constructor
    CircleType() {}

    // Constructor with parameters
    CircleType(PointType<T> c, PointType<T> p) : center(c), circumferencePoint(p) {}

    // Setters
    void setCenter(PointType<T> c) { center = c; }
    void setCircumferencePoint(PointType<T> p) { circumferencePoint = p; }

    // Getters
    PointType<T> getCenter() const { return center; }
    PointType<T> getCircumferencePoint() const { return circumferencePoint; }

    // Calculate radius
    double getRadius() const;

    // Calculate circumference
    double getCircumference() const;

    // Calculate area
    double getArea() const;

    // Print circle properties
    void print() const;
};

#include "CircleType.cpp" // Include the implementation

#endif // CIRCLETYPE_H
