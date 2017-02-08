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
    &input = inputV, //todo how 1-shot reference
    outputV{{}}, //todo why {{}}
    &output = outputV;
  setCartesianProduct(input, output); //todo why work without &
  // setCartesianProduct(inputV, outputV);
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
