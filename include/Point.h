//
// Created by Komoribi on 2025/10/25.
//
/**
 * @brief Point类的声明
 */

#ifndef CLION_CPP_PROJECT_POINT_H
#define CLION_CPP_PROJECT_POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    int p_x;
    int p_y;

public:

    void set_Px(int px);
    int getPx();

    void set_Py(int py);
    int getPy();
};


#endif //CLION_CPP_PROJECT_POINT_H