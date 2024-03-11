#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int n;
vector<float> a;

void swap(float& a, float& b) {
  float u = a;
  a = b;
  b = u;
}

int partition(int st, int en) {
  int pivot = rand() % (en - st + 1) + st; // Chọn ngẫu nhiên một pivot
  swap(a[pivot], a[en]); // Di chuyển pivot vào cuối mảng
  int index = st;
  float value = a[en];
  for (int i = st; i < en; i++) {
    if (a[i] <= value) {
      swap(a[i], a[index]);
      index++;
    }
  }
  swap(a[index], a[en]); // Đặt pivot vào vị trí đúng của nó
  return index;
}

void quickSort(int st, int en) {
  while (st < en) {
    int index = partition(st, en);
    if (index - st < en - index) {
      quickSort(st, index - 1);
      st = index + 1;
    } else {
      quickSort(index + 1, en);
      en = index - 1;
    }
  }
}

int main() {
  freopen("test8.txt", "r", stdin);
  freopen("test8.out23", "w", stdout);

  cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  auto start = high_resolution_clock::now();

  quickSort(0, n - 1);

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << duration.count() << "ms" << endl;

  for (int i = 0; i < n; i++) cout << a[i] << " ";

  return 0;
}
