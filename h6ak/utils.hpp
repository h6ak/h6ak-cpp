//
// Created by Hiro-Aki Hotta on 2018-12-02.
//

#ifndef H6AK_CPP_UTILS_HPP
#define H6AK_CPP_UTILS_HPP

#include <algorithm>

namespace h6ak {

// like Python len function
template <class T>
std::size_t len(T obj) { return obj.size(); }

// like Python in operator
// "exist(k, t)" means "k in t" in Python
template <class Key, class Container>
bool exist(Key k, Container c) {
  auto result = std::find(c.begin(), c.end(), k);
  return result != c.end();
}

}

#endif //H6AK_CPP_UTILS_HPP
