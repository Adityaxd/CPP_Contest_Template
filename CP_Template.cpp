#include <bits/stdc++.h>         // Includes most standard headers at once :contentReference[oaicite:6]{index=6}
using namespace std;            // Bring std namespace into scope for brevity :contentReference[oaicite:7]{index=7}

// ==================== TYPE ALIASES ====================
using ll = long long;                                  // 64-bit signed integer :contentReference[oaicite:8]{index=8}
using pll = pair<ll, ll>;                              // Pair of long longs :contentReference[oaicite:9]{index=9}
using pii = pair<int, int>;                            // Pair of ints :contentReference[oaicite:10]{index=10}
using vi = vector<int>;                                // Vector of ints :contentReference[oaicite:11]{index=11}
using vll = vector<ll>;                                // Vector of long longs :contentReference[oaicite:12]{index=12}

// ==================== MACROS ====================
// Loop shorthand: for (int i = (a); i < (b); ++i)
#define rep(i, a, b) for (int i = (a); i < (b); ++i)       // Typical loop macro :contentReference[oaicite:13]{index=13}
#define invrep(i, a, b) for (int i = (a); i >= (b); --i)   // Reverse loop macro :contentReference[oaicite:14]{index=14}

// Container shorthand
#define all(x) (x).begin(), (x).end()                    // Pass entire container to algorithms :contentReference[oaicite:15]{index=15}
#define rall(x) (x).rbegin(), (x).rend()                 // Reverse iterators of container :contentReference[oaicite:16]{index=16}

// Common operations
#define pb push_back                                     // Append to vector :contentReference[oaicite:17]{index=17}
#define mp make_pair                                     // Construct a pair :contentReference[oaicite:18]{index=18}
#define fi first                                         // Access first element of pair :contentReference[oaicite:19]{index=19}
#define se second                                        // Access second element of pair :contentReference[oaicite:20]{index=20}

// Constant definitions
const ll MOD = 1000000007LL;                            // Prime modulus often used in modular arithmetic :contentReference[oaicite:21]{index=21}
const ll INF = LLONG_MAX / 4;                            // “Infinity” value for comparison :contentReference[oaicite:22]{index=22}

// ==================== FAST I/O ====================
static void fast_io() {                                  // Function to speed up cin/cout :contentReference[oaicite:23]{index=23}
    ios::sync_with_stdio(false);                         // Disable synchronization with C I/O :contentReference[oaicite:24]{index=24}
    cin.tie(nullptr);                                    // Untie cin from cout :contentReference[oaicite:25]{index=25}
}

// ==================== DEBUG UTILITIES ====================
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << '\n';  // Print variable name and value :contentReference[oaicite:26]{index=26}
#else
    #define debug(x) // Disabled when submitting :contentReference[oaicite:27]{index=27}
#endif

// ==================== SOLVER FUNCTION ====================
void solve() {
    // Example: reading an integer and printing it back
    int n;
    cin >> n;                                            // Read input :contentReference[oaicite:28]{index=28}
    debug(n);                                            // Debug print (only active locally) :contentReference[oaicite:29]{index=29}

    // Problem-specific logic goes here
    // For demonstration, we’ll just print n * 2
    cout << (2LL * n) << '\n';                          // Output answer :contentReference[oaicite:30]{index=30}
}

// ==================== MAIN FUNCTION ====================
int main() {
    fast_io();                                           // Enable fast I/O :contentReference[oaicite:31]{index=31}

    int t = 1;
    if (!(cin >> t)) t = 1;                              // Read number of test cases (default = 1) :contentReference[oaicite:32]{index=32}
    while (t--) {
        solve();                                         // Call solve() for each test case :contentReference[oaicite:33]{index=33}
    }
    return 0;
}
