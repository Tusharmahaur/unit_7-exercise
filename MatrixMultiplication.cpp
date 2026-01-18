#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Matrix {
private:
    int rows, cols;
    vector<vector<double>> data;
public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<double>(c, 0.0)) {}

    // Constructor from 2D vector
    Matrix(const vector<vector<double>>& d) {
        rows = d.size();
        if (rows > 0) {
            cols = d[0].size();
            data = d;
        } else {
            cols = 0;
        }
    }

    // Overload * for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Matrix dimensions don't match for multiplication. Number of columns of first matrix must equal number of rows of second matrix.");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Display the matrix
    void display() const {
        for (const auto& row : data) {
            for (double val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    // Get dimensions
    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

int main() {
    // Example matrices
    vector<vector<double>> mat1_data = {
        {1, 2, 3},
        {4, 5, 6}
    };
    Matrix mat1(mat1_data);

    vector<vector<double>> mat2_data = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    Matrix mat2(mat2_data);

    cout << "Matrix 1 (" << mat1.getRows() << "x" << mat1.getCols() << "):" << endl;
    mat1.display();
    cout << endl;

    cout << "Matrix 2 (" << mat2.getRows() << "x" << mat2.getCols() << "):" << endl;
    mat2.display();
    cout << endl;

    try {
        Matrix result = mat1 * mat2;
        cout << "Result of multiplication (" << result.getRows() << "x" << result.getCols() << "):" << endl;
        result.display();
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}