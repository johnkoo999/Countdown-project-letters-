/*
	Name: Countdown Project (Letter round)
	Copyright: All rights reserved Leximath 2014
	Author: Leximath
	Date: 05/11/14 18:25
	Description: See README.txt
*/

#include "gen.h"
#include "cntdn.h"
#include "glos.h"
#include "judge.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>

int pt = 0;
bool contgame;

int main () {
    do {
  		system ("cls");
		genm();
	    Sleep (5000);
		system ("cls");
		cntdn();
		intxt (ans);
		Sleep (1000);
		if (glosans == true) {
			check (gen,ans);
		}
		check (gen,ans);
		judge(pt,checkans,ans);
		printf("Your current score is %d", pt);
	    Sleep (3000);
	    system ("cls");
	    printf ("Press 1 and enter if you want to play another round. \n");
	    printf ("Press 0 and enter if you want to quit. \n");
	    cin >> contgame;
    } while (contgame != 0);
	return 0;
}
