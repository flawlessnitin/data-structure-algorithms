# Week 01 – Basics of Programming (C++)

***

## 1. Understanding Computers

* A computer is a machine that **cannot think independently**.
* It is considered **dumb** in the sense that it has **no intelligence of its own**.
* It only works when we provide it with **proper and clear instructions**.
* The quality of output depends entirely on the **accuracy of instructions** given.

***

## 2. What is Programming?

* **Programming** is the process of giving **clear and logical instructions** to a computer.
* These instructions tell the computer **what to do and how to do it**.
* The main goal of programming is to **solve problems** and **automate tasks** using a computer.

***

## 3. Introduction to C++

* **C++** is a high-level, general-purpose programming language.
* It is widely used for:

  * System software
  * Application development
  * Game development
  * Competitive programming
* C++ is known for its **performance**, **control over memory**, and **object-oriented features**.

***

## 4. Header Files and `<iostream>`

* `#include <iostream>` is used to include the **input-output stream library**.
* It allows the use of:

  * `cin` for input
  * `cout` for output
* Without including `<iostream>`, we cannot use standard input/output functions.

***

## 5. Output in C++: `cout` and `endl`

* `cout` is used to **display output** on the screen.
* Example:

  ```C++
  cout << "Hello World";
  ```
* `endl` is used to **move the cursor to a new line** and flush the output buffer.
* Example:

  ```C++
  cout << "Hello" << endl;
  ```

***

## 6. Brackets in C++

* **Opening bracket** **`{`** and **closing bracket** **`}`** define a **block of code**.
* They are used in:

  * Functions
  * Loops
  * Conditional statements
* Every opening bracket must have a **matching closing bracket**.

***

## 7. Namespaces and `std`

* Most standard C++ features belong to the **standard namespace** **`std`**.
* Without using namespace:

  ```C++
  std::cout << "Hello";
  ```
* To avoid writing `std::` repeatedly, we use:

  ```C++
  using namespace std;
  ```
* This allows direct use of `cout`, `cin`, `endl`, etc.

***

## 8. Case Sensitivity in C++

* C++ is a **case-sensitive language**.
* This means:

  * `main` and `Main` are different
  * `cout` and `Cout` are different
* Always use the **correct case** while writing keywords and variables.

***

## 9. Strings and Double Quotes

* A **string literal** must be written inside **double quotes** **`""`**.
* Example:

  ```C++
  cout << "Welcome to C++";
  ```
* Writing text without double quotes will cause a **compile-time error**.

***

## 10. Arithmetic Operators

* Arithmetic operators are used to perform **mathematical operations**.
* Common operators:

  * `+` Addition
  * `-` Subtraction
  * `*` Multiplication
  * `/` Division
  * `%` Modulus (remainder)

***

## 11. Integer Division Rule

* If both operands are **integers**, the result of division is always an **integer**.
* The **decimal part is discarded** (not rounded).
* Example:

  ```C++
  int a = 5 / 2;   // Result will be 2, not 2.5
  ```
* To get a decimal result, at least one operand must be **float or double**.

***

## 12. Variables in C++

* A **variable** is a named memory location used to **store data**.
* The value stored in a variable can **change during program execution**.

### Why Do We Need Variables?

* To store input values
* To hold intermediate results
* To reuse data multiple times
* To make programs **dynamic and flexible**

Without variables, programs would only work with **fixed values** and could not solve real problems.

### How to Create a Variable

* Syntax:

  ```C++
  data_type variable_name;
  ```
* Example:

  ```C++
  int age;
  age = 20;
  ```
* You can also declare and initialize together:

  ```C++
  int marks = 85;
  ```

***

## 13. Data Types in C++

* A **data type** specifies:

  * What kind of data a variable can store
  * How much memory is allocated
  * What operations are allowed

Common basic data types:

* `int`    → stores whole numbers
* `long long` → stores larger numbers than int.
* `float`  → stores decimal numbers (single precision)
* `double` → stores decimal numbers (double precision)
* `char`   → stores a single character
* `bool`   → stores true or false

***

## 14. Difference Between `float` and `double`

| Feature       | float            | double             |
| ------------- | ---------------- | ------------------ |
| Precision     | Single precision | Double precision   |
| Size (approx) | 4 bytes          | 8 bytes            |
| Accuracy      | Less accurate    | More accurate      |
| Speed         | Slightly faster  | Slightly slower    |
| Usage         | Less preferred   | Most commonly used |

* `float` can store about **6–7 decimal digits** accurately.
* `double` can store about **15–16 decimal digits** accurately.

### Example:

```C++
float a = 3.1415926;
double b = 3.141592653589793;
```

***

## Summary

* Variables are used to **store and manipulate data**.
* Data types define the **type and size of data** a variable can hold.
* `double` is preferred over `float` when **higher precision** is required.

