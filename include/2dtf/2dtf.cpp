/*
 * @Description:
 * @Author: yjn
 * @Date: 2022-08-05 15:24:26
 * @LastEditTime: 2022-08-09 11:46:36
 * @LastEditors: yjn
 * @Reference:
 */
#include "2dtf.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

double My_Math::max_num(double a, double b) { return a > b ? a : b; }

int My_Math::plus_num(int a, int b) { return a + b; }

int My_Math::muti_num(int a, int b) { return a * b; }

double Transfor_2D(std::vector<Point> &points, double x_s, double y_s,
                   double angle) {
  transform(begin(points), end(points), begin(points), [=](const Point &point) {
    double sin_val = sin(angle);
    double cos_val = std::cos(angle);
    Point trans_point((point.x - x_s) * cos_val + (point.y - y_s) * sin_val,
                      (point.y - y_s) * cos_val - (point.x - x_s) * sin_val);
    return trans_point;
  });

  return 0.0;
}
