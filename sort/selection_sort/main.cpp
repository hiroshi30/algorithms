#include <iostream>
#include <vector>


using namespace std;


vector<int> selection_sort(vector<int> data) {
    int index_min;
	for (int i = 0; i < data.size(); ++i) {
		index_min = i;
		for (int j = i; j < data.size(); ++j) {
			if (data[j] < data[index_min]) {
				index_min = j;
			}
		}
		swap(data[i], data[index_min]);
	}
    return data;
}


int main() {
    vector<int> data = {1, -1, 3, 9, 0, 0, 4, 2, -5};
    data = selection_sort(data);
    for (auto x : data) {
        cout << x << ' ';
    }
}
