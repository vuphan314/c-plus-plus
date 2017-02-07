#include "cartesian_product.cpp"

////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////

int main() {
	vector<int> itemsV{0, 1, 2}, &items = itemsV;
  vector<vector<int>> outputV{{}}, &output = outputV;
  setCartesianPower(items, 2, output);
	for (size_t i = 0; i < output.size(); i++) {
		for (size_t j = 0; j < output[i].size(); j++) {
			cout << output[i][j] << "\t";
		}
		cout << endl;
	}
}
