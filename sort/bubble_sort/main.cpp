#include <iostream>
#include <vector>


using namespace std;


vector<int> bubble_sort(vector<int> data) {
    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data.size() - 1 - i; ++j) {
            if (data[j] > data[j + 1]) {
				swap(data[j], data[j + 1]);
            }
        }
    }
    return data;
}


int main() {
    vector<int> data = {1, -1, 3, 9, 0, 0, 4, 2, -5};
    data = bubble_sort(data);
    for (auto x : data) {
        cout << x << ' ';
    }
}
