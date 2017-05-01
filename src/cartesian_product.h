#ifndef CARTESIAN_PRODUCT_H
#define CARTESIAN_PRODUCT_H

////////////////////////////////////////////////////////////

#include "vectors.h"

////////////////////////////////////////////////////////////

template<typename T>
void setCartesianPower(vector<vector<T>> &output,
  const vector<T> &items, SizeT exponent);

template<typename T>
void setCartesianProduct(vector<vector<T>> &output,
  const vector<vector<T>> &input);

////////////////////////////////////////////////////////////

void testCartesianPower();

void testCartesianProduct();

////////////////////////////////////////////////////////////

#endif // CARTESIAN_PRODUCT_H
