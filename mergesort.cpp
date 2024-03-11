#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;
using namespace std;

int n;
vector<float> a;

void merge(vector<float>& arr, int st, int mid, int en) {
    vector<float> left(arr.begin() + st, arr.begin() + mid + 1);
    vector<float> right(arr.begin() + mid + 1, arr.begin() + en + 1);

    int i = 0, j = 0, k = st;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < left.size())
        arr[k++] = left[i++];

    while (j < right.size())
        arr[k++] = right[j++];
}

void mergeSort(vector<float>& arr, int st, int en) {
    if (st < en) {
        int mid = st + (en - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, en);
        merge(arr, st, mid, en);
    }
}

int main() {
    freopen("test9.txt", "r", stdin);
    freopen("text9.out24", "w", stdout);

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto start = high_resolution_clock::now();

    mergeSort(a, 0, n - 1);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << duration.count() << "ms" << endl;

    return 0;
}
