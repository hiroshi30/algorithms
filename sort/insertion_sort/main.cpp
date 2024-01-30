#include <iostream>
#include <vector>


using namespace std;


vector<int> insertion_sort(vector<int> data) {
	for (int i = 1; i < data.size(); ++i) {
		for (int j = i; (j > 0) && (data[j - 1] > data[j]); --j) {
			swap(data[j - 1], data[j]);
		}
	}
    return data;
}


int main() {
    vector<int> data = {1, -1, 3, 9, 0, 0, 4, 2, -5};
    data = insertion_sort(data);
    for (auto x : data) {
        cout << x << ' ';
    }
}
