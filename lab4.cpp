#include <iostream>

#define MAX_ROWS 100  
#define MAX_COLS 100  

// Ֆունկցիա, որը իրականացնում է մատրիցի տրանսպոզիցիան
void transpose(char matrix[MAX_ROWS][MAX_COLS], char transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    // Անցնում է մատրիցի տարրերի վրայով և կատարում է փոխարինումը
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];  
        }
    }
}

int main() {
    char matrix[MAX_ROWS][MAX_COLS];  
    char transposed[MAX_COLS][MAX_ROWS];  
    int rows, cols;  

    
    std::cout << "Մուտքագրեք տողերի քանակը: ";
    std::cin >> rows;

    
    std::cout << "Մուտքագրեք սյունակների քանակը: ";
    std::cin >> cols;

    
    std::cout << "Մուտքագրեք մատրիցի տարրերը (միակ սիմվոլներ):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Տարր[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];  
        }
    }

    // Կատարում ենք մատրիցի տրանսպոզիցիա
    transpose(matrix, transposed, rows, cols);

    
    std::cout << "Տրանսպոզիցված մատրիցը:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transposed[i][j] << " ";  
        }
        std::cout << "\n";  
    }

    return 0;  
}
