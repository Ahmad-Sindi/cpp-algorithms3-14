#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * Algorithm Challenge – Level 3 | #14 Scalar Matrix Check
 *
 * This program checks whether a given 3×3 matrix is a Scalar Matrix.
 *
 * A Scalar Matrix follows these rules:
 * 1. All diagonal elements are equal (same constant value).
 * 2. All non-diagonal elements must be zero.
 *
 * Note:
 * - An Identity Matrix is a special case of a Scalar Matrix
 *   where the scalar value equals 1.
 *
 * This challenge strengthens:
 * - Matrix geometry understanding
 * - Diagonal-based logic
 * - Reusable comparison patterns
 * - Mathematical abstraction in algorithms
 */

// Prints the matrix in a formatted layout
void PrintMatrix(int arr[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(2) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

// Checks whether the matrix is a Scalar Matrix
bool IsScalarMatrix(int Matrix1[3][3], short Rows, short Colms)
{
    // Store the first diagonal element to compare against
    int FirstDiagElement = Matrix1[0][0];

    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Colms; j++) // Traverse columns
        {
            // Diagonal elements must match the first diagonal value
            if (i == j && Matrix1[i][j] != FirstDiagElement)
                return false;

            // Non-diagonal elements must be zero
            if (i != j && Matrix1[i][j] != 0)
                return false;
        }
    }
    return true; // All scalar matrix conditions satisfied
}

int main()
{
    int Matrix1[3][3] =
        {
            {5, 0, 0},
            {0, 5, 0},
            {0, 0, 5}
        };

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsScalarMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is Scalar.";
    else
        cout << "\nNO: Matrix is Not Scalar.";

    return 0;
}
