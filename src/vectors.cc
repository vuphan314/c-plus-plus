#include "vectors.h"

////////////////////////////////////////////////////////////

template<typename T>
void printVector3d(const vector<vector<vector<T>>> &vector3d) {
  cout << "<\n";
  for (const vector<vector<T>> &vector2d : vector3d) {
    printVector2d(vector2d);
    cout << ",\n";
  }
  cout << ">\n";
}

template<typename T>
void printVector2d(const vector<vector<T>> &vector2d) {
  for (const vector<T> &vector1d : vector2d) {
    printVector1d(vector1d);
  }
}

template<typename T>
void printVector1d(const vector<T> &vector1d) {
  for (auto item : vector1d) {
    cout << item << "\t";
  }
  cout << "\n";
}

////////////////////////////////////////////////////////////

void testPrinting3d() {
  cout << "Testing 3D printing.\n";
  vector<vector<vector<int>>> v3d{{{0, 1}, {10, 11}},
    {{2, 3}, {20, 30}}, {{4, 5}, {40, 50}}};
  printVector3d(v3d);
}

void testPrinting2d() {
  cout << "Testing 2D printing.\n";
  vector<vector<int>> v2d{{0, 1}, {10, 11}};
  printVector2d(v2d);
}

void testPrinting1d() {
  cout << "Testing 1D printing.\n";
  vector<int> v1d{0, 1};
  printVector1d(v1d);
}
