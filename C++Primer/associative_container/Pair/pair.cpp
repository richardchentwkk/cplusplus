#include<iostream>
#include<utility>
#include<string>
#include<vector>
using namespace std;
typedef pair<string, string> Author;
int main()
{
	pair<string, string> anon;
	pair<string, int> word_count;
	pair<string, vector<int> > line;
	pair<string, string> author("James", "Joyce");
	Author test("Mike","Andy");

	//Test pair functions
	string firstbook;
	if(author.first == "James" && author.second == "Joyce")
		firstbook = "Stephen Hero";
	cout <<	"Book name is:"	<< firstbook << endl;
	

	pair<string, string> next_auth;
	string first, last;
	cout << "Please enter author name:" << endl;
	while(cin >> first >> last){
		next_auth = make_pair(first, last);
	}
	
	return 0;
}
