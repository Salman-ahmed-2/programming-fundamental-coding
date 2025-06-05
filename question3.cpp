//salman ahmed khan
//i243004
//section c








#include <iostream>
#define MAX 10
using namespace std;

void multiplyMatrices(int matrixA[MAX][MAX], int matrixB[MAX][MAX], int rowA, int colA, int rowB, int colB) {
    if (colA!=rowB) {
        cout << "Matrix multiplication not possible. Column of A must equal row of B.\n";
        return;
    }

    int result[MAX][MAX] = {0}; 

    for (int i=0; i<rowA; i++) {
        for (int j=0; j<colB; j++) {
            result[i][j] = 0; 
            for (int k=0; k<colA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout<<"Resultant Matrix:\n";
    for (int i=0; i<rowA; i++) {
        for (int j=0; j<colB; j++) {
            cout<<result[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isValidSize(int size) {
    return size>0 && size<=MAX;
}

int main() {
    int matrixA[MAX][MAX], matrixB[MAX][MAX];
    int rowA, colA, rowB, colB;

    do {
        cout<<"Enter rows of Matrix A (1-"<<MAX<<"): ";
        cin>>rowA;
        if (!isValidSize(rowA)) {
            cout << "Invalid size. Please enter again.\n";
        }
    } while (!isValidSize(rowA));

    do {
        cout<<"Enter columns of Matrix A (1-"<<MAX<<"): ";
        cin>>colA;
        if (!isValidSize(colA)) {
            cout<<"Invalid size. Please enter again.\n";
        }
    } while (!isValidSize(colA));

    do {
        cout<<"Enter rows of Matrix B (1-"<<MAX<<"): ";
        cin>>rowB;
        if (!isValidSize(rowB)) {
            cout<<"Invalid size. Please enter again.\n";
        }
    } while (!isValidSize(rowB));

    do {
        cout<<"Enter columns of Matrix B (1-"<<MAX<<"): ";
        cin>>colB;
        if (!isValidSize(colB)) {
            cout<<"Invalid size. Please enter again.\n";
        }
    } while (!isValidSize(colB));

    if (colA!=rowB) {
        cout<<"Matrix multiplication not possible. Column of A must equal row of B.\n";
        return 1; 
    }

    cout << "Enter elements of Matrix A:\n";
    for (int i=0; i<rowA; i++) {
        for (int j=0; j<colA; j++) {
            cout<< "Element [" << i<<"]["<<j<<"]: ";
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i <rowB; i++) {
        for (int j =0; j < colB; j++) {
            cout <<"Element [" << i << "][" <<j << "]: ";
            cin >>matrixB[i][j];
        }
    }

    cout << "Matrix A:\n";
    displayMatrix(matrixA, rowA, colA);
    cout << "Matrix B:\n";
    displayMatrix(matrixB, rowB, colB);

    multiplyMatrices(matrixA, matrixB,
	rowA, colA,rowB, colB);

    return 0;
}

