//
// Created by Hiro-Aki Hotta on 2018-12-02.
//

#ifndef H6AK_CPP_STRING_HPP
#define H6AK_CPP_STRING_HPP

#include <string>

namespace h6ak {

namespace string_ { // to avoid ADL

// join strings with delimiter
template <class T>
std::string join_str(const std::string& dlm, const T& strings) {
  std::string result;
  for (auto itr = strings.begin(); itr != strings.end(); ++itr) {
    result.append(*itr);
    if (itr != strings.end()) result.append(dlm);
  }
  return result;
}

} // string_
using namespace string_;

} // h6ak

#endif //H6AK_CPP_STRING_HPP
