#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
vector<float>a(1000000);
int n;
int main()
{
    freopen("test10.txt","r",stdin);
    freopen("test10.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
auto start = high_resolution_clock::now();
  sort(a.begin(),a.end()); 
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << duration.count() << "ms" << endl;
    
    return 0;
}
