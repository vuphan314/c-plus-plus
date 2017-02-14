#include <vector>

using namespace std;

////////////////////////////////////////////////////////////

template<typename T>
void setCartesianPower(const vector<T> &items,
  unsigned int exponent, vector<vector<T>> &output);

template<typename T>
void setCartesianProduct(const vector<vector<T>> &input,
  vector<vector<T>> &output);

////////////////////////////////////////////////////////////

template<typename T>
void setCartesianPower(const vector<T> &items,
    unsigned int exponent, vector<vector<T>> &output) {
  vector<vector<T>> inputV, &input = inputV;
  for (size_t i = 0; i < exponent; i++) {
    input.push_back(items);
  }
  setCartesianProduct(input, output);
}

template<typename T>
void setCartesianProduct(const vector<vector<T>> &input,
    vector<vector<T>> &output) {
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
