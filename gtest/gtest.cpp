/*
 * @Description:
 * @Author: yjn
 * @Date: 2022-08-05 16:04:43
 * @LastEditTime: 2022-08-09 14:33:24
 * @LastEditors: yjn
 * @Reference:
 */
#include "../include/2dtf/2dtf.h"
// #include <glog/logging.h>
#include <gtest/gtest.h>

My_Math m;
TEST(max_num1, max_num) {
  double x = 1.0, y = 2.3;
  double m1 = x;
  if (x <= y) {
    m1 = y;
  }
  //实现glog时需要添加参数，这里没有添加所以先去掉了，没有参与测试20220809/14:33
  //  google::InitGoogleLogging("");
  // LOG(INFO) << "start testing!";
  EXPECT_EQ(2.3, m.max_num(x, y));

  // google::ShutdownGoogleLogging();
}
