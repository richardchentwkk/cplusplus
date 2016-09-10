#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<string> svec;
	//No element access will caused segement fault.
	//cout << svec[0];
	//Out of range
	//cout << svec.at(0);
	
	return 0;
}
