#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s; cin>>s;
	vector<string> res;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'a' && s[i+1] == 'w'){
			res.push_back("aw");
		}
		if(s[i] == 'a' && s[i+1] == 'a'){
			res.push_back("aa");
		}
		if(s[i] == 'd' && s[i+1] == 'd'){
			res.push_back("dd");
		}
		if(s[i] == 'e' && s[i+1] == 'e'){
			res.push_back("ee");
		}
		if(s[i] == 'o' && s[i+1] == 'o'){
			res.push_back("oo");
		}
		if(s[i] == 'o' && s[i+1] == 'w'){
			res.push_back("ow");
		}
		if(s[i] == 'w' && s[i-1] != 'a' && s[i-1] != 'o'){
			res.push_back("w");
		}
	}
	cout<<res.size()<<" (";
	for(int i = 0; i < res.size(); i++){
		cout<<res[i];
		if(i != res.size()-1)
			cout<<",";
	}
	cout<<")";
}


