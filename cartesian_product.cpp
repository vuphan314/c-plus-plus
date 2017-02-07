#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > cart_product (const vector<vector<int>>& v) {
  vector<vector<int>> s = {{}};
  for (auto& u : v) {
    vector<vector<int>> r;
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

int main () {
	vector<vector<int> > test{{1}, {4,5,6}, {8,9}};
	vector<vector<int> > res = cart_product(test);
	for(size_t i = 0; i < res.size();i++){
		for (size_t j = 0; j < res[i].size(); j++){
			cout << res[i][j] << "\t";
		}
		cout << std::endl;
	}
  return 0;
}
