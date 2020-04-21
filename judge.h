#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

bool checkans;

void check(string gen, string ans) {
	sort(gen.begin(),gen.end());
	sort(ans.begin(),ans.end());
	if (ans.find_first_not_of(gen)==string::npos) checkans=1;
	else checkans=0;
}

void judge (bool checkans,string ans) {
	if (checkans==true) {
		printf ("Your answer is accepted \n");
	}
	else {
		printf ("But you have used letters that are not given.  \n");
	}
}

