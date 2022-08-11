/*
 * @Description:实现一些简单的运算，加减乘除，平方，
 * @Author: yjn
 * @Date: 2022-08-05 15:24:39
 * @LastEditTime: 2022-08-09 16:06:57
 * @LastEditors: yjn
 * @Reference:
 */

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class My_Math {

public:
  My_Math(){};
  ~My_Math(){};
  //实现基本加减乘除的内容
  double max_num(double a, double b);
  int plus_num(int a, int b);
  int muti_num(int a, int b);
};

struct Point {
  explicit Point() : x(0.0), y(0.0) {}
  explicit Point(double x_i, double y_i) : x(x_i), y(y_i) {}
  double x;
  double y;
};

void My_Math(){};
void  ~My_Math(){};
double Transfor_2D(std::vector<Point> &point, double x_s, double y_s,
                   double angle);
