#include <stdio.h>
void space(int, int);
int main() {
    int matrix[101][101];
    int m;
    int n;
    int i, j;
    // ����m*n�ľ���
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //�����������ұ߽磬ÿ�α��ϵ����󣬸�����Χ��ֵ
    int up = 0, left = 0, down = m-1, right = n-1;
    int k, num = 0;
    while (up <= down && left <= right) {
        // �������
        for (k = left; k <= right; k++) {
            printf("%d", matrix[up][k]);
            num++;
            space(num, m*n);
        }
        up++;
        if (num == m*n)  //���ȫ����ֵ�Ѿ������ϣ��˳�whileѭ��
            break;
        // �������
        for (k = up; k <= down; k++) {
            printf("%d", matrix[k][right]);
            num++;
            space(num, m*n);
        }
        right--;
        if (num == m*n)  //���ȫ����ֵ�Ѿ������ϣ��˳�whileѭ��
            break;
        // �������
        for (k = right ; k >= left; k--) {
            printf("%d", matrix[down][k]);
            num++;
            space(num, m*n);
        }
        down--;
        if (num == m*n)  //���ȫ����ֵ�Ѿ������ϣ��˳�whileѭ��
            break;
        // �������
        for (k = down; k >= up; k--) {
            printf("%d", matrix[k][left]);
            num++;
            space(num, m*n);
        }
        left++;
        if (num == m*n)  //���ȫ����ֵ�Ѿ������ϣ��˳�whileѭ��
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
//�ж�ÿ��������ֺ��Ƿ�Ҫ����ո�
void space(int num,int all) {
    if (num < all)
        printf(" ");
}

