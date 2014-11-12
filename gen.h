#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;
	
	
string cons = "BBCCDDDDFFGGGHHJKLLLLMMNNNNNNPPQRRRRRRSSSSTTTTTTVVWWXYYZ";
string vowel= "AAAAAAAAAEEEEEEEEEEEEIIIIIIIIIOOOOOOOOUUUU";
string gen= "88888888";
bool input;
int cnt,conscnt,vowelcnt;
	

void gencons(int& cnt) {
	srand((time(NULL))*(cnt+1));
	gen[cnt] = cons[rand() % (cons.length()+1)];
	conscnt++;
} 

void genvowel(int& cnt) {
	srand((time(NULL))*(cnt+1));
	gen[cnt] = vowel[rand() % (vowel.length()+1)];
	vowelcnt++;
}

void genm() {
	printf ("Press 0 to generate a consonant and press 1 to generate a vowel \n");
	printf ("There are nine letters for the countdown game. \n");
	cnt=0;
	conscnt=0;
	vowelcnt=0;
	for (cnt=0; cnt<= 8; cnt++){
	if (conscnt==6) {
		for (cnt= vowelcnt+6;cnt <= 8; cnt++) {
			genvowel(cnt);
		}
		goto stop;
		break;
	}
	if (vowelcnt==5) {
		for (cnt= conscnt+5; cnt <= 8; cnt++) {
			gencons(cnt);
		}
		goto stop;
		break;
	}
	printf ("Letter number %d:", cnt+1);
	cin >> input;
		 switch (input) {
 			case 0: gencons(cnt);			     	
					break;
 			case 1: genvowel(cnt);
			        break;
 	     }
	}
stop:
	printf ("\n");
	printf ("The nine shuffled letters are: %s \n", gen.c_str());
}
