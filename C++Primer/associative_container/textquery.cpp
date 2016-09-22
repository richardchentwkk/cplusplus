#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<set>

using namespace std;

class TextQuery{
public:
	typedef std::vector<std::string>::size_type line_no;
	void read_file(std::ifstream &is){
		store_file(is);
		build_map();
	}
	std::set<line_no> run_query(const string&) const;
	std::string text_line(line_no) const;
private:
	void store_file(std::ifstream&);
	std::vector<string> line_of_text;
	void build_map();
	std::map<string,set<line_no> > word_map;
};

ifstream& open_file(ifstream &in, const string &file){
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;
}

string make_plural(size_t ctr,const string &word, const string &ending)
{
	  return (ctr==1) ? word : word+ending;
}

void print_results(const set<TextQuery::line_no>& locs, const string& sought, 
		const TextQuery &file){
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought << " occurs " << size << " "
		 << make_plural(size,"times", "s") << endl;
	line_nums::const_iterator it = locs.begin();
	for(; it!=locs.end(); ++it){
		cout << "\t(line " << (*it)+1 << ") " << file.text_line(*it) << endl;
	}
}

int main(int argc, char **argv)
{
	ifstream infile;
	if(argc<2 || !open_file(infile,argv[1])){
		cerr << "No input file" << endl;
		return EXIT_FAILURE;
	}
	TextQuery tq;
	tq.read_file(infile);

	while(true){
		cout << "Enter word to query for or press q to exit:" << endl;
		string s;
		cin >> s;
		if(!cin || s == "q")break;
		set<TextQuery::line_no> locs = tq.run_query(s);
		print_results(locs, s, tq);
	}
	return 0;
}

