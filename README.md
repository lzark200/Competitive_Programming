# 🏆 Senior CP Sheet Solutions

<div align="center">

![CodeForces](https://img.shields.io/badge/CodeForces-445f9d?style=for-the-badge&logo=Codeforces&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Competitive Programming](https://img.shields.io/badge/Competitive%20Programming-FF6B35?style=for-the-badge)

</div>

---

## 🌟 About This Repository

> **Welcome to my competitive programming journey!** This repository contains solutions to various problems from the Senior CP Sheet, implemented in C++. Each solution is carefully crafted with competitive programming standards in mind, featuring optimized code and detailed explanations.

<div align="center">

### 📊 What You'll Find Here

| 🎯 **Feature** | 📝 **Description** |
|:--------------:|:------------------:|
| 🔥 **Senior Level Problems** | Advanced competitive programming challenges |
| ⚡ **Optimized Solutions** | Fast and memory-efficient C++ implementations |
| 📚 **Clean Code** | Well-commented and readable solutions |
| 🧩 **Multiple Topics** | Algorithms, Data Structures, Math, and more |

</div>

---

## 🚀 Getting Started

### 🔧 Prerequisites

Before you begin, make sure you have a C++ compiler installed on your system:

```bash
# Ubuntu/Debian
sudo apt-get install g++

# macOS (using Homebrew)
brew install gcc

# Windows - Download MinGW from: https://www.mingw-w64.org/
```

### 📥 Clone Repository

```bash
git clone https://github.com/username/senior-cp-sheet-solutions.git
cd senior-cp-sheet-solutions
```

---

## ⚡ Compile and Run

### 🏃‍♂️ Quick Compilation

```bash
# Basic compilation
g++ -o solution problem.cpp

# Optimized compilation for competitive programming
g++ -std=c++17 -O2 -Wall -Wextra -o solution problem.cpp

# Run with input file
./solution < input.txt

# Run with manual input
./solution
```

### 🛠️ Advanced Compilation Flags

```bash
# For debugging
g++ -std=c++17 -g -Wall -Wextra -DDEBUG -o solution problem.cpp

# For maximum optimization
g++ -std=c++17 -O2 -march=native -mtune=native -o solution problem.cpp
```

---

## 📋 Solution Template

<details>
<summary>🔽 <strong>Click to view the complete C++ template</strong></summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

// Type definitions for convenience
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>

// Macros for faster coding
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) ((int)v.size())
#define rep(i, a, b) for(int i = a; i < b; i++)
#define per(i, a, b) for(int i = a; i >= b; i--)

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;
const int MAXN = 2e5 + 5;

// Utility functions
template<typename T> void read(T &x) { cin >> x; }
template<typename T> void print(T x) { cout << x << "\n"; }
template<typename T> void debug(T x) { cerr << #x << " = " << x << "\n"; }

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Main solution function
void solve() {
    // Your solution code goes here
    
}

int main() {
    fastIO();
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    
    while (t--) {
        solve();
    }
    
    return 0;
}
```

</details>

---

## 📚 Learning Resources

<div align="center">

### 🌐 Essential Websites

</div>

| 🌟 **Platform** | 🔗 **Link** | 📝 **Best For** |
|:---------------:|:-----------:|:----------------:|
| **CodeForces** | [codeforces.com](https://codeforces.com) | Contest practice and problems |
| **CP-Algorithms** | [cp-algorithms.com](https://cp-algorithms.com) | Algorithm implementations |
| **USACO Guide** | [usaco.guide](https://usaco.guide) | Structured learning path |
| **AtCoder** | [atcoder.jp](https://atcoder.jp) | High-quality problems |
| **HackerRank** | [hackerrank.com](https://hackerrank.com) | Interview preparation |

### 📖 Recommended Books

<div align="center">

![Book](https://img.shields.io/badge/📚%20Competitive%20Programming%204-Steven%20Halim-blue?style=flat-square)
![Book](https://img.shields.io/badge/📚%20Introduction%20to%20Algorithms-CLRS-green?style=flat-square)
![Book](https://img.shields.io/badge/📚%20Algorithm%20Design%20Manual-Steven%20Skiena-orange?style=flat-square)

</div>

### 🎯 YouTube Channels

- **🔥 Errichto** - Advanced competitive programming concepts
- **📚 William Lin** - Contest solutions and explanations  
- **⚡ SecondThread** - Algorithm tutorials and live coding
- **🧠 Gaurav Sen** - System design and algorithms

### 🛠️ Online Judges for Practice

```
🥇 CodeForces    →  Contest-style problems
🥈 AtCoder       →  Clean, well-tested problems  
🥉 CodeChef      →  Monthly contests
🏆 SPOJ          →  Classic algorithmic problems
⚡ UVa Online    →  Large problem archive
```

---

<div align="center">

## 🎉 Happy Coding!

```
 _   _                           ____          _ _             _ 
| | | | __ _ _ __  _ __  _   _   / ___|___   __| (_)_ __   __ _| |
| |_| |/ _` | '_ \| '_ \| | | | | |   / _ \ / _` | | '_ \ / _` | |
|  _  | (_| | |_) | |_) | |_| | | |__| (_) | (_| | | | | | (_| |_|
|_| |_|\__,_| .__/| .__/ \__, |  \____\___/ \__,_|_|_| |_|\__, (_)
            |_|   |_|    |___/                            |___/  
```

### 🚀 **Keep practicing, keep improving!**

![Coding](https://img.shields.io/badge/Keep%20Coding-🔥-red?style=for-the-badge)
![Learning](https://img.shields.io/badge/Keep%20Learning-📚-blue?style=for-the-badge)
![Growing](https://img.shields.io/badge/Keep%20Growing-🌱-green?style=for-the-badge)

⭐ **Remember: Every expert was once a beginner!** ⭐

</div>
