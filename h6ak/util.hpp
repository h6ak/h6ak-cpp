//
// Created by Hiro-Aki Hotta on 2018-12-02.
//

#ifndef H6AK_CPP_UTILS_HPP
#define H6AK_CPP_UTILS_HPP

#include <algorithm>

namespace h6ak {

namespace util_ { // to avoid ADL

// like Python len function
template <class T>
std::size_t len(const T& obj) { return obj.size(); }

// like Python in operator
// "exist(k, t)" means "k in t" in Python
template <class Key, class Container>
bool exist(const Key& k, const Container& c) {
  auto result = std::find(c.begin(), c.end(), k);
  return result != c.end();
}

} //util_

using namespace util_;

} //h6ak

#endif //H6AK_CPP_UTILS_HPP
