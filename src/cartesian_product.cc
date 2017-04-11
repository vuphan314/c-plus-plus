#include "cartesian_product.h"

////////////////////////////////////////////////////////////

template<typename T>
void setCartesianPower(vector<vector<T>> &output,
    const vector<T> &items, Long exponent) {
  vector<vector<T>> input;
  for (Long i = 0; i < exponent; i++) {
    input.push_back(items);
  }
  setCartesianProduct(output, input);
}

template<typename T>
void setCartesianProduct(vector<vector<T>> &output,
    const vector<vector<T>> &input) {
  output = vector<vector<T>>{{}};
  for (auto& u : input) {
    vector<vector<T>> r;
    for (auto& x : output) {
      for (auto y : u) {
        r.push_back(x);
        r.back().push_back(y);
      }
    }
    output.swap(r);
  }
}

////////////////////////////////////////////////////////////

void testCartesianPower() {
  cout << "Testing cartesian power.\n";
  vector<vector<int>> output;
  vector<int> items{0, 1};
  Long exponent = 3;
  setCartesianPower(output, items, exponent);
  // printVector2d(output);
}

void testCartesianProduct() {
  cout << "Testing cartesian product.\n";
  vector<vector<int>> output, input{{0, 1}, {10, 11}};
  setCartesianProduct(output, input);
  // printVector2d(output);
  // printVector2d(input);
  testPrinting2d();
}
