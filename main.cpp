#include "cartesian_product.cpp"

////////////////////////////////////////////////////////////

void testPower() {
  vector<int> itemsV{0, 1, -1}, &items = itemsV;
  vector<vector<int>> outputV{{}}, &output = outputV;
  unsigned int exponent = 3;
  setCartesianPower(items, exponent, output);
  printVectors(output);
}

void testProduct() {
  vector<vector<int>> inputV{{0, 1}, {0, 1}, {0, 1}},
    &input = inputV, outputV{{}}, &output = outputV;
  setCartesianProduct(input, output);
  printVectors(output);
}

////////////////////////////////////////////////////////////

int main() {
  testPower();
  // testProduct();
}
