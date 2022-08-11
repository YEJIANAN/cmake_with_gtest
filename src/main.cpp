/*
 * @Description:
 * @Author: yjn
 * @Date: 2022-08-05 16:04:28
 * @LastEditTime: 2022-08-09 11:46:20
 * @LastEditors: yjn
 * @Reference:
 */

#include <cmath>
#include <iostream>

#include "../include/2dtf/2dtf.h"

using namespace std;
int main() {
  My_Math mm;
  double x = 1.4, y = 4.55;
  int a = 2, b = 10;

  cout << "namespace testing！" << endl;
  cout << "max_num is: " << mm.max_num(x, y)
       << "plus_num is: " << mm.plus_num(a, b) << endl;

  return 0;
}