#include <iostream>

////////////////////////////////////////////////////////////

template<typename T>
void printVectors(const vector<vector<T>> vectors);

////////////////////////////////////////////////////////////

template<typename T>
void printVectors(const vector<vector<T>> vectors) {
	for (size_t i = 0; i < vectors.size(); i++) {
		for (size_t j = 0; j < vectors[i].size(); j++) {
			cout << vectors[i][j] << "\t";
		}
    cout << endl;
  }
}
