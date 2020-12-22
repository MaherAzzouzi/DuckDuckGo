// Compile line : g++ -o ddgs DuckDuckgo_search.cpp -lcurlpp -lcurl

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <json/json.h>
using namespace std;
using namespace Json;

void ddg_search(string question){
		
	string API_request = "https://api.duckduckgo.com/?q=";
	API_request.append(question);
	API_request.append("&format=json&pretty=1");
	cout << "The full request URL : " << API_request << endl;
	//curlpp::Cleanup myCleanup;
	std::ostringstream os;
	os << curlpp::options::Url(API_request);
	string result = os.str();

	Json::Reader reader;
	Json::Value root;

	if(!reader.parse(result, root)){
		cout << reader.getFormattedErrorMessages() << endl;	
	}
	
	Json::Value related_topics = root["RelatedTopics"];
	int size = related_topics.size();

	//cout << related_topics << endl;
	cout << "Related topics size : " << size << endl;
	cout << "Related topics type : " 
			<< related_topics[4]["Text"].type() 
			<< endl;

	
	int i, j;
	
	for(i=0; i < size; i++){
		if(related_topics[i]["Text"].type())
				cout << related_topics[i]["Text"] << endl;
		else{
				for(j=0; j<related_topics[i]["Topics"].size(); j++){
					cout << related_topics[i]["Topics"][j]["Text"] << endl;
			}
		}
	}
	
	cout << "A link to wekipedia for the searched term : "
			<< root["AbstractURL"] << endl;

	//cout << result << endl;
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
