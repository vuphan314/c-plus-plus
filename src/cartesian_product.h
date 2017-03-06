#ifndef CARTESIAN_PRODUCT_H
#define CARTESIAN_PRODUCT_H

////////////////////////////////////////////////////////////

#include "vectors.h"

////////////////////////////////////////////////////////////

template<typename T>
void setCartesianPower(const vector<T> &items,
  unsigned int exponent, vector<vector<T>> &output);

template<typename T>
void setCartesianProduct(const vector<vector<T>> &input,
  vector<vector<T>> &output);

////////////////////////////////////////////////////////////

#endif // CARTESIAN_PRODUCT_H
