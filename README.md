# 💻Multidimensional Arrays: C++ 2D Array – Matrices

## 🎯AIM
To study and implement C++ 2D Array – Matrices

## 📚Theory

### Overview
A multidimensional array in C++ is an array of arrays. The most common type is the 2D array, which can be visualized as a matrix (rows × columns). Matrices are widely used in mathematical computations, graphics, and data processing.

## 📋 Algorithms

### ✅ Take matrix input from user and display it

1. Start.
2. Input the number of rows (m) and columns (n) of the matrix.
3. Declare a 2D array of size m × n.
4. For each row `i` from 0 to m-1, do steps 5–7.
5. For each column `j` from 0 to n-1, do steps 6–7.
6. Input the element at position [i][j].
7. End inner column loop.
8. End outer row loop.
9. For each row `i` from 0 to m-1, do steps 10–12.
10. For each column `j` from 0 to n-1, do step 11.
11. Display the element at position [i][j] with appropriate formatting.
12. End inner column loop.
13. End outer row loop.
14. End.

### ✅ Addition of two matrices

1. Start.
2. Input the number of rows (m) and columns (n).
3. Declare two 2D arrays, A and B, of size m × n.
4. Input elements of matrix A.
5. Input elements of matrix B.
6. Declare a result matrix C of size m × n.
7. For each row `i` from 0 to m-1, do steps 8–10.
8. For each column `j` from 0 to n-1, do step 9.
9. Set C[i][j] = A[i][j] + B[i][j].
10. End inner column loop.
11. End outer row loop.
12. Display matrix C.
13. End.

### ✅ Multiplication of two matrices

1. Start.
2. Input the number of rows and columns for matrix A (m × n).
3. Input the number of rows and columns for matrix B (p × q).
4. If n ≠ p, print error (matrices cannot be multiplied) and exit.
5. Input elements of matrix A.
6. Input elements of matrix B.
7. Declare result matrix C of size m × q.
8. For each row `i` from 0 to m-1, do steps 9–15.
9. For each column `j` from 0 to q-1, do steps 10–14.
10. Set C[i][j] = 0.
11. For each k from 0 to n-1, do step 12.
12. C[i][j] += A[i][k] × B[k][j].
13. End innermost loop.
14. End inner column loop.
15. End outer row loop.
16. Display matrix C.
17. End.

### ✅ Diagonal Addition (for a square matrix)

1. Start.
2. Input the size of the square matrix (n × n).
3. Declare a 2D array A of size n × n.
4. Input elements of A.
5. Initialize sum_main_diag = 0 and sum_sec_diag = 0.
6. For each i from 0 to n-1, do steps 7–8.
7. sum_main_diag += A[i][i].
8. sum_sec_diag += A[i][n-1-i].
9. End loop.
10. Display sum_main_diag and sum_sec_diag.
11. End.

---

## 🧠Conclusion

This experiment provides hands-on experience with multidimensional arrays (specifically 2D arrays) in C++. By implementing various operations—input/output, addition, multiplication, and diagonal addition—you gain a strong understanding of matrix manipulation, which is essential for advanced programming, data processing, and mathematical computations.
