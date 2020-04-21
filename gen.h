#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;
	
	
string cons = "BBCCDDDDFFGGGHHJKLLLLMMNNNNNNPPQRRRRRRSSSSTTTTTTVVWWXYYZ";
string vowel= "AAAAAAAAAEEEEEEEEEEEEIIIIIIIIIOOOOOOOOUUUU";
string gen= "999999999";
int input;
int cnt,conscnt,vowelcnt;
	

void gencons(int& cnt) {
	srand((time(NULL))*(cnt+1));
	gen[cnt] = cons[abs(rand()) % (cons.length())];
	cout << gen[cnt] << endl;
	conscnt++;
	cnt++;
} 

void genvowel(int& cnt) {
	srand((time(NULL))*(cnt+1));
	gen[cnt] = vowel[abs(rand()) % (vowel.length())];
	cout << gen[cnt] << endl;
	vowelcnt++;
	cnt++;
}

void genm() {
	printf ("Press 0 to generate a consonant and press 1 to generate a vowel \n");
	printf ("There are nine letters for the countdown game. \n");
	cnt=0;
	conscnt=0;
	vowelcnt=0;
	for (cnt=0; cnt<= 8;){
		if (conscnt==6) {
			genvowel(cnt);
		}
		else if (vowelcnt==5) {
			gencons(cnt);
		}
		else {
			printf ("Letter number %d:", cnt+1);
			cin >> input;
			if (input == 0) gencons(cnt);
			else if (input == 1) genvowel(cnt);
			else continue;
		}
	}
	printf ("\n");
	cout << "The nine shuffled letters are: " << gen << endl;
}
