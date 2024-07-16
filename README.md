
## Part A

1. **Volume of a Sphere**
   - Formula: Volume = 4 / 3 * π * r^3
   - Calculate and print the volume of a sphere given its radius.

2. **Area of a Triangle**
   - Formula using Heron's formula: Area = √(s(s-a)(s-b)(s-c))
   - Where s = (a+b+c) / 2 and a, b, c are the sides of the triangle.
   - Compute and print the area of a triangle with given side lengths.

3. **Rotate Values of Variables**
   - Rotate the values of three variables x, y, z such that x takes the value of y, y takes the value of z, and z takes the value of x.
   - Print the variables before and after rotation.

4. **Ternary Operator for Positive/Negative Check**
   - Use the ternary operator to check whether a given number is positive or negative.
   - Print appropriate messages like "NUMBER IS POSITIVE" or "NUMBER IS NEGATIVE".

5. **Floating-Point Number**
   - Read a floating-point number and display the right-most digit of its integral part.

6. **Separate Integral and Decimal Parts**
   - Read a floating-point number and separate/display its integral and decimal parts.

7. **Odd or Even Check**
   - Determine whether a given number is odd or even.
   - Print messages like "NUMBER IS ODD" or "NUMBER IS EVEN".

8. **Bitwise Operators**
   - Perform operations using bitwise operators &, |, ~, >>, <<, ^ on two integers a and b.
   - Compute and print the results for operations like AND, OR, NOT, shift right, shift left, and XOR.

9. **Ternary Operator to Find Largest of Three Numbers**
   - Use the ternary operator to find and print the largest of three numbers.

## Part B

1. **Quadratic Equation Roots**
   - Compute and print all the roots of a quadratic equation given its coefficients.
   - Include appropriate messages for different scenarios (e.g., real roots, complex roots).

2. **Fibonacci Sequence**
   - Generate and print the first N Fibonacci numbers.
   - Fibonacci sequence starts with 0, 1, and subsequent numbers are the sum of the two preceding ones.

3. **Simple Calculator Simulation**
   - Implement a basic calculator using a switch statement to perform arithmetic operations (+, -, *, /, %).
   - Prompt for operator and operands, compute the result, and print it.

4. **Electricity Bill Calculation**
   - Calculate and print the electricity bill based on the meter number and units consumed.
   - Apply specific rates for different unit ranges, include a minimum charge, and apply a surcharge if applicable.

5. **Palindrome Check for Four-Digit Number**
   - Reverse a given four-digit integer and check if it is a palindrome.
   - Print appropriate messages indicating whether the number is a palindrome or not.

6. **Prime Number Generation**
   - Input two numbers N1 and N2, and print all prime numbers between these two numbers.

7. **Bubble Sort for Integer Array**
   - Input N integer numbers into an array and sort them in ascending order using the bubble sort technique.
   - Print both the given and sorted arrays with suitable headings.

8. **Binary Search in Sorted Array**
   - Input N integer numbers into a sorted array and perform a binary search for a given key integer.
   - Print a suitable message indicating success or failure of the search.

9. **Matrix Addition and Subtraction**
   - Input two matrices, perform addition and subtraction of matrices, and print both the input and output matrices with suitable headings.

10. **Matrix Trace and Frobenius Norm**
    - Input a matrix, calculate and print its trace (if square) and Frobenius norm.
    - Include appropriate headings for both input and output matrices.
"""
    with open('README.md', 'w') as file:
        file.write(content)
