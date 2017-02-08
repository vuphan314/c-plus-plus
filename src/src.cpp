#include "cartesian_product.cpp"
#include "vectors.cpp"

////////////////////////////////////////////////////////////

void testPower() {
  vector<int> itemsV{0, 1, -1}, &items = itemsV;
  vector<vector<int>> outputV{{}}, &output = outputV;
  unsigned int exponent = 2;
  setCartesianPower(items, exponent, output);
  printVector2d(output);
}

void testProduct() {
  vector<vector<int>> inputV{{0, 1}, {0, 1}, {0, 1}},
    &input = inputV, outputV{{}}, &output = outputV;
  setCartesianProduct(input, output);
  printVector2d(output);
}

////////////////////////////////////////////////////////////

int main() {
  testPower();
  testProduct();
  vector<vector<vector<int>>> v3d{{{0, 0}, {1, 1}}, {{2, 2}, {3, 3}}};
  printVector3d(v3d);
}
