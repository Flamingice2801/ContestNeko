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
#include <iomanip>
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
#include <memory>
#include <initializer_list>
#endif

#define LOG(l, x) if (l <= LOGLEVEL) cout << x << endl

#define int64 long long
#define REPEAT(x) for (auto repeat_var = 0; repeat_var < x; ++repeat_var)

#define FOR_INC(i, x) for (auto i = 0; i < x; ++i)
#define FOR_DEC(i, x) for (auto i = x - 1; i >= 0; --i)
#define FOR_INC_RANGE(i, x, y) for (auto i = x; i <= y; ++i)
#define FOR_DEC_RANGE(i, x, y) for (auto i = x; i >= y; --i)

#define REQUIRE_OR_RET_FALSE(x) if ((!(x))) {return false;}

#define countBit __builtin_popcount
#define countBit64 __builtin_popcountl

#define FILL0(x) memset(x, 0, sizeof(x))
#define INT_INF ((int)2E9L)
#define INT64_INF ((int64)1E18L)
#define MOD 1000000007

using namespace std;

#ifndef GLOBAL_H
#define GLOBAL_H

#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            assert(false); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif

string toYesNo(bool b) {
    return b ? "YES" : "NO";
}

#endif