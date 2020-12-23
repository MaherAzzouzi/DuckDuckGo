//g++ -o ddgs DuckDuckgo_search.cpp -lcurl -lcurlpp -ljsoncpp -lchilkat
//Using DuckDuckGo API to search for terms and names.
//Author : Maher Azzouzi

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <json/json.h>
#include "chilkat/include/CkMailMan.h"
#include "chilkat/include/CkEmail.h"

using namespace std;
using namespace Json;

bool sendMail(const char* to,
			  const char* from,
			  const char* passw,
			  const char* subject,
			  const char* content){

	CkMailMan mailman;
	mailman.put_SmtpHost("smtp.gmail.com");
	mailman.put_SmtpUsername(from);
	mailman.put_SmtpPassword(passw);
	mailman.put_SmtpSsl(true);
	mailman.put_SmtpPort(465);

	CkEmail email;
	
	email.put_Subject(subject);
	email.put_Body(content);
	// Your username here
	email.put_From("Maher Azzouzi");
	bool success = email.AddTo("Receiver", to);
	success = mailman.SendEmail(email);
	
	if(!success){
	//cout << mailman.lastErrorText() << "\r\n";
		cout << "Make sure the e-mail and the password are correct!" << endl;
		cout << "And go to your G-mail account and enable IMAP" << endl;
		return 0;
	}

	mailman.CloseSmtpConnection();
	return success;
}

void ddg_Search(string question, const char* email, string password){
		
	string API_request = "https://api.duckduckgo.com/?q=";
	API_request.append(question);
	API_request.append("&format=json&pretty=1");
	cout << "The Full Requested URL : " << API_request << endl;
	std::ostringstream os;
	os << curlpp::options::Url(API_request);
	string result = os.str();

	Json::Reader reader;
	Json::Value root;
	ostringstream mail_body;

	if(!reader.parse(result, root)){
		cout << reader.getFormattedErrorMessages() << endl;	
	}
	
	Json::Value related_topics = root["RelatedTopics"];
	int size = related_topics.size();

	int i, j;
	
	for(i=0; i < size; i++){
		if(related_topics[i]["Text"].type()){
				mail_body << related_topics[i]["Text"] << endl;
		}
		else{
				for(j=0; j<related_topics[i]["Topics"].size(); j++){
					mail_body << related_topics[i]["Topics"][j]["Text"] 
							  << endl;
			}
		}
	}
	
	if(mail_body.str().empty()){
		cout << "Sorry, no results found!" << endl;
		return;
	
	}
	mail_body << endl
			  << "A link to Wekipedia for the searched term (" 
			  << question << ") :"
			  << root["AbstractURL"] << endl;
	
	if(email){
			bool success;
			success = sendMail(email, email, password.c_str()
					,"DuckDuckGo API", mail_body.str().c_str());

	if(success){
			cout << "[+] " << mail_body.str().size() 
			 	<< " Of Data Sended successfuly!"
			 	<< endl;

	}else{
			cout << "[-] Something Went Wrong!" << endl;
	
	}
	}else{
			cout << "You choose not to use e-mail " << endl
				 << "Here are your results :" << endl
				 << mail_body.str() << endl;
	
	}

	return;
}


int main(int argc, char* argv[]){
		
	if (argc < 2){
		cout << "ddgs \"question\" \"e-mail (optional)\" " << endl;
		exit(0);
	}
	
	string password;	

	if(argv[2]){
		cout << "Password: ";
		cin >> password;
		cout << "Your E-mail		" << argv[2] << endl;
	}
	
	cout << "The Term 			" << argv[1] << endl;
	string question = argv[1];
	
	ddg_Search(question, argv[2], password);

	return 0;
}
