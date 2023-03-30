#include <iostream>
#include <vector>

std::vector<std::vector<int>> addMatrices(std::vector<std::vector<int>> matrix1, std::vector<std::vector<int>> matrix2) {
    // Verifica se as matrizes têm a mesma dimensão
    int numLinhasA = matrix1.size();
    int numColunasA = matrix1[0].size();
    int numLinhasB = matrix2.size();
    int numColunasB = matrix2[0].size();

    //Fazer dessa forma já inicializa a matriz fazendo com que ela possa ser usada
    std::vector<std::vector<int>> matrixResult(numLinhasA, std::vector<int>(numColunasA));

    if (numLinhasA != numLinhasB || numColunasA != numColunasB) {
        std::cout << "As matrizes devem ter a mesma dimensão!" << std::endl;
        // Retorne uma matriz vazia se as dimensões não forem iguais
        return matrixResult;
    }





    return matrixResult;
}





int main() {
    int matrix1[2][2] = {{1,2}, {3,4}};
    int matrix2[2][2] = {{1,2}, {3,4}};


    return 0;
}

