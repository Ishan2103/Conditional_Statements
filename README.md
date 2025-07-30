# 🔬 C++ Experiment (DATATYPES)
## Study and Implementation of Data Types & Storage Classes

---

### 🎯 Aim

- Understand and utilize different C++ data types  
- Explore storage classes: `auto`, `static`, `extern`, `register`  
- Learn about variable scope, lifetime, and memory allocation using `sizeof`

---

### 📚 Learning Objectives

- Apply different storage classes to observe how they behave  
- Understand the scope, storage, and default values of each storage class  
- Use the `sizeof()` operator to measure memory allocation  

---

### 🧾 Program Summary

- A user-defined function is used to illustrate variable behavior with different storage classes  
- The `main()` function invokes the user-defined function multiple times  
- The `sizeof` operator is used to determine memory usage of different data types  

---

### 🛠️ Tools & Concepts Used

- **Storage Classes:** `auto`, `static`, `extern`, `register`  
- **Data Types:** `int`, `float`, `char`, `bool`, `short`, `long`, `double`  
- **Operator Used:** `sizeof()` to analyze memory usage  

---

### 📚 Theory

#### Data Types in C++

| Data Type | Typical Size (Bytes) | Example           |
|-----------|----------------------|-------------------|
| `int`     | 4                    | `int x = 5;`      |
| `float`   | 4                    | `float f = 3.2;`  |
| `double`  | 8                    | `double d = 2.71;`|
| `char`    | 1                    | `char c = 'A';`   |
| `bool`    | 1                    | `bool b = true;`  |
| `short`   | 2                    | `short s = 10;`   |
| `long`    | 8                    | `long l = 100000;`|

> ⚠️ *Note: Sizes may vary depending on compiler/system (32-bit vs 64-bit).*

#### `sizeof()` Operator

Used to determine memory usage of a variable or data type. Important for memory-efficient and system-level programming.

---

### 🗂️ Storage Classes in C++

#### `auto`

- Default for local variables  
- **Scope:** Local  
- **Lifetime:** Ends with block  
- **Default value:** Garbage (undefined)  

#### `static`

- Retains value across function calls  
- **Scope:** Local  
- **Lifetime:** Entire program  
- **Default value:** 0  

#### `extern`

- Refers to a global variable declared elsewhere  
- **Scope:** Global  
- Used for sharing variables between files  

#### `register`

- Suggests storing variable in a CPU register  
- **Scope:** Local  
- Cannot be accessed using `&`  
- May improve speed (compiler-dependent)

---

### ✅ Conclusion

- Demonstrated how storage classes affect variable **scope**, **lifetime**, and **initialization**  
- Reinforced understanding of C++ **data types** and **memory usage** using `sizeof()`  
- Highlighted importance of choosing correct data types and storage classes for better **performance** and **resource management**

---
