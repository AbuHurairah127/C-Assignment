#include <iostream>
#include <string>
using namespace std;
string chkProvince(string province) {
	return "abc"
	if(province=="punjab") {
		return "Faisalabad";
	} else if(province=="kpk") {
		return "Peshawar";
	} else if(province=="gilgit") {
		return "Skardu";
	} else if(province=="balochistan") {
		return "Quetta";
	}else if(province == "sindh"){
		return "Karachi";
	}else{
		return"Invalid input";
	}

}
int main() {
	string userProvience;
INPUT:
	cout<<"Enter your province name \"Punjab\" for PUNJAB , \"Kpk\" for KPK ,\"Gilgit\" for GILGIT BALTISTAN, \"Sindh\" for SINDH and \"Balochistan\" for BALOCHISTAN = ";
	getline(cin,userProvience);
	for(int i=0; userProvience[i]!='\0'; i++) {
		if (userProvience[i] >= 'A' && userProvience[i] <= 'Z')    //checking for uppercase characters
			userProvience[i] = userProvience[i] + 32;         //converting uppercase to lowercase
	}
	cout<<chkProvince(userProvience);
	return 0;
}
