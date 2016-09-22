#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> ivec;
	for(vector<int>::size_type i = 0; i!=10; ++i){
		ivec.push_back(i);
		ivec.push_back(i);
	}
	
	set<int> iset(ivec.begin(),ivec.end());
	//Debug
	cout << ivec.size() << endl;
	cout << iset.size() << endl;

	return 0;
}
