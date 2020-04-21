#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

string line;
bool glosans;

void intxt(string ans) {
	glosans=0;
	ifstream myfile;
	myfile.open ("dictionary");
	if (myfile.is_open()){
		while (! myfile.eof() )    {
			getline (myfile,line);
			if (ans==line) {
				glosans=1;
				cout << "Your answer is found in the glossary.\n";
				myfile.close();
			}
			else {
				continue;
			}
		}
	    myfile.close();
	}
}


