#include<iostream>
#include<string>
using namespace std;
int main(){
	//String test.
	//string s1, s2(5,'a'), s3(s2), s4(s3.begin(), s3.begin() + s3.size() /2);
	
	char *cp = "Hiya";				//null end
	char c_array[] = "World!!!!";	//null end
	char no_null[] = {'H','I'};
	string s1(cp);
	string s2(c_array, 5);
	string s3(c_array + 5, 4);
	string s4(no_null);
	string s5(no_null, 2);

	string s6(s1,2);
	string s7(s1,0,2);
	string s8(s1,0,8);

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	cout << "s3:" << s3 << endl;
	cout << "s4:" << s4 << endl;
	cout << "s5:" << s5 << endl;
	cout << "s6:" << s6 << endl;
	cout << "s7:" << s7 << endl;
	cout << "s8:" << s8 << endl;
	

	return 0;
}
