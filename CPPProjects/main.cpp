//#define SUBMIT

#define C11

#ifdef SUBMIT
#define LOGLEVEL 0
#define NDEBUG
#else
#define LOGLEVEL 1
#endif

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <stack>
#include <functional>
#include <sstream>
#include <deque>
#include <climits>
#include <cfloat>
#include <bitset>

#ifdef C11
#include <array>
#include <type_traits>
#include <random>
#include <unordered_set>
#include <unordered_map>
#endif

using namespace std;

#define LOG(l, x) if (l <= LOGLEVEL) cout << x << endl

#define int64 long long
#define repeat(x) for (auto repeat_var = 0; repeat_var < x; ++repeat_var)

#define for_inc(i, x) for (auto i = 0; i < x; ++i)
#define for_dec(i, x) for (auto i = x - 1; i >= 0; --i)
#define for_inc_range(i, x, y) for (auto i = x; i <= y; ++i)
#define for_dec_range(i, x, y) for (auto i = x; i >= y; --i)

#define countBit __builtin_popcount
#define countBit64 __builtin_popcountl

#define fill0(x) memset(x, 0, sizeof(x))
#define INT_INF ((int)2E9L)
#define INT64_INF ((int64)1E18L)
#define MOD 1000000007
int MODP(int64 x) {
  int r = x % MOD;
  if (r < 0) r += MOD;
  return r;
}

void testGen() {
  freopen("biginput1.txt", "w", stdout);
  fclose(stdout);
}

int n1, n2, x, y;

vector<pair<pair<int, int>, int>> all;

int main() {
  ios::sync_with_stdio(false);
#ifndef SUBMIT
  //testGen();
  freopen("input1.txt", "r", stdin);
#endif
  
  scanf("%d%d", &n1, &n2);
  scanf("%d%d", &x, &y);
  
  repeat(n1) {
    int a, b;
    scanf("%d%d", &a, &b);
    all.push_back(make_pair(make_pair(a, 1), b));
  }
  
  repeat(n2) {
    int a, b;
    scanf("%d%d", &a, &b);
    all.push_back(make_pair(make_pair(a, 0), b));
  }
  
  sort(all.begin(), all.end());
  
  set<int> c2;
  
  for (int i = (int) (all.size()) - 1; i >= 0; i--) {
    if (all[i].first.second == 1) {
      if (c2.upper_bound(all[i].second) == c2.end()) {
        cout << "Max";
        return 0;
      }
    } else {
      c2.insert(all[i].second);
    }
  }
  
  cout << "Min";
  return 0;
}
