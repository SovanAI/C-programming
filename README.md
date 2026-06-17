# C Programming Learning Journey

Welcome to the C Programming learning repository! This workspace tracks core programming concepts, daily progress, and problem-solving exercises in C.

---

## 📂 Repository Structure & Table of Contents

* **[Day 2: Functions & Basic Concepts](#day-2-functions--basic-concepts-in-c)**
  * [Topics Covered](#day-2-topics-covered)
  * [File Walkthrough (`01_functions`)](#day-2-file-walkthrough)
  * [Practice Problems (`01_practice_problems`)](#day-2-practice-problems)
  * [Questions & Exercises](#day-2-practice-questions--exercises)
* **[Day 3: Loops, Increment/Decrement, & Strings](#day-3-loops-incrementdecrement-operators--strings)**
  * [Topics Covered](#day-3-topics-covered)
  * [File Walkthrough (`02_loops_probelems`)](#day-3-file-walkthrough)
  * [Practice Questions & Exercises](#day-3-practice-questions--exercises)

---

## Day 2: Functions & Basic Concepts in C

This folder explores the core concepts of functions, user input/output, working with the standard math library, translating mathematical formulas into code, and using conditional statements to verify arithmetic relationships.

### Day 2 Topics Covered

#### 1. User Input and Output
* **`printf()`**: Used to print formatted output to the console. It utilizes placeholders called **format specifiers** (e.g., `%d` for integers, `%f` for floats/doubles, and `%lf` for double precision floating-point numbers).
* **`scanf()`**: Used to read formatted input from the console. It requires:
  1. A format specifier string (e.g., `"%d%d"` to read two integers).
  2. The address-of operator (`&`) prefixed to variable names (e.g., `&a`, `&b`). The `&` operator tells `scanf` where the variable is located in memory so it can directly store the user's input there.

#### 2. Variables, Operators, and the Math Library
* **Variables and Initialization**: Variables must be declared with a data type (such as `int`, `float`, or `double`) before they can be used. They can be initialized at declaration or assigned a value later.
* **`<math.h>` Standard Library**: Provides common mathematical operations.
  - `pow(base, exponent)`: Returns the value of $base^{exponent}$. Note that `pow` expects arguments of type `double` and returns a `double`.
  * *Important Note on Types*: Assigning the return value of `pow()` (which is a `double`) to an `int` variable (e.g., `int sum = pow(...)`) will cause implicit type conversion, truncating any fractional part.
* **Basic Operators**: 
  - Assignment operator: `=`
  - Arithmetic operators: `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division).

#### 3. C Functions: Definition, Parameters, and Calls
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

#### 4. Solving Mathematical Equations
Functions make it easy to evaluate mathematical expressions at different data points. Instead of duplicating math formulas, we pass the independent variables as function parameters, calculate the expression value using library calls like `pow()`, and print or return the result. This simplifies evaluating expressions like $2x^2 + 3x - 2$ or $2x^3 + 2x^2 + 3x - 10$ across multiple input values.

#### 5. Conditional Logic and the Division Algorithm
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

### Day 2 File Walkthrough

#### 1. [taking_data.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/taking_data.c)
* **Concepts**: Declaring integer variables, reading multiple variables using `scanf()`, performing addition, and displaying results.
* **Code Summary**:
  ```c
  int a, b;
  scanf("%d%d", &a, &b);
  int sum = a + b;
  printf("Sum is : %d", sum);
  ```

#### 2. [operators_operands.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/operators_operands.c)
* **Concepts**: Using the `<math.h>` library, variables initialization, the `pow()` function, and printing integer types using format specifiers.
* **Code Summary**:
  ```c
  int sum = 0;
  sum = pow(23, 6); // Note: pow returns double, converted implicitly to int
  printf("%d", sum);
  ```

#### 3. [calc.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/calc.c)
* **Concepts**: Declaring arithmetic functions (`addition`, `sub`, `multiplication`, `div`), using parameter types `float` and `double`, using `void` return types, and formatting output precision using `%.4f`.
* **Code Summary**:
  ```c
  void div(double a, double b) {
      printf("%.4f", a / b); // Output formatted to 4 decimal places
  }
  ```

#### 4. [equatiom.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/equatiom.c)
* **Concepts**: Translating polynomials/equations into C expressions using the `pow()` library function, and evaluating the equations with different argument inputs.
* **Equations Covered**:
  - `eqn1(x)`: $2x^2 + 3x - 2$
  - `eqn2(x)`: $2x^2 - x + 1$
  - `eqn3(x)`: $2x^3 + 2x^2 + 3x - 10$

#### 5. [reminder_theorem.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/reminder_theorem.c)
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

### Day 2 Practice Problems

This folder ([01_practice_problems](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems)) contains practical implementations and solutions demonstrating functions, mathematics in C, and pointer/memory addressing.

#### 1. [ans.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/ans.c)
* **Concepts**: Character data types, type casting, and ASCII values.
* **Summary**: Converts a character variable `a` (initialized to `'R'`) to its corresponding integer ASCII representation using `(int)` type casting, then prints the output.
* **Code Highlight**:
  ```c
  char a = 'R';
  printf("%d", (int)a); // Prints ASCII value (82)
  ```

#### 2. [equation_solve.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/equation_solve.c)
* **Concepts**: Translating algebraic expressions, using `<math.h>`'s `pow()` function, and modular function design.
* **Summary**: Evaluates the quadratic expression $x^2 - 2x + 3$ using a custom function `void equation(double x)` and prints the result for input parameters $3$ and $2.0$.
* **Code Highlight**:
  ```c
  void equation (double x ) {
      double sol = pow(x,2) - (2*x) + 3 ;
      printf("The solution of the equation is : %f\n", sol);
  }
  ```

#### 3. [memory.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/memory.c)
* **Concepts**: Pointers, addresses, and variable storage in RAM.
* **Summary**: Prints the physical memory address where the integer variable `a` is stored, using the address-of operator `&` and the `%p` format specifier.
* **Code Highlight**:
  ```c
  int a = 10;
  printf("%p", (void*)&a); // Prints the memory address of variable a
  ```

#### 4. [pythagores.c](file:///d:/Desktop/C_Programming/C-programming/01_practice_problems/pythagores.c)
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

### Day 2 Practice Questions & Exercises

#### Part A: Multiple Choice Questions

##### 1. What will be the output of `printf("%.2f", 5.6789);`?
* A) `5.67`
* B) `5.68`
* C) `5.678900`
* D) `5.7`

##### 2. Which operator is used by `scanf` to direct input to the memory address of a variable?
* A) `*` (dereference)
* B) `%` (modulo)
* C) `&` (address-of)
* D) `&&` (logical AND)

##### 3. What library header must you include to use functions like `pow()` and `sqrt()`?
* A) `<stdio.h>`
* B) `<stdlib.h>`
* C) `<conio.h>`
* D) `<math.h>`

##### 4. If a function is declared with a `void` return type, what does it mean?
* A) It returns `0` by default.
* B) It does not return any value.
* C) It can only accept integer parameters.
* D) It returns a null pointer.

##### 5. What is the difference between `=` and `==` in C?
* A) `=` is used for comparison, `==` is used for assignment.
* B) `=` is used for assignment, `==` is used for equality comparison.
* C) They are interchangeable.
* D) `=` is for integer comparison, `==` is for float comparison.

#### Part B: Code Debugging Challenges

##### 1. Find and correct the error in the following function:
```c
void multiply(int a, int b) {
    int result = a * b;
    return result;
}
```

##### 2. Find and correct the error in the input block below:
```c
int num;
printf("Enter a number: ");
scanf("%d", num);
```

#### Part C: Programming Exercises

1. **Custom Polynomial Evaluator**:
   Write a program with a function named `evaluate_expression(double x)` that computes and returns the value of:
   $$y = 5x^3 - 4x^2 + 2x - 15$$
   In the `main` function, prompt the user for a value of `x`, call the function, and print the resulting value of `y` rounded to 3 decimal places.

2. **Calculator Extensions**:
   Extend the program in [calc.c](file:///d:/Desktop/C_Programming/C-programming/01_functions/calc.c) by adding a remainder function `void find_remainder(int a, int b)` using the modulo operator `%` that prints the remainder when `a` is divided by `b`. Remember that modulo operator only works with integers.

3. **Odd or Even Verifier**:
   Write a custom function `void check_odd_even(int number)` that prints whether a number is `Even` or `Odd` using conditional statements (`if-else`) and the modulo operator `%`. Call this function inside `main` using values entered by the user.

<details>
<summary><b>💡 Click here to show Answers for Day 2 Exercises</b></summary>

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

---

## Day 3: Loops, Increment/Decrement Operators & Strings

This directory ([02_loops_probelems](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems)) explores iterating control flows (`while` loops), pre- and post-increment/decrement operators, string input parsing, and custom print functions.

### Day 3 Topics Covered

#### 1. Increment & Decrement Operators (`++`, `--`)
In C, the unary increment (`++`) and decrement (`--`) operators modify variables by 1. They can be applied in two ways:
* **Prefix (`++x`, `--x`)**: Increments or decrements the variable **first**, then evaluates the expression.
* **Postfix (`x++`, `x--`)**: Evaluates the expression with the **current** value first, then increments or decrements the variable.

> [!WARNING]
> **Sequence Points & Undefined Behavior (UB):**
> Writing expressions like `res = i + ++i;` or `res = i++ + ++i;` results in **Undefined Behavior** under the ISO C standard because a single variable is modified multiple times (or read and modified) without an intervening sequence point. Different compilers, optimization levels, or CPU architectures can produce different values. Always separate modifications into distinct instructions to ensure portability.

#### 2. Loop Control Structures (`while` loops)
A `while` loop runs code blocks repeatedly as long as a condition evaluates to true:
```c
while (condition) {
    // Loop body
    // Update expression (e.g., --i)
}
```
* **Loop Variable Update**: To prevent an **infinite loop**, the control variable must be modified within the loop body such that the loop condition eventually evaluates to `false` (e.g., counting down using `--i` or incrementing using `i++`).

#### 3. Handling Strings with Spaces securely
* **Standard `scanf("%s", ...)`**: Stops reading input at the first space, tab, or newline character.
* **Scanset `scanf("%[^\n]", name)`**: Instructs `scanf` to read all characters (including spaces) *until* a newline (`\n`) is encountered.
* **Buffer Overflow Protection**:
  > [!CAUTION]
  > Using `scanf("%99[^\n]", name)` when `name` is declared as `char name[20]` is unsafe! If the user inputs more than 19 characters, it overflows the array boundary, corrupting adjacent stack memory. Always restrict the scanset width to `sizeof(buffer) - 1`. For `char name[20]`, use:
  > ```c
  > scanf("%19[^\n]", name);
  > ```

---

### Day 3 File Walkthrough

#### 1. [condition.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/condition.c)
* **Concepts**: Unary prefix/postfix operator evaluation inside expressions.
* **Summary**: Initializes variables and computes their summed value using pre-increment, post-increment, and pre-decrement operators.
* **Code Highlight**:
  ```c
  int i = 0, j = 5, k = 9;
  int res = (i++) + (++j) + (--k); // 0 + 6 + 8 = 14
  printf("%d", res); // Prints: 14
  ```

#### 2. [details.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/details.c)
* **Concepts**: String arguments (character arrays) in function parameters.
* **Summary**: Passes multiple strings and an integer to a details displayer function `info()`.
* **Code Highlight**:
  ```c
  void info ( char name[], char college [], int roll ) {
      printf("Student's Name : %s\n", name);
      printf("Student's college name : %s \n", college);
      printf("Student's Roll no : %d \n", roll);
  }
  ```

#### 3. [increment.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/increment.c)
* **Concepts**: Complex unary operations and compiler evaluation precedence.
* **Summary**: Demonstrates compound expression arithmetic using `i`, `j`, and `k` with prefix increments and decrements.
* **Code Highlight**:
  ```c
  int i = 6, j = 9, k = 15;
  int res = i + j + 1 + (++i) + (--j) - (++j) - (++k);
  ```

#### 4. [infinite_loop.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/infinite_loop.c)
* **Concepts**: Loop termination conditions, decrement operators inside loop scopes.
* **Summary**: Counts down from 9 to 0 using a `while` loop, avoiding an infinite loop by decrementing the control variable `i`.
* **Code Highlight**:
  ```c
  int i = 9;
  while (i >= 0) {
      printf("I am running current val : %d \n ", i);
      --i;
  }
  ```

#### 5. [loops.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/loops.c)
* **Concepts**: Loop structure comparison and implementation.
* **Summary**: Duplicate loop code showing structured decrement countdown mechanics.

#### 6. [string.c](file:///d:/Desktop/C_Programming/C-programming/02_loops_probelems/string.c)
* **Concepts**: Reading string inputs containing spaces using scansets.
* **Summary**: Demonstrates how to fetch an input line containing spaces using `[^\n]` inside `scanf`.
* **Code Highlight**:
  ```c
  char name[20];
  scanf("%99[^\n]", name); // Note: Safe practice is to use %19[^\n] to prevent stack overflow
  printf("%s", name);
  ```

---

### Day 3 Practice Questions & Exercises

#### Part A: Multiple Choice Questions

##### 1. What will be the value of `res` after this code block executes?
```c
int x = 5;
int res = ++x + 2;
```
* A) `7`
* B) `8`
* C) `6`
* D) Undefined

##### 2. Which format specifier configuration allows reading spaces in `scanf`?
* A) `%s`
* B) `%c`
* C) `%[^\n]`
* D) `%lf`

##### 3. To securely read a string into a buffer declared as `char str[50]`, what is the best practice scanset call?
* A) `scanf("%49[^\n]", str);`
* B) `scanf("%50[^\n]", str);`
* C) `scanf("%[^\n]", str);`
* D) `scanf("%s", str);`

#### Part B: Code Debugging Challenges

##### 1. Find and correct the error in this countdown loop:
```c
int count = 5;
while (count > 0) {
    printf("%d\n", count);
    // Missing step?
}
```

##### 2. Find and correct the buffer size mismatch in this code:
```c
char major[15];
printf("Enter your major: ");
scanf("%29[^\n]", major);
```

#### Part C: Programming Exercises

1. **Robust Details Reader**:
   Create a program that prompts the user for their name (up to 30 characters), college name (up to 50 characters), and roll number. Store these in variables, and print them out using the `info()` format from `details.c`. Make sure the input scan limits prevent buffer overflows.

2. **Sum of Natural Numbers**:
   Write a program that prompts the user for a positive integer $N$, and calculates the sum of all natural numbers from $1$ to $N$ using a `while` loop (e.g. $\text{sum} = 1 + 2 + \dots + N$).

---

<details>
<summary><b>💡 Click here to show Answers for Day 3 Exercises</b></summary>

### Answers to Part A:
1. **B** (Prefix `++x` changes `x` to `6` first, then computes `6 + 2 = 8`).
2. **C** (Scanset `%[^\n]` reads everything until a newline, which includes space characters).
3. **A** (Use `sizeof(buffer) - 1` to leave room for the terminating null character `\0`).

### Answers to Part B:
1. **Error**: The control variable `count` is never updated inside the loop, creating an infinite loop.
   **Fix**: Decrement `count` inside the loop body.
   ```c
   int count = 5;
   while (count > 0) {
       printf("%d\n", count);
       count--;
   }
   ```
2. **Error**: The format specifier `%29[^\n]` allows reading up to 29 characters, but the target buffer `major` has a size of only 15 bytes. This causes a buffer overflow.
   **Fix**: Restrict the scan width to `%14[^\n]`.
   ```c
   char major[15];
   scanf("%14[^\n]", major);
   ```
</details>
