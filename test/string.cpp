//
// Created by Hiro-Aki Hotta on 2018-12-02.
//

#include "string.hpp"
#include "gtest/gtest.h"

#include <string>
#include <vector>

TEST(string_test, join) {
  std::vector<std::string> str_vec = {"Welcome", "to", "C++", "!"};
  std::string dlm = " ";

  EXPECT_EQ("Welcome to C++ !", h6ak::join_str(dlm, str_vec));
}

TEST(string_test, join_only_one) {
  std::vector<std::string> str_vec = {"Welcome"};
  std::string dlm = " ";

  EXPECT_EQ("Welcome", h6ak::join_str(dlm, str_vec));
}
