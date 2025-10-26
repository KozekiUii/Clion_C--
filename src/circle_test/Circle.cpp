//
// Created by Komoribi on 2025/10/25.
//

#include "Circle.h"

void Circle::setRadius(int r) {
    this->m_Radius = r;
}

int Circle::getRadius() {
    return this->m_Radius;
}

void Circle::setCenter(const Point &center) {
    this->m_Center = center;
}

Point Circle::getCenter() {
    return this->m_Center;
}
