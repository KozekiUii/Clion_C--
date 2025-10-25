//
// Created by Komoribi on 2025/10/25.
//
/**
 * @brief Circle类的声明
 */

#ifndef CLION_CPP_PROJECT_CIRCLE_H
#define CLION_CPP_PROJECT_CIRCLE_H

#include <iostream>
#include "Point.h"
using namespace std;


class Circle {
private:
    int m_Radius;
    Point m_Center;
public:
    void setRadius(int r);

    int getRadius();

    void setCenter(const Point &center);

    Point getCenter();

};


#endif //CLION_CPP_PROJECT_CIRCLE_H