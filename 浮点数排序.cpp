#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
double EPSILON = 1e-6;
double mun[105]; 
bool cmp(double x,double y){
	double xx = fabs(x - round(x));
	double yy = fabs(y - round(y));
	if(fabs(xx - yy) < EPSILON ){
		return x < y;
	}
	return xx < yy;
}
int main(){
	int n;
//	cin >> n;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
//		cin >> mun[i];
		scanf("%lf",&mun[i]);	
	}
	sort(mun,mun + n,cmp);
//	cout << mun[0];
	printf("%lf",mun[0]);
	for(int i = 1;i < n; i++){
//		cout << " " << mun[i];
		printf(" %lf",mun[i]);
	}
//	cout << endl;
	printf("\n");
	return 0;
}
//9 1.001 2.1 3.2 4.0001 5.000001 6.9 7.2 8.0001 9.0
