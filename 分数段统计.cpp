#include <iostream> // 28 67 32 45 86 97 97 79 86 97 08 09 98 97 96 9 9 49 5 95 86 85 84 83 78 73 72 80 81  
#include <algorithm>
int a[100],b[6];
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> a[i];
		if(a[i] >= 90)	{	b[1]++;	}
		else if(a[i] >= 80)	{	b[2]++;	}
		else if(a[i] >= 70)	{	b[3]++;	}
		else if(a[i] >= 60)	{	b[4]++;	}
		else {	b[5]++;	}
	}
	sort(a,a + n);
	cout << b[1];
	for(int i = 2;i < 6; i++){
		cout << " " << b[i];
	}
	cout << endl;
	return 0;
}
