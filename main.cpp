#include <iostream>
#include <fstream>
using namespace std;
int main() {
	cout<<"Welcome to BatchCompiler"<<endl;
	cout<<"by x04000"<<endl;
	cout<<""<<endl;
	cout<<"Name and extension of file: ";
	string archivename;
	cin>>archivename;
	cout<<""<<endl;
    ifstream archive(archivename.c_str());
    string line;
    ofstream file;
	file.open("compiled.cpp");
	file<<"#include <iostream>"<<endl;
	file<<"int main() {"<<endl;
    while (getline(archive, line)) {
    	cout<<"Command: ";
        cout<<line<<endl;
        string sline = '"'+line;
        string cline = "system("+sline+'"'+");";
		file<<cline<<endl;
    }
    file<<"}"<<endl;
    file.close();
    cout<<"Sucesfully compiled to .cpp"<<endl;
}
