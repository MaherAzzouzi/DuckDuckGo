// Compile line : g++ -o ddgs DuckDuckgo_search.cpp -lcurlpp -lcurl

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
using namespace std;
using namespace curlpp;

void ddg_search(string question){
		
	string API_request = "https://api.duckduckgo.com/?q=";
	API_request.append(question);
	API_request.append("&format=json&pretty=1");
	cout << "The full request URL : " << API_request << endl;
	//curlpp::Cleanup myCleanup;
	std::ostringstream os;
	os << curlpp::options::Url(API_request);
	string result = os.str();

	cout << "Search result : " << result << endl;
	return;
}

int main(int argc, char* argv[]){
		
	if (argc < 2){
		cout << "Example : ddgs 'question' 'e-mail'" << endl;
		exit(0);
	}
	
	cout << "The question is : 	" << argv[1] << endl;
	cout << "Your e-mail is : 	" << argv[2] << endl;
	string question = argv[1];
	
	ddg_search(question);

	return 0;
}
