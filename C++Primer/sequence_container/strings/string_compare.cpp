#include<iostream>
#include<string>
using namespace std;
int main(){
	string cobol_program_crash("abend");
	string cplus_program_crash("abort");
	cout << (cobol_program_crash < cplus_program_crash) << endl;
	//Using compare funciton
	cout << cobol_program_crash.compare(cplus_program_crash)<< endl;

	return 0;
}
