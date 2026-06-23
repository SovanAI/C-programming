# C Programming Learning Journey

Welcome to the C Programming learning repository! This workspace tracks core programming concepts, daily progress, and problem-solving exercises in C.

---

## 📂 Repository Structure & Table of Contents

* **[Day 1: Datatypes & Variables](#day-1-datatypes--variables)**
  * [Topics Covered](#day-1-topics-covered)
  * [File Walkthrough (`00_Datatypes`)](#day-1-file-walkthrough)
* **[Day 2: Functions & Basic Concepts](#day-2-functions--basic-concepts-in-c)**
  * [Topics Covered](#day-2-topics-covered)
  * [File Walkthrough (`01_functions`)](#day-2-file-walkthrough)
  * [Practice Problems (`Problem_Statements_and_solution/01_practice_problems`)](#day-2-practice-problems)
  * [Questions & Exercises](#day-2-practice-questions--exercises)
* **[Day 3: Loops, Increment/Decrement, & Strings](#day-3-loops-incrementdecrement-operators--strings)**
  * [Topics Covered](#day-3-topics-covered)
  * [File Walkthrough (`02_Strings`)](#day-3-file-walkthrough)
  * [Practice Questions & Exercises](#day-3-practice-questions--exercises)
* **[Day 4: Loops & Logical Reasoning](#day-4-loops--logical-reasoning)**
  * [Topics Covered](#day-4-topics-covered)
  * [File Walkthrough (`03_loops_and_logical_reasoning`)](#day-4-file-walkthrough)
* **[Day 5: Arrays & Pointers](#day-5-arrays--pointers)**
  * [Topics Covered](#day-5-topics-covered)
  * [File Walkthrough (`04_Arrays_pointers`)](#day-5-file-walkthrough)
* **[Day 6: Sorting Techniques](#day-6-sorting-techniques)**
  * [Topics Covered](#day-6-topics-covered)
  * [File Walkthrough (`05_Sorting_techhniques`)](#day-6-file-walkthrough)
* **[Day 7: Pattern Printing](#day-7-pattern-printing)**
  * [Topics Covered](#day-7-topics-covered)
  * [File Walkthrough (`06_pattern_printing`)](#day-7-file-walkthrough)
* **[Day 8: Structures](#day-8-structures)**
  * [Topics Covered](#day-8-topics-covered)
  * [File Walkthrough (`07_Structures`)](#day-8-file-walkthrough)
* **[Day 9: File Handling](#day-9-file-handling)**
  * [Topics Covered](#day-9-topics-covered)
  * [File Walkthrough (`08_File_Handelling`)](#day-9-file-walkthrough)
* **[Day 10: Data Structures & Algorithms](#day-10-data-structures--algorithms)**
  * [Topics Covered](#day-10-topics-covered)
  * [File Walkthrough (`09_DSA`)](#day-10-file-walkthrough)
* **[Practice Problems: Loops & Number Theory](#practice-problems-loops--number-theory)**
  * [Problem Descriptions (`Problem_Statements_and_solution`)](#problem-descriptions-problem_statements_and_solution)
* **[Comprehensive Solved Practice Problems](#comprehensive-solved-practice-problems)**
  * [List of Solved Exercises (`Problem_Statements_and_solution/01_practice_problems`)](#comprehensive-solved-problems-list)

---

## Day 1: Datatypes & Variables

This folder ([00_Datatypes](file:///d:/Desktop/C_Programming/C-programming/00_Datatypes)) covers basic and composite datatypes in C, their sizes in memory, and type conversions.

### Day 1 Topics Covered

#### 1. Basic Data Types and Sizes
C supports several built-in datatypes representing integers, floating-point numbers, and characters:
* **`char`**: Character type, typically occupies 1 byte.
* **`short`**: Short integer, typically 2 bytes.
* **`int`**: Standard integer, typically 4 bytes.
* **`long`**: Long integer, typically 4 or 8 bytes.
* **`float`**: Single-precision floating point, typically 4 bytes.
* **`double`**: Double-precision floating point, typically 8 bytes.
* **`unsigned int`**: Unsigned standard integer, holds non-negative numbers, typically 4 bytes.

#### 2. Derived Data Types
Derived types are constructed from the basic types:
* **Arrays**: Fixed-size sequences of elements of the same type.
* **Pointers**: Variables that store the memory address of another variable.

#### 3. User-Defined Data Types
* **Structure (`struct`)**: Group of variables of different types under a single name. The size is equal to or greater than the sum of its members due to memory alignment padding.
* **Union (`union`)**: Similar to structures but all members share the same memory location. The total size is equal to the size of its largest member.
* **Enumeration (`enum`)**: User-defined type consisting of a set of named integer constants.

#### 4. Type Conversions
* **Implicit Conversion (Type Promotion)**: Automatic conversion by the compiler (e.g. promoting a `char` to `int` in arithmetic).
* **Explicit Conversion (Type Casting)**: Manual conversion of type using the cast operator (e.g. `(int)double_var`).

---

### Day 1 File Walkthrough

#### 1. [data_typesa.c](file:///d:/Desktop/C_Programming/C-programming/00_Datatypes/data_typesa.c)
* **Concepts**: Declaring basic numeric variables (`int`, `float`, `double`) and displaying them using `printf`.
* **Code Highlight**:
  ```c
  int val = 50;
  float soumik = 20.0;
  double sourav = 2.0;
  printf("%d \n", val);
  printf("%f \n", soumik);
  ```

#### 2. [datatypes.c](file:///d:/Desktop/C_Programming/C-programming/00_Datatypes/datatypes.c)
* **Concepts**: Comprehensive implementation demonstrating sizes of basic types, arrays/pointers, structs, unions, enums, and implicit/explicit type casting.
* **Code Highlight (Structure, Union & Enum declaration)**:
  ```c
  struct Point {
      int x;
      int y;
  };
  
  union Data {
      int integer_val;
      float float_val;
      char char_val;
  };
  
  enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY };
  ```

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

This folder ([01_practice_problems](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems)) contains practical implementations and solutions demonstrating functions, mathematics in C, and pointer/memory addressing.

#### 1. [ans.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/ans.c)
* **Concepts**: Character data types, type casting, and ASCII values.
* **Summary**: Converts a character variable `a` (initialized to `'R'`) to its corresponding integer ASCII representation using `(int)` type casting, then prints the output.
* **Code Highlight**:
  ```c
  char a = 'R';
  printf("%d", (int)a); // Prints ASCII value (82)
  ```

#### 2. [equation_solve.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/equation_solve.c)
* **Concepts**: Translating algebraic expressions, using `<math.h>`'s `pow()` function, and modular function design.
* **Summary**: Evaluates the quadratic expression $x^2 - 2x + 3$ using a custom function `void equation(double x)` and prints the result for input parameters $3$ and $2.0$.
* **Code Highlight**:
  ```c
  void equation (double x ) {
      double sol = pow(x,2) - (2*x) + 3 ;
      printf("The solution of the equation is : %f\n", sol);
  }
  ```

#### 3. [memory.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/memory.c)
* **Concepts**: Pointers, addresses, and variable storage in RAM.
* **Summary**: Prints the physical memory address where the integer variable `a` is stored, using the address-of operator `&` and the `%p` format specifier.
* **Code Highlight**:
  ```c
  int a = 10;
  printf("%p", (void*)&a); // Prints the memory address of variable a
  ```

#### 4. [pythagores.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/pythagores.c)
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

This directory ([02_Strings](file:///d:/Desktop/C_Programming/C-programming/02_Strings)) explores iterating control flows (`while` loops), pre- and post-increment/decrement operators, string input parsing, and custom print functions.

### Day 3 Topics Covered

#### 1. Increment & Decrement Operators (`++`, `--`)
In C, the unary increment (`++`) and decrement (`--`) operators modify variables by 1. They can be applied in two ways:
* **Prefix (`++x`, `--x`)**: Increments or decrements the variable **first**, then evaluates the expression.
* **Postfix (`x++`, `x--`)**: Evaluates the expression with the **current** value first, then increments or decrements the variable.

> [!WARNING]
> **Sequence Points & Undefined Behavior (UB):**
> Writing expressions like `res = i + ++i;` or `res = i++ + ++i;` results in **Undefined Behavior** under the ISO C standard because a single variable is modified multiple times (or read and modified) without an intervening sequence point. Different compilers, optimization levels, or CPU architectures can produce different values. Always separate modifications into distinct instructions to ensure portability.

#### 2. Loop Control Structures (`while` loops)
A `while` loop runs code blocks repeatedly as long as a condition evaluates to true.
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

#### 1. [Preincrement_postIncrement.c](file:///d:/Desktop/C_Programming/C-programming/02_Strings/Preincrement_postIncrement.c)
* **Concepts**: Unary prefix/postfix operator evaluation inside expressions.
* **Summary**: Demonstrates compound expression arithmetic using pre-increment, post-increment, and pre-decrement operators.
* **Code Highlight**:
  ```c
  int i = 0, j = 5, k = 9;
  int res = (i++) + (++j) + (--k); // 0 + 6 + 8 = 14
  printf("%d", res); // Prints: 14
  ```

#### 2. [details.c](file:///d:/Desktop/C_Programming/C-programming/02_Strings/details.c)
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

#### 3. [string.c](file:///d:/Desktop/C_Programming/C-programming/02_Strings/string.c)
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

---

## Day 4: Loops & Logical Reasoning

This directory ([03_loops_and_logical_reasoning](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning)) focuses on loop logic (`while` and `for` loops), controlling iteration to prevent infinite executions, evaluating conditional operations, and parsing user input to run numeric calculations.

### Day 4 Topics Covered

#### 1. Grading Systems and Logic Bounds
* **Nested Conditional Statements (`if-else if-else`)**: Evaluates a grade bounds range step-by-step.
* **Logical AND (`&&`)**: Ensures multiple constraints are satisfied concurrently (e.g., checking if marks are between 10 and 15: `marks < 15 && marks >= 10`).
* **Input Range Validation**: Handling unexpected user inputs gracefully by utilizing fallback `else` blocks for out-of-bound errors.

#### 2. Multiplication Tables with Loops
* **Dynamic Table Ranges**: Printing custom multiplication tables (`1` to `10`) dynamically using `while` loops based on user-supplied parameters.
* **Logical Loop Conditions**: Using combined conditions like `num <= 10 && num < 11` to reinforce loop invariant logic.

#### 3. Factorial & Countdown Loops
* **Accumulators**: Accumulating values across loop iterations (e.g., `Factorial = fact * Factorial`).
* **Loop Variable Decaying**: Decreasing loop control variables inside the loop scope (e.g., `fact = fact - 1` or `--fact`) to ensure loop termination.

#### 4. Basic `for` Loop Frameworks
* **Loop Structure**: A compact loop notation with initialization, condition, and increment/decrement all defined in the header.
  ```c
  for (int i = 0; i <= 10; i++) {
      // Loop body
  }
  ```

---

### Day 4 File Walkthrough

#### 1. [ans.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/ans.c)
* **Concepts**: Grading logic, boundary limits, conditional branches.
* **Summary**: Implements grading system boundaries from 0 to 15 (e.g. 15 = A, 10 to 14 = B, 5 to 9 = P, 0 to 4 = Fail).
* **Code Highlight**:
  ```c
  if (marks == 15) {
      printf("A");
  } else if (marks < 15 && marks >= 10) {
      printf("B");
  } else if (marks >= 5 && marks < 10) {
      printf("P");
  } else if( marks < 5 && marks >= 0) {
      printf("Fail");
  } else {
      printf("Enter the marks with in range (0-15)");
  }
  ```

#### 2. [ans2.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/ans2.c)
* **Concepts**: Multiplicative progression, iteration steps.
* **Summary**: Calculates the multiplication table of a user-entered number using a `while` loop from 1 to 10.
* **Code Highlight**:
  ```c
  while (num <= 10 && num < 11) {
      cal = num * num_user;
      printf("%d * %d = %d \n", num, num_user, cal);
      ++num;
  }
  ```

#### 3. [for.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/for.c)
* **Concepts**: Compact iteration framework, `for` loops.
* **Summary**: Demonstrates the framework of a basic `for` loop, printing integers from 0 to 10.
* **Code Highlight**:
  ```c
  for (int i = 0; i <= 10; i++) {
      printf("%d\n ", i);
  }
  ```

#### 4. [infinite_loop.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/infinite_loop.c) & [loops.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/loops.c)
* **Concepts**: Countdown loop iteration, counter updates.
* **Summary**: Runs a countdown from 9 to 0, showing how updating the variable via `--i` prevents the infinite loop issue.
* **Code Highlight**:
  ```c
  int i = 9;
  while (i >= 0) {
      printf("I am running current val : %d \n ", i);
      --i;
  }
  ```

#### 5. [while_loop.c](file:///d:/Desktop/C_Programming/C-programming/03_loops_and_logical_reasoning/while_loop.c)
* **Concepts**: Factorial math, accumulator update logic.
* **Summary**: Implements a factorial calculation algorithm for a user-entered number using iteration.
* **Code Highlight**:
  ```c
  while (fact > 0) {
      Factorial = fact * Factorial;
      fact = fact - 1;
  }
  ```

---

## Day 5: Arrays & Pointers

This folder ([04_Arrays_pointers](file:///d:/Desktop/C_Programming/C-programming/04_Arrays_pointers)) covers the declaration, initialization, indexing, and manipulation of single-dimensional (1D) and two-dimensional (2D) arrays in C.

### Day 5 Topics Covered

#### 1. 1D Arrays
* **Declaration and Initialization**: An array is a collection of elements of the same datatype stored in contiguous memory locations. An array can be pre-defined with size and initial values inside `{}` brackets (e.g. `int num[10] = {7,8,9,0,7,3,8,9,1,7};`).
* **Indexing**: Elements are accessed via 0-based indices. The maximum valid index of an array of length `len` is `len - 1`.
* **Passing Arrays to Functions**: Arrays are passed to functions by reference (meaning the address of the first element is passed). Changes made to the array elements inside the function affect the original array.

#### 2. 2D Arrays (Matrices)
* **Declaration**: Declared with row and column dimensions (e.g., `int arr[3][3];` creates a 3x3 grid).
* **Nested Loops**: Iterating through a 2D array requires nested loops: the outer loop controls the rows, and the inner loop controls the columns.

---

### Day 5 File Walkthrough

#### 1. [array_1d.c](file:///d:/Desktop/C_Programming/C-programming/04_Arrays_pointers/array_1d.c)
* **Concepts**: Array declaration, loops for user input, and passing arrays to functions.
* **Code Highlight**:
  ```c
  void arr_print(int arr[], int len) {
      for (int i = 0; i < len ; i ++) {
          printf("%d\n", arr[i]);
      }
  }
  ```

#### 2. [array_2d.c](file:///d:/Desktop/C_Programming/C-programming/04_Arrays_pointers/array_2d.c)
* **Concepts**: Declaring a multi-dimensional array and reading elements using nested loops.
* **Code Highlight**:
  ```c
  int arr [3][3];
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          printf("Enter the whole array");
          scanf("%d", &arr[i][j]);
      }
  }
  ```

---

## Day 6: Sorting Techniques

This folder ([05_Sorting_techhniques](file:///d:/Desktop/C_Programming/C-programming/05_Sorting_techhniques)) implements three fundamental comparison-based sorting algorithms in C: Bubble Sort, Insertion Sort, and Selection Sort. It also demonstrates variable swapping techniques.

### Day 6 Topics Covered

#### 1. Swapping Algorithms
* **With a Temporary Variable**: Stores the value of `a` in `temp`, copies `b` to `a`, and then copies `temp` to `b`.
* **Without a Temporary Variable (Arithmetic Method)**: Uses mathematical addition and subtraction:
  $$a = a + b; \quad b = a - b; \quad a = a - b;$$

#### 2. Bubble Sort
* **Logic**: Iteratively steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This pass is repeated until no swaps are needed.
* **Optimization**: A boolean/flag variable `swapped` is set to `0` at the start of each pass. If a swap occurs, `swapped` is set to `1`. If an entire pass completes with `swapped == 0`, the array is already sorted, and we break early.

#### 3. Insertion Sort
* **Logic**: Divides the array into sorted and unsorted parts. Elements from the unsorted part are picked and placed at the correct position in the sorted part by shifting elements.
* **Complexity**: Efficient for small datasets or nearly sorted arrays.

#### 4. Selection Sort
* **Logic**: Divides the array into sorted and unsorted parts. Repeatedly finds the minimum element from the unsorted part and swaps it with the first element of the unsorted part.
* **Optimization**: Swaps only if the minimum element's index is different from the current position.

---

### Day 6 File Walkthrough

#### 1. [swap.c](file:///d:/Desktop/C_Programming/C-programming/05_Sorting_techhniques/swap.c)
* **Concepts**: Swapping two numbers using a third helper variable vs direct arithmetic expressions.
* **Code Highlight (Swapping without a third variable)**:
  ```c
  a = a + b;
  b = a - b;
  a = a - b;
  ```

#### 2. [bubble_sort.c](file:///d:/Desktop/C_Programming/C-programming/05_Sorting_techhniques/bubble_sort.c)
* **Concepts**: Optimization using a `swapped` flag, array bounds, and edge case handling (checking for `NULL` array or size $\le 1$).
* **Code Highlight (Optimization Check)**:
  ```c
  for (i = 0; i < n - 1; i++) {
      swapped = 0;
      for (j = 0; j < n - 1 - i; j++) {
          if (arr[j] > arr[j + 1]) {
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
              swapped = 1;
          }
      }
      if (swapped == 0) // Break early if already sorted
          break;
  }
  ```

#### 3. [insertion_sort.c](file:///d:/Desktop/C_Programming/C-programming/05_Sorting_techhniques/insertion_sort.c)
* **Concepts**: Shifting elements to insert a key element in its sorted location.
* **Code Highlight**:
  ```c
  for (i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;
      while (j >= 0 && key < arr[j]) {
          arr[j + 1] = arr[j];
          j--;
      }
      arr[j + 1] = key;
  }
  ```

#### 4. [selection_sort.c](file:///d:/Desktop/C_Programming/C-programming/05_Sorting_techhniques/selection_sort.c)
* **Concepts**: Finding the minimum index and performing at most one swap per outer loop iteration.
* **Code Highlight**:
  ```c
  for (i = 0; i < n - 1; i++) {
      minIndex = i;
      for (j = i + 1; j < n; j++) {
          if (arr[j] < arr[minIndex]) {
              minIndex = j;
          }
      }
      if (minIndex != i) {
          temp = arr[i];
          arr[i] = arr[minIndex];
          arr[minIndex] = temp;
      }
  }
  ```

---

## Day 7: Pattern Printing

This folder ([06_pattern_printing](file:///d:/Desktop/C_Programming/C-programming/06_pattern_printing)) explores dynamic pattern design in C. Pattern printing helps build logical reasoning by mapping mathematical formulas to nested coordinate loops (rows and columns) to print alignment characters like `*`.

### Day 7 Topics Covered

#### 1. Basic Pyramids
* **Half Pyramid**: Outer loop tracks row `i`, inner loop prints `i` stars.
* **Inverted Half Pyramid**: Outer loop decrements from `rows` down to `1`, printing `i` stars per row.
* **Full Pyramid**: Centers stars by first printing `rows - i` leading spaces, then printing `i` star-space blocks (`* `).

#### 2. Advanced Pyramids and Mathematical Shapes
* **Hollow Full Pyramid**: Same alignment as full pyramid, but prints a star `*` only if it is the first or last column, or the last row (`j == 1 || j == i || i == rows`). Otherwise, prints spaces.
* **Floyd's Triangle**: A right-angled triangle filled with sequentially increasing numbers starting from 1.
* **Pascal's Triangle**: A centered triangle where each number is the sum of the two directly above it. Calculated using the binomial coefficient formula:
  $$\text{val} = \frac{\text{val} \times (i - j)}{j + 1}$$

#### 3. Grid-based Character Glyphs
* Uses conditionals on row/column coordinates to paint specific glyph letters. For example, printing 'H' and 'I' by checking column boundaries (`j == 0 || j == 4`) or row bounds (`i == 2` or `i == 0`).

---

### Day 7 File Walkthrough

#### 1. [patterns.c](file:///d:/Desktop/C_Programming/C-programming/06_pattern_printing/patterns.c)
* **Concepts**: Comprehensive pattern printing library containing half, inverted half, full, hollow full pyramids, Floyd's triangle, and Pascal's triangle.
* **Code Highlight (Pascal's Triangle Val calculation)**:
  ```c
  int val = 1;
  for (int j = 0; j <= i; j++) {
      printf("%d ", val);
      val = val * (i - j) / (j + 1);
  }
  ```

#### 2. [pyramid_star.c](file:///d:/Desktop/C_Programming/C-programming/06_pattern_printing/pyramid_star.c)
* **Concepts**: Dynamic rows based on user input, rendering a standard dense star pyramid using spaces and stars.
* **Code Highlight**:
  ```c
  for(i = 1; i <= n; i++) {
      for(j = 1; j <= n - i; j++) {
          printf(" ");
      }
      for(j = 1; j <= (2 * i - 1); j++) {
          printf("*");
      }
      printf("\n");
  }
  ```

#### 3. [star_printing_loop.c](file:///d:/Desktop/C_Programming/C-programming/06_pattern_printing/star_printing_loop.c)
* **Concepts**: Printing coordinates-based letters 'H' and 'I' on a 5x5 grid.
* **Code Highlight (Printing H)**:
  ```c
  for(i = 0; i < 5; i++) {
      for(j = 0; j < 5; j++) {
          if(j == 0 || j == 4 || i == 2)
              printf("*");
          else
              printf(" ");
      }
      printf("\n");
  }
  ```

---

## Day 8: Structures

This folder ([07_Structures](file:///d:/Desktop/C_Programming/C-programming/07_Structures)) covers structure declaration, initialization, pointer reference manipulation, passing structural records to functions, structural arrays, and nested structures in C.

### Day 8 Topics Covered

#### 1. Structures and Typedef Alias
* **`typedef struct`**: Declares a template structure under a simplified alias type (e.g. `Book` instead of `struct Book`), reducing syntax overhead.
* **Designated Initializers**: Explicitly maps initial values to specific members by name, e.g. `Book b2 = {.title = "Data Structures", .author = "Reema Thareja", .price = 420.00f};`.

#### 2. Structure Pointers and the Arrow Operator (`->`)
* Standard dereferencing requires parentheses around the pointer dereference: `(*ptr).member`.
* The arrow operator (`->`) is a cleaner syntactic shortcut: `ptr->member`.

#### 3. Passing Structures to Functions
* **Pass by Value**: Passes a complete copy of the structure. Changes made to the copy inside the function do not affect the original variable in `main`.
* **Pass by Reference (Pointers)**: Passes the memory address of the structure. Allows direct modification of original structure members inside functions, and avoids copying overhead (making it highly efficient).

#### 4. Array of Structures & Nested Structures
* **Array of Structures**: Organizes multiple structural instances (e.g., `Book library[2]`) in contiguous memory.
* **Nested Structures**: Nesting structures within structures (e.g., nesting a `struct Address` inside `struct Employee`) to represent complex hierarchical data.

---

### Day 8 File Walkthrough

#### 1. [structures.c](file:///d:/Desktop/C_Programming/C-programming/07_Structures/structures.c)
* **Concepts**: Declaring basic structures, structure pointers, pass-by-value vs pass-by-reference updates, structured arrays, and nested records.
* **Code Highlight (Pass by reference and arrow operator usage)**:
  ```c
  void update_book_price_by_ref(Book *b, float new_price) {
      b->price = new_price; // Arrow operator updates the price of structural pointer
  }
  ```

---

## Day 9: File Handling

This folder ([08_File_Handelling](file:///d:/Desktop/C_Programming/C-programming/08_File_Handelling)) covers file stream input/output operations in C. It details reading, writing, and appending text files, copying file streams byte-by-byte, and serializing complex structure objects into binary files.

### Day 9 Topics Covered

#### 1. Streams and standard File pointer (`FILE *`)
* Files are accessed via a `FILE *` pointer which manages the stream buffer.
* **Modes**:
  - `"w"` (Write text): Opens a file for writing. Overwrites existing contents or creates the file if it doesn't exist.
  - `"r"` (Read text): Opens a file for reading. The file must exist, or `fopen` returns `NULL`.
  - `"a"` (Append text): Opens a file to append new records to the end without destroying existing data.
  - `"wb"` / `"rb"` (Binary Write/Read): Opens a file in raw binary stream format (non-plain text).

#### 2. Writing & Reading text lines
* **`fprintf(file_ptr, "format", ...)`**: Formatted writing to a file stream.
* **`fgets(buffer, sizeof(buffer), file_ptr)`**: Reads a line (up to `sizeof(buffer) - 1` bytes) from a text file, keeping the trailing newline character, and stops at EOF.

#### 3. Byte-by-Byte Copying
* **`fgetc(src)`**: Reads a single character/byte from the input stream. Returns `EOF` when the end of the file is reached.
* **`fputc(ch, dest)`**: Writes a single character/byte to the destination file stream.

#### 4. Binary File Operations & Struct Serialization
* **`fwrite(&var, sizeof(type), count, file_ptr)`**: Direct block-based writing of binary data (like arrays or structs) from RAM onto the disk.
* **`fread(&var, sizeof(type), count, file_ptr)`**: Direct block-based reading from disk into variable memory.

---

### Day 9 File Walkthrough

#### 1. [file_handling.c](file:///d:/Desktop/C_Programming/C-programming/08_File_Handelling/file_handling.c)
* **Concepts**: Full demonstrations of opening, processing, checking for `NULL` errors, closing file pointers using `fclose`, copying text files, and binary structures serialization.
* **Code Highlight (Binary structure write)**:
  ```c
  struct Student s1 = {101, "Alice Smith", 3.92};
  FILE *file_ptr = fopen("student.bin", "wb");
  if (file_ptr != NULL) {
      fwrite(&s1, sizeof(struct Student), 1, file_ptr);
      fclose(file_ptr);
  }
  ```

---

## Day 10: Data Structures & Algorithms

This folder ([09_DSA](file:///d:/Desktop/C_Programming/C-programming/09_DSA)) tracks basic to advanced data structures and algorithm design patterns implemented in Jupyter Notebook format. It is a comprehensive algorithmic companion to C development.

### Day 10 Topics Covered

#### 1. Linear Data Structures
* **Singly Linked List (`singly_linkedlist.ipynb`)**: Node pointers chaining in one direction, inserting/deleting elements at start/end/middle.
* **Doubly Linked List (`doublyLL.ipynb`)**: Bidirectional node pointers linking (prev/next) for forward and backward traversal.
* **Circular Linked List (`circularLL.ipynb`)**: Last node points back to the first node forming a loop.
* **Stack (`stack.ipynb`)**: Last-In-First-Out (LIFO) abstract data type with push, pop, and peek functions.
* **Queue (`queue.ipynb`)**: First-In-First-Out (FIFO) structure with enqueue and dequeue operations.
* **Circular Queue (`circular_queue.ipynb`)**: Queue optimizations utilizing modulo arithmetic to reuse empty slots at the front.

#### 2. Non-Linear Data Structures
* **Tree (`tree.ipynb`)**: Hierarchical node structures, traversal techniques (Preorder, Inorder, Postorder).
* **Binary Search Tree (`BST.ipynb`)**: Sorted binary trees where left subtree is smaller and right subtree is larger than the parent.
* **Graph (`graph.ipynb`)**: Node vertices linked by edges, representation matrices, and traversal algorithms (DFS, BFS).

#### 3. Sorting and Recursion
* **Quick Sort (`quick_sort.ipynb`)**: Divide-and-conquer algorithm using pivot partitioning.
* **Selection, Bubble, and Insertion Sort**: Notebook-based visual step guides for sorting arrays.
* **Recursion (`recursion.ipynb`)**: Solving mathematical sub-problems by calling functions recursively (e.g. Fibonacci, Factorial).

---

### Day 10 File Walkthrough

#### 1. [singly_linkedlist.ipynb](file:///d:/Desktop/C_Programming/C-programming/09_DSA/singly_linkedlist.ipynb)
* **Concepts**: Chaining structure elements together dynamically. Demonstrates head reference tracking and node pointer updates.

#### 2. [circular_queue.ipynb](file:///d:/Desktop/C_Programming/C-programming/09_DSA/circular_queue.ipynb)
* **Concepts**: Optimizing array storage capacity to prevent queue overflows by wrapping index pointers utilizing `%` modulo operations.

---

## Practice Problems: Loops & Number Theory

This section documents standard loop practice exercises and arithmetic operations present in [poblems.txt](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/poblems.txt).

### Problem Descriptions

| # | Problem | Description | Input Example | Output Example |
|---|---------|-------------|---------------|----------------|
| 1 | **Reverse a Number** | Reverse a given integer using a `while` loop. | `12345` | `54321` |
| 2 | **Check Palindrome Number** | Check whether a number is equal to its reverse using a `while` loop. | `121` | `Palindrome` |
| 3 | **Sum of Digits** | Find the sum of digits of a given integer. | `456` | `15` |
| 4 | **Count Digits** | Count the total number of digits in an integer. | `123456` | `6` |
| 5 | **Find Largest Digit** | Identify the largest digit present in a number. | `58321` | `8` |
| 6 | **Decimal to Binary Conversion** | Convert a base-10 decimal number to base-2 binary format using a `while` loop. | `10` | `1010` |
| 7 | **Armstrong Number Check** | Check whether a 3-digit number is an Armstrong number ($d_1^3 + d_2^3 + d_3^3 = N$). | `153` | `Armstrong Number` |
| 8 | **GCD of Two Numbers** | Calculate the Greatest Common Divisor (GCD) of two numbers using a `while` loop. | `24 36` | `12` |
| 9 | **Print Fibonacci Series** | Print the first $n$ terms of the Fibonacci sequence using a `while` loop. | `7` | `0 1 1 2 3 5 8` |
| 10 | **Number Guessing Game** | A guessing game that requests input until the user guesses a secret number (e.g. 25) correctly. | `10`<br>`40`<br>`25` | `Too Low`<br>`Too High`<br>`Correct!` |

---

## Comprehensive Solved Practice Problems

The folder [Problem_Statements_and_solution/01_practice_problems](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems) contains a collection of 28 solved C programs covering a wide range of topics, including arrays, pointers, matrices, recursion, sorting, bitwise operations, and structures.

### Comprehensive Solved Problems List

| # | Program | Description / Core Concepts | Key Highlights / Functions |
|---|---------|-----------------------------|----------------------------|
| 1 | **[ans.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/ans.c)** | Character type casting and ASCII lookup. | Prints character integer values. |
| 2 | **[array_length_pointer.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/array_length_pointer.c)** | Using pointer subtraction to determine array length. | Pointer arithmetic calculation. |
| 3 | **[bitwise_left_shift.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/bitwise_left_shift.c)** | Demonstrates the left shift (`<<`) bitwise operator. | Bitwise multiplication by powers of 2. |
| 4 | **[calculator_switch.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/calculator_switch.c)** | Menu-driven arithmetic calculator. | Utilizes `switch-case` statements. |
| 5 | **[circle_area_circumference.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/circle_area_circumference.c)** | Calculations using float values and math formulas. | Area ($\pi r^2$) & circumference ($2\pi r$). |
| 6 | **[concat_strings.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/concat_strings.c)** | Appending two string arrays without standard library calls. | Pointer/indexing-based manual string copy. |
| 7 | **[count_even_odd.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/count_even_odd.c)** | Counts number of even and odd integers inside an array. | Iteration and `%` modulo check. |
| 8 | **[diagonal_matrix.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/diagonal_matrix.c)** | Checks properties of diagonal matrices. | Nested loop checks for non-diagonal elements. |
| 9 | **[equation_solve.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/equation_solve.c)** | Algebraic quadratic polynomial evaluation. | Solves $x^2 - 2x + 3$. |
| 10 | **[even_odd_check.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/even_odd_check.c)** | Basic branch verification of even/odd status. | Simple conditional `if-else` modulo checks. |
| 11 | **[factorial_iterative.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/factorial_iterative.c)** | Computes $N!$ iteratively using loops. | Prevents infinite loop, handles bounds. |
| 12 | **[factorial_recursion.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/factorial_recursion.c)** | Computes $N!$ recursively. | Base case and recursive stack definition. |
| 13 | **[fibonacci_series.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/fibonacci_series.c)** | Prints Fibonacci sequence terms using variables updating. | Iterative series calculation. |
| 14 | **[gcd_recursion.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/gcd_recursion.c)** | Evaluates GCD of two numbers recursively. | Euclidean algorithm recursive logic. |
| 15 | **[max_min_array.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/max_min_array.c)** | Scan array to track current minimum and maximum values. | Linear search tracking. |
| 16 | **[memory.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/memory.c)** | Address-of operator lookup demonstration. | Prints RAM variables locations using `%p`. |
| 17 | **[palindrome_range.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/palindrome_range.c)** | Finds palindrome numbers in a user-defined numeric range. | Reverses digits and compares. |
| 18 | **[practice.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/practice.c)** | Basic execution testing environment. | Simple test structure. |
| 19 | **[prime_check.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/prime_check.c)** | Evaluates prime status by testing divisor limits. | Checks divisors up to $\sqrt{N}$ or $N/2$. |
| 20 | **[prime_range.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/prime_range.c)** | Finds all prime numbers within a range. | Nested logic checking divisor ranges. |
| 21 | **[pythagores.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/pythagores.c)** | Solves right triangle sides length. | Uses `sqrt` and `pow` standard math routines. |
| 22 | **[quadratic_roots.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/quadratic_roots.c)** | Solves quadratic equation roots $ax^2 + bx + c = 0$. | Handles real, equal, and complex roots. |
| 23 | **[sort_array.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/sort_array.c)** | Elements sorting using basic sorting loops. | Ascending numerical ordering logic. |
| 24 | **[sort_student_names.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/sort_student_names.c)** | Sorts list of strings (names) alphabetically. | Uses `strcmp` and nested sorting loops. |
| 25 | **[student_records_struct.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/student_records_struct.c)** | Declares student record struct structures and tracks array records. | Querying data, printing report stats. |
| 26 | **[swap_call_by_value.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/swap_call_by_value.c)** | Demonstrates that swapping parameters by value doesn't alter main variables. | Proves scope separation of value parameters. |
| 27 | **[vowel_consonant.c](file:///d:/Desktop/C_Programming/C-programming/Problem_Statements_and_solution/01_practice_problems/vowel_consonant.c)** | Evaluates whether character is a vowel or consonant. | Supports both lowercase and uppercase characters. |
