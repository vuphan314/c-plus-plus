#include "cartesian_product.cpp"
#include "vectors.cpp"

////////////////////////////////////////////////////////////

void testPower() {
  vector<int> items{0, 1, -1};
  vector<vector<int>> output{{}}; //todo why {{}}
  unsigned int exponent = 2;
  setCartesianPower(items, exponent, output);
  printVector2d(output);
}

void testProduct() {
  vector<vector<int>> input{{0, 1}, {0, 1}, {0, 1}},
    output{{}};
  setCartesianProduct(input, output);
  printVector2d(output);
}

void testPrinting() {
  vector<vector<vector<int>>> v3d{{{0, 0}, {1, 1}}, {{2, 2}, {3, 3}}};
  printVector3d(v3d);
}

////////////////////////////////////////////////////////////

int main() {
  // testPower();
  testProduct();
  // testPrinting();
}
