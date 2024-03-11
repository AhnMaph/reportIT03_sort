#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void heapify(vector<float>& arr, int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < N && arr[l] > arr[largest])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}

void heapSort(vector<float>& arr, int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i > 0; i--) {

        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main()
{
    freopen("test3.txt","r",stdin);
    freopen("test3.out25","w",stdout);
    int N;
    cin>>N;
    vector<float> arr(N);
    
    for (int i = 0; i < N; ++i)
    {   
        cin>>arr[i];
    }
auto start = high_resolution_clock::now();
  heapSort(arr, N);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << duration.count() << "ms" << endl;
    return 0;
}
