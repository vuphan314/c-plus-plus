#include <vector>

using namespace std;

////////////////////////////////////////////////////////////

template<typename T>
vector<vector<T>> get_cartesian_product (
    const vector<vector<T>> &v) {
  vector<vector<T>> s = {{}};
  for (auto& u : v) {
    vector<vector<T>> r;
    for (auto& x : s) {
      for (auto y : u) {
        r.push_back(x);
        r.back().push_back(y);
      }
    }
    s.swap(r);
  }
  return s;
}

////////////////////////////////////////////////////////////

int main () {
	vector<vector<int>> test = {{1}, {4,5,6}, {8,9}};
	vector<vector<int>> res = get_cartesian_product(test);
	for (size_t i = 0; i < res.size(); i++) {
		for (size_t j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << "\t";
		}
		cout << endl;
	}
}
