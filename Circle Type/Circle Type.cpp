#include <iostream>
#include "PointType.h"
#include "CircleType.h"

int main() {
    PointType<int> center(0, 0);
    PointType<int> circumferencePoint(3, 4);

    CircleType<int> circle(center, circumferencePoint);

    circle.print();

    return 0;
}
