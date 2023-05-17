#include <stdio.h>
// ��ת����
void rotateArray(size_t rows, size_t cols, size_t arr[4][4]) {
    size_t rotated[rows][cols];
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            // rotated[i][j] = a[n - j - 1][i]; // ˳ʱ�뷭ת
            rotated[rows - j - 1][i] = arr[i][j]; // ��ʱ�뷭ת
            //rotated[j][i] = a[n - j - 1][i]; // ��ֱ��ת
        }
    }
    //memcpy(arr, rotated, sizeof arr[0][0] * rows * cols);
}

void printAllNumbersInArray(size_t numArr[4][4], int col, int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int val = numArr[i][j];
            printf("%d \t", val);
        }
        printf("\r");
    }
}

int main(int argc, const char * argv[]) {

    size_t numArr[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("ԭʼ���飺\r\n");
    printAllNumbersInArray(numArr, 4, 4);
    printf("��ת�����飺\r\n");
    rotateArray(4, 4, numArr);
    printAllNumbersInArray(numArr, 4, 4);

    return 0;
}

