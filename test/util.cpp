//
// Created by Hiro-Aki Hotta on 2018-12-02.
//

#include "util.hpp"
#include "gtest/gtest.h"

#include <string>
#include <vector>

TEST(util_test, len) {
  std::string str = "Hello World";
  std::vector<int> vec(123);

  EXPECT_EQ(11, h6ak::len(str));
  EXPECT_EQ(123, h6ak::len(vec));
}

TEST(util_test, exist) {
  std::string str = "Hello World";

  EXPECT_TRUE(h6ak::exist('e', str));
  EXPECT_FALSE(h6ak::exist('a', str));
}
