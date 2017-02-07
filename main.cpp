#include "cartesian_product.cpp"

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

void testProduct() {
  vector<vector<int>> inputV{{-1}, {3, 5}, {-2, 0}}, &input = inputV,
    outputV{{}}, &output = outputV;
  setCartesianProduct(input, output);
  printVectors(output);
}

////////////////////////////////////////////////////////////

int main() {
  testProduct();
}
