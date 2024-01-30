#include <iostream>
#include <vector>


using namespace std;


vector<int> merge (vector<int> a, vector<int> b) {
    int ia = 0, ib = 0;
    int la = a.size(), lb = b.size();
    vector<int> c;
    while (ia < la and ib < lb) {
        if (a[ia] < b[ib]) {
            c.push_back(a[ia]);
            ++ia;
        } else {
            c.push_back(b[ib]);
            ++ib;
        }
    }
    if (ia < la) {
        for (int i = ia; i < la; ++i) c.push_back(a[i]);
    }
    if (ib < lb) {
        for (int i = ib; i < lb; ++i) c.push_back(b[i]);
    }
    return c;
}


vector<int> merge_sort(vector<int> a) {
    int _len = a.size();
    vector<vector<int>> data;
    for (int i = 0; i < _len - 1; i += 2) {
        if (a[i + 1] > a[i]) {
            data.push_back(vector<int> {a[i], a[i + 1]});
        } else {
            data.push_back(vector<int> {a[i + 1], a[i]});
        }
    }
    if (_len % 2 == 1) data.push_back(vector<int> {a[_len - 1]});

    int i = 0;
    vector<vector<int>> _data;
    while (data.size() != 1) {
        vector<int> tmp;
        tmp = merge(data[i], data[i + 1]);
        _data.push_back(tmp);
        i += 2;

        if (i >= data.size() - 1) {
            if (data.size() % 2 == 1) {
                _data.push_back(data[data.size() - 1]);
            }
            i = 0;
            data = _data;
            _data.clear();
        }
    }

    return data[0];
}


int main() {
    vector<int> data = {1, -1, 3, 9, 0, 0, 4, 2, -5};
    data = merge_sort(data);
    for (int x : data) {
        cout << x << ' ';
    }
}
