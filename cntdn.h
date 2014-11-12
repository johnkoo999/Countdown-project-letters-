#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>	
	
string ans;

void pshuffle() {
	printf ("The nine shuffled letters are: %s \n", gen.c_str());
}

void timer(int a) {
	for (int i= a; i >=1; i--) {
		system ("cls");
		pshuffle();
		printf ("%d seconds left", i);
		Sleep (1000);
	}
}
	
	
void cntdn() {
	cout << "you have 30 seconds to think of the longest word that can be formed by the letters";
	Sleep (2500);
	system ("cls");
	pshuffle();
	Sleep (15000);
	printf ("15 seconds left");
	Sleep (5000);
	timer(10);
	system ("cls");
	printf ("Input your answer (must be in UPPER CASE)\n");
	cin >> ans;
}
