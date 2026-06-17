# DAY 2: Functions and Basic Concepts in C

Welcome to Day 2 of the C Programming journey! This folder explores the core concepts of functions, user input/output, working with the standard math library, translating mathematical formulas into code, and using conditional statements to verify arithmetic relationships.

---

## Table of Contents
1. [Topics Covered](#topics-covered)
   - [User Input and Output (`printf` & `scanf`)](#1-user-input-and-output)
   - [Variables, Operators, and standard Math functions (`math.h`)](#2-variables-operators-and-the-math-library)
   - [C Functions: Declarations, Definition, and Parameters](#3-c-functions-definition-parameters-and-calls)
   - [Solving Equations using Functions](#4-solving-mathematical-equations)
   - [Conditional Statements (`if-else`) & Remainder Verification](#5-conditional-logic-and-the-division-algorithm)
2. [File Directory Walkthrough](#file-directory-walkthrough)
   - [taking_data.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/taking_data.c)
   - [operators_operands.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/operators_operands.c)
   - [calc.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/calc.c)
   - [equatiom.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/equatiom.c)
   - [reminder_theorem.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/reminder_theorem.c)
3. [Practice Problems](#practice-problems)
   - [ans.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/ans.c)
   - [equation_solve.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/equation_solve.c)
   - [memory.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/memory.c)
   - [pythagores.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/pythagores.c)
4. [Day 2 Practice Questions & Exercises](#day-2-practice-questions--exercises)

---

## Topics Covered

### 1. User Input and Output
* **`printf()`**: Used to print formatted output to the console. It utilizes placeholders called **format specifiers** (e.g., `%d` for integers, `%f` for floats/doubles, and `%lf` for double precision floating-point numbers).
* **`scanf()`**: Used to read formatted input from the console. It requires:
  1. A format specifier string (e.g., `"%d%d"` to read two integers).
  2. The address-of operator (`&`) prefixed to variable names (e.g., `&a`, `&b`). The `&` operator tells `scanf` where the variable is located in memory so it can directly store the user's input there.

### 2. Variables, Operators, and the Math Library
* **Variables and Initialization**: Variables must be declared with a data type (such as `int`, `float`, or `double`) before they can be used. They can be initialized at declaration or assigned a value later.
* **`<math.h>` Standard Library**: Provides common mathematical operations.
  - `pow(base, exponent)`: Returns the value of $base^{exponent}$. Note that `pow` expects arguments of type `double` and returns a `double`.
  * *Important Note on Types*: Assigning the return value of `pow()` (which is a `double`) to an `int` variable (e.g., `int sum = pow(...)`) will cause implicit type conversion, truncating any fractional part.
* **Basic Operators**: 
  - Assignment operator: `=`
  - Arithmetic operators: `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division).

### 3. C Functions: Definition, Parameters, and Calls
Functions break down complex problems into smaller, reusable blocks of code.
* **Function Structure**:
  ```c
  return_type function_name(parameter_type1 parameter1, parameter_type2 parameter2) {
      // function body
      // return statement (if return_type is not void)
  }
  ```
* **Return Type**: If a function does not return any value, its return type is declared as `void`.
* **Parameters vs. Arguments**:
  - **Parameters**: The variables defined in the function's declaration/definition (e.g., `double a, double b`).
  - **Arguments**: The actual values passed to the function when calling it (e.g., `addition(10.25, 52.63)`).
* **Float Precision Formatting**: In `printf()`, we can limit the decimal places of a floating-point number using `%.Nf` where `N` is the number of decimal digits (e.g., `%.4f` prints a float with 4 decimal places).

### 4. Solving Mathematical Equations
Functions make it easy to evaluate mathematical expressions at different data points. Instead of duplicating math formulas, we pass the independent variables as function parameters, calculate the expression value using library calls like `pow()`, and print or return the result. This simplifies evaluating expressions like $2x^2 + 3x - 2$ or $2x^3 + 2x^2 + 3x - 10$ across multiple input values.

### 5. Conditional Logic and the Division Algorithm
* **`if-else` Statements**: Allow decision-making in programs based on conditions.
  ```c
  if (condition) {
      // executes if condition is true
  } else {
      // executes if condition is false
  }
  ```
* **Comparison Operator (`==`)**: Used to check equality between two values. Do not confuse it with the assignment operator (`=`).
* **Division Verification (Remainder Theorem / Division Algorithm)**: 
  $$\text{Dividend} = (\text{Divisor} \times \text{Quotient}) + \text{Remainder}$$
  We can use standard variables to store each component, compute the right-hand side, and use an `if-else` condition to verify if the relation holds true.

---

## File Directory Walkthrough

### 1. [taking_data.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/taking_data.c)
* **Concepts**: Declaring integer variables, reading multiple variables using `scanf()`, performing addition, and displaying results.
* **Code Summary**:
  ```c
  int a, b;
  scanf("%d%d", &a, &b);
  int sum = a + b;
  printf("Sum is : %d", sum);
  ```

### 2. [operators_operands.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/operators_operands.c)
* **Concepts**: Using the `<math.h>` library, variables initialization, the `pow()` function, and printing integer types using format specifiers.
* **Code Summary**:
  ```c
  int sum = 0;
  sum = pow(23, 6); // Note: pow returns double, converted implicitly to int
  printf("%d", sum);
  ```

### 3. [calc.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/calc.c)
* **Concepts**: Declaring arithmetic functions (`addition`, `sub`, `multiplication`, `div`), using parameter types `float` and `double`, using `void` return types, and formatting output precision using `%.4f`.
* **Code Summary**:
  ```c
  void div(double a, double b) {
      printf("%.4f", a / b); // Output formatted to 4 decimal places
  }
  ```

### 4. [equatiom.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/equatiom.c)
* **Concepts**: Translating polynomials/equations into C expressions using the `pow()` library function, and evaluating the equations with different argument inputs.
* **Equations Covered**:
  - `eqn1(x)`: $2x^2 + 3x - 2$
  - `eqn2(x)`: $2x^2 - x + 1$
  - `eqn3(x)`: $2x^3 + 2x^2 + 3x - 10$

### 5. [reminder_theorem.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/reminder_theorem.c)
* **Concepts**: Passing multiple arguments to a verification function, calculating expressions, and comparing results using `if-else` control flow to verify division math.
* **Code Summary**:
  ```c
  void reminder_theorem(double actual_divisable, double divisor, double res, double rem) {
      double divisable = (divisor * res) + rem;
      if (actual_divisable == divisable) {
          printf("The division is true");
      } else {
          printf("The division is false");
      }
  }
  ```

---

## Practice Problems

This folder ([01_practice_problems](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems)) contains practical implementations and solutions demonstrating functions, mathematics in C, and pointer/memory addressing.

### 1. [ans.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/ans.c)
* **Concepts**: Character data types, type casting, and ASCII values.
* **Summary**: Converts a character variable `a` (initialized to `'R'`) to its corresponding integer ASCII representation using `(int)` type casting, then prints the output.
* **Code Highlight**:
  ```c
  char a = 'R';
  printf("%d", (int)a); // Prints ASCII value (82)
  ```

### 2. [equation_solve.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/equation_solve.c)
* **Concepts**: Translating algebraic expressions, using `<math.h>`'s `pow()` function, and modular function design.
* **Summary**: Evaluates the quadratic expression $x^2 - 2x + 3$ using a custom function `void equation(double x)` and prints the result for input parameters $3$ and $2.0$.
* **Code Highlight**:
  ```c
  void equation (double x ) {
      double sol = pow(x,2) - (2*x) + 3 ;
      printf("The solution of the equation is : %f\n", sol);
  }
  ```

### 3. [memory.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/memory.c)
* **Concepts**: Pointers, addresses, and variable storage in RAM.
* **Summary**: Prints the physical memory address where the integer variable `a` is stored, using the address-of operator `&` and the `%p` format specifier.
* **Code Highlight**:
  ```c
  int a = 10;
  printf("%p", (void*)&a); // Prints the memory address of variable a
  ```

### 4. [pythagores.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/pythagores.c)
* **Concepts**: Right-angle triangle calculations, Pythagorean theorem formulas, and `<math.h>` functions (`sqrt`, `pow`).
* **Summary**: Implements three separate functions to calculate the hypotenuse, height, or base of a right-angled triangle, given the other two dimensions.
* **Code Highlight**:
  ```c
  void hypotenuse (double a, double b) {
      double hyp = sqrt(pow(a,2) + pow(b,2));
      printf("The length of the hypotenuse is : %f\n", hyp);
  }
  ```

---

## Day 2 Practice Questions & Exercises

### Part A: Multiple Choice Questions

#### 1. What will be the output of `printf("%.2f", 5.6789);`?
* A) `5.67`
* B) `5.68`
* C) `5.678900`
* D) `5.7`

#### 2. Which operator is used by `scanf` to direct input to the memory address of a variable?
* A) `*` (dereference)
* B) `%` (modulo)
* C) `&` (address-of)
* D) `&&` (logical AND)

#### 3. What library header must you include to use functions like `pow()` and `sqrt()`?
* A) `<stdio.h>`
* B) `<stdlib.h>`
* C) `<conio.h>`
* D) `<math.h>`

#### 4. If a function is declared with a `void` return type, what does it mean?
* A) It returns `0` by default.
* B) It does not return any value.
* C) It can only accept integer parameters.
* D) It returns a null pointer.

#### 5. What is the difference between `=` and `==` in C?
* A) `=` is used for comparison, `==` is used for assignment.
* B) `=` is used for assignment, `==` is used for equality comparison.
* C) They are interchangeable.
* D) `=` is for integer comparison, `==` is for float comparison.

---

### Part B: Code Debugging Challenges

#### 1. Find and correct the error in the following function:
```c
void multiply(int a, int b) {
    int result = a * b;
    return result;
}
```

#### 2. Find and correct the error in the input block below:
```c
int num;
printf("Enter a number: ");
scanf("%d", num);
```

---

### Part C: Programming Exercises

1. **Custom Polynomial Evaluator**:
   Write a program with a function named `evaluate_expression(double x)` that computes and returns the value of:
   $$y = 5x^3 - 4x^2 + 2x - 15$$
   In the `main` function, prompt the user for a value of `x`, call the function, and print the resulting value of `y` rounded to 3 decimal places.

2. **Calculator Extensions**:
   Extend the program in [calc.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/calc.c) by adding a remainder function `void find_remainder(int a, int b)` using the modulo operator `%` that prints the remainder when `a` is divided by `b`. Remember that modulo operator only works with integers.

3. **Odd or Even Verifier**:
   Write a custom function `void check_odd_even(int number)` that prints whether a number is `Even` or `Odd` using conditional statements (`if-else`) and the modulo operator `%`. Call this function inside `main` using values entered by the user.

---

<details>
<summary><b>Click here to show Answers for Part A & B</b></summary>

### Answers to Part A:
1. **B** (`%.2f` rounds the value to two decimal places, so `5.6789` becomes `5.68`).
2. **C** (The address-of operator `&` passes the memory address of the variable to `scanf`).
3. **D** (`<math.h>` declares mathematical functions like `pow()`).
4. **B** (`void` means the function does not return a value).
5. **B** (`=` is assignment, `==` checks for equality).

### Answers to Part B:
1. **Error**: The function has a return type of `void`, but it contains a `return result;` statement.
   **Fix**: Change the return type from `void` to `int`.
   ```c
   int multiply(int a, int b) {
       return a * b;
   }
   ```
2. **Error**: The `scanf()` statement is missing the address-of operator `&` for `num`.
   **Fix**: Add the `&` operator before `num`.
   ```c
   scanf("%d", &num);
   ```
</details>
