//
// Created by Komoribi on 2025/10/25.
//
#include <iostream>
#include <cmath>
#include "Circle.h"
#include "Point.h"
using namespace std;

int Is_on_circle(Circle &c, Point &p) {
    int center_x = c.getCenter().getPx();
    int center_y = c.getCenter().getPy();
    int radius = c.getRadius();
    int p_x = p.getPx();
    int p_y = p.getPy();

    double distance = sqrt(pow((p_x - center_x), 2) + pow((p_y - center_y), 2));

    if (distance < radius) {
        cout << "点在圆内" << endl;
        return -1;
    } else if (distance == radius) {
        cout << "点在圆上" << endl;
        return 0;
    } else {
        cout << "点在圆外" << endl;
        return 1;
    }
}

int main(int argc, char *argv[]) {
    Circle c1;
    Point p1, center;
    int p_x = 0, p_y = 0;
    int c_x = 0, c_y = 0, c_r = 0;

    cout << "请输入点的坐标：";
    cin >> p_x >> p_y;
    cout << "请输入圆心坐标及半径：";
    cin >> c_x >> c_y >> c_r;

    p1.set_Px(p_x);
    p1.set_Py(p_y);

    center.set_Px(c_x);
    center.set_Py(c_y);
    c1.setCenter(center);
    c1.setRadius(c_r);

    Is_on_circle(c1, p1);

}
