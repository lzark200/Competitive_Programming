# 🔍 String Searching in C++

## 📖 Overview
This guide covers different methods to search for characters in strings using C++.

---

## 1️⃣ Using `std::string::find`

The `std::string` class provides a built-in `.find()` member function for searching characters or substrings.

### 📝 Basic Usage

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello World!";

    // find first occurrence of 'o'
    size_t pos = text.find('o');

    if (pos != string::npos) {
        cout << "'o' found at index: " << pos << endl;
    } else {
        cout << "Character not found" << endl;
    }
    
    return 0;
}
```

### ✨ Key Features
- Returns the **index** where the character was found
- Returns `string::npos` if not found
- Simple and intuitive for string-specific searches

---

## 2️⃣ Using `std::find` from `<algorithm>`

The generic STL algorithm `std::find` works on any sequence, including `std::string` (since it behaves like a container of `char`).

### 📝 Implementation

```cpp
#include <iostream>
#include <string>
#include <algorithm> // for std::find
using namespace std;

int main() {
    string text = "Hello World!";

    auto it = find(text.begin(), text.end(), 'o');

    if (it != text.end()) {
        cout << "'o' found at index: " << distance(text.begin(), it) << endl;
    } else {
        cout << "Character not found" << endl;
    }
    
    return 0;
}
```

### ✨ Key Features
- Returns an **iterator** to the found element
- Generic algorithm that works with other containers
- More flexible for advanced use cases

---

## 3️⃣ Finding First vs Last Occurrence

### 🔍 Methods Available

| Method | Purpose | Example |
|--------|---------|---------|
| `find()` | First occurrence | `text.find('a')` |
| `rfind()` | Last occurrence | `text.rfind('a')` |

### 📝 Example Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "banana";
    
    cout << "First 'a': " << s.find('a') << endl;   // Output: 1
    cout << "Last 'a': " << s.rfind('a') << endl;   // Output: 5
    
    return 0;
}
```

---

## 🎯 Rule of Thumb

| Use Case | Recommended Method |
|----------|-------------------|
| **String-only searching** | `std::string::find` |
| **Generic algorithm** (works with `vector<char>`, etc.) | `std::find` |
| **Last occurrence** | `std::string::rfind` |
| **Advanced iterator operations** | `std::find` |

---

## 🔍 Understanding `std::string::npos`

### 📋 Definition
- `std::string::npos` is a **constant of type** `size_t` (unsigned integer)
- Represents **"not found"** in string search functions
- Defined as the largest possible value of `size_t`

### 🔧 Internal Implementation

```cpp
static const size_t npos = -1;
```

> **Note**: Since `size_t` is unsigned, `-1` wraps around to the maximum possible value.

### 💻 Example Values
- **32-bit system**: `npos = 4294967295`
- **64-bit system**: `npos = 18446744073709551615`

### 📝 Usage Example

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "hello";

    size_t pos = text.find('z');  // 'z' not in "hello"

    if (pos == string::npos) {
        cout << "Character not found!" << endl;
    } else {
        cout << "Found at index: " << pos << endl;
    }
    
    return 0;
}
```

**Output:**
```
Character not found!
```

### ✅ Key Points about `npos`
- **Type**: `size_t` (unsigned integer type)
- **Semantic meaning**: "not found" in string searching context
- **Value**: Largest possible `size_t` value
- **Usage**: Always compare with `string::npos` when checking search results

---

## 🛠️ Common Patterns

### Pattern 1: Safe Character Search
```cpp
size_t pos = text.find('x');
if (pos != string::npos) {
    cout << "Found at: " << pos << endl;
} else {
    cout << "Not found!" << endl;
}
```

### Pattern 2: Multiple Searches
```cpp
string text = "programming";
for (char c : {'r', 'a', 'm'}) {
    size_t pos = text.find(c);
    cout << "'" << c << "' -> " << 
        (pos != string::npos ? to_string(pos) : "not found") << endl;
}
```

### Pattern 3: Generic Algorithm
```cpp
auto it = find(text.begin(), text.end(), 'x');
bool found = (it != text.end());
```

---

## 📚 Summary

- Use `string::find()` for simple string searching
- Use `std::find()` for generic container operations  
- Always check against `string::npos` for "not found" cases
- `rfind()` gives you the last occurrence
- `npos` is the largest `size_t` value, semantically meaning "not found"
