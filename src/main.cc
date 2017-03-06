#include "cartesian_product.h"
#include "vectors.h"

////////////////////////////////////////////////////////////

// void testPower() {
//   vector<int> items{0, 1, -1};
//   vector<vector<int>> output{{}};
//   unsigned int exponent = 2;
//   setCartesianPower(items, exponent, output);
//   printVector2d(output);
// }
//
// void testProduct() {
//   vector<vector<int>> input = {{0, 1}, {0, 1}, {0, 1}},
//     output{{}};
//   setCartesianProduct(input, output);
//   printVector2d(output);
// }

////////////////////////////////////////////////////////////

int main() {
  // testPower();
  // testProduct();
  testPrinting3d();
  testPrinting2d();
  testPrinting1d();
}
