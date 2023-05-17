#include <iostream>
#include <vector>
using namespace std;
struct student{
	string name;
	int age;	
};
int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	for(int i = 0;i < vec.size(); i++){
		cout << vec[i] <<endl;
	}
	vector<int>().swap(vec);
	printf("%d\n",vec.size());
	vec.push_back(4);
	printf("%d\n",vec[0]);	
	vec.clear();			//²»ÊÍ·ÅÄÚ´æ 
	printf("%d\n\n",vec.size());
	vector<int> v;
	for(int i = 1;i < 10; i++){
		v.push_back((i * i));
	}
	for(int i = 0;i < v.size(); i++){
		cout << v[i] <<endl;
	}
	vector<int> vc(5,1);
	for(int i = 0;i < vc.size(); i++){
		cout << vc[i] <<" ";
	}
	cout << "\n";
	vector<student> class1;
	student stu1,stu2;
	stu1.name = "jiejie";
	stu1.age = 20;
	stu2.name = "pupu";
	stu2.age = 17;
	class1.push_back(stu1);
	class1.push_back(stu2);
	return 0;
}
