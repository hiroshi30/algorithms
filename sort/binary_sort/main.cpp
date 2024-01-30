#include <iostream>
#include <vector>


using namespace std;


vector<int> binary_sort(vector<int> data) {
    if (data.size() <= 1) {
        return data;
    } else {
        vector<int> left, right;
        int mid = data.size() / 2;
        for (int i = 0; i < data.size(); ++i) {
            if (i != mid) {
                if (data[i] <= data[mid]) {
                    left.push_back(data[i]);
                } else {
                    right.push_back(data[i]);
                }
            }
        }
        left = binary_sort(left);
        right = binary_sort(right);

        left.push_back(data[mid]);
        left.insert(left.end(), right.begin(), right.end());
        
        return left;
    }
}


int main() {
    vector<int> data = {1, -1, 3, 9, 0, 0, 4, 2, -5};
    data = binary_sort(data);
    for (auto x : data) {
        cout << x << ' ';
    }
}
