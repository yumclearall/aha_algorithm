#include <stdio.h>
void space(int, int);
int main() {
    int matrix[101][101];
    int m;
    int n;
    int i, j;
    // 输入m*n的矩阵
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //定义上下左右边界，每次边上的数后，更新周围的值
    int up = 0, left = 0, down = m-1, right = n-1;
    int k, num = 0;
    while (up <= down && left <= right) {
        // 向右输出
        for (k = left; k <= right; k++) {
            printf("%d", matrix[up][k]);
            num++;
            space(num, m*n);
        }
        up++;
        if (num == m*n)  //如果全部数值已经输出完毕，退出while循环
            break;
        // 向下输出
        for (k = up; k <= down; k++) {
            printf("%d", matrix[k][right]);
            num++;
            space(num, m*n);
        }
        right--;
        if (num == m*n)  //如果全部数值已经输出完毕，退出while循环
            break;
        // 向左输出
        for (k = right ; k >= left; k--) {
            printf("%d", matrix[down][k]);
            num++;
            space(num, m*n);
        }
        down--;
        if (num == m*n)  //如果全部数值已经输出完毕，退出while循环
            break;
        // 向上输出
        for (k = down; k >= up; k--) {
            printf("%d", matrix[k][left]);
            num++;
            space(num, m*n);
        }
        left++;
        if (num == m*n)  //如果全部数值已经输出完毕，退出while循环
            break;
    }
    for(int y=0;y<m;y++)
	{
		for(int x=0;x<n;x++)
		printf("%2d	",matrix[y][x]);
		printf("\n\n");
	}
    getchar();getchar();
    return 0;
}
//判断每次输出数字后是否要输出空格
void space(int num,int all) {
    if (num < all)
        printf(" ");
}

