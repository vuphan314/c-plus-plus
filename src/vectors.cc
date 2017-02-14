#include "vectors.h"

////////////////////////////////////////////////////////////

template<typename T>
void printVector3d(const vector<vector<vector<T>>> &vector3d) {
  cout << "<\n";
  for (vector<vector<T>> vector2d : vector3d) {
    printVector2d(vector2d);
    cout << ",\n";
  }
  cout << ">\n";
}

template<typename T>
void printVector2d(const vector<vector<T>> &vector2d) {
  for (vector<T> vector1d : vector2d) {
    printVector1d(vector1d);
    cout << "\n";
  }
}

template<typename T>
void printVector1d(const vector<T> &vector1d) {
  for (T item : vector1d) {
    cout << item << "\t";
  }
}
