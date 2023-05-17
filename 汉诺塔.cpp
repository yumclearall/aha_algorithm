#include <iostream>
#include <stack>
using namespace std;
int num,sum;
stack<int> s[3];
//f[1] = 1;
//f[n] = f[n - 1] + 1 + f[n - 1]
//f[n] = (1LL << n) - 1;
//g[n] = 2 * g[n - 1] + n;
long long sumhanoi(int n){
	if (n == 1)
		return 1;
	else
		return (1LL << n) - 1;
}
long long h[65];
void move(int x, int y){
	int temp = s[x].top();
	s[x].pop();
	s[y].push(temp);
	cout << x << " --> " << y << "		" << temp << endl;
	num++;
	sum += temp;
}
void hanoi(int a, int b, int c, int f){
	if (f == 1){
		move(a,c);
		return;
	}
	hanoi(a, c, b, f - 1);
	move(a, c);
	hanoi(b, a, c, f - 1);
}
int main(){
	int n;
	cin >> n;
	for (int i = n; i > 0; i--){
		s[0].push(i);
	}
	hanoi(0,1,2,n);
	cout << endl << num << " " << sum << endl;
	while (!s[2].empty()){
		cout << s[2].top() << " ";
		s[2].pop();
	}
	cout << endl << sumhanoi(n) << " ";
	
	for (int i = 1; i <= n; i++){
		h[i] = 2 * h[i - 1] + i;
	}
	cout << h[n] << endl;
	return 0;
}
