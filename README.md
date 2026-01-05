# Monotonic Stack Patterns in C++

A structured and well-tested collection of **monotonic stack patterns** implemented in **C++**, covering all core variations used in **competitive programming** and **technical interviews**.

This repository focuses on **clarity of logic**, **correct stack conditions**, and **proper answer ownership**, which are the most common sources of mistakes in monotonic stack problems.

---

## 📌 What This Repository Covers

The following monotonic stack patterns are implemented using **index-based stacks**:

### 🔹 Greater Element Patterns (Monotonic Decreasing Stack)
- Next Greater Element to the Right (NGR)
- Next Greater Element to the Left (NGL / Previous Greater)

### 🔹 Smaller Element Patterns (Monotonic Increasing Stack)
- Next Smaller Element to the Right (NSR)
- Next Smaller Element to the Left (NSL / Previous Smaller)

### 🔹 Key Use-Cases
- Nearest greater / smaller elements
- Stock Span problem
- Histogram problems (basis)
- Subarray maximum / minimum contribution (foundation)
- Interval and range-based optimizations

---

## 🧠 Core Concepts Emphasized

- Choosing **monotonic increasing vs decreasing** stack
- Correct **pop conditions** (`<`, `<=`, `>`, `>=`)
- Correct **answer ownership** (`ans[i]` vs `ans[st.top()]`)
- Handling **duplicate values** safely
- Writing **O(N)** solutions instead of brute force

---

## ⚙️ Compilation & Usage

Compile using any standard C++ compiler:

```bash
g++ -std=gnu++17 filename.cpp -o output
./output
```
