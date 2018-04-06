/*Plaindrome exercise 2-5
edition 1
April 3, 20218

CISS 290 wohhleber */

#include<cctype>
#include<cstring>
#include<iostream>
#include<iomanip>

using namespace std;
 
 

//prototypes 

char[] punct(char[]);
char[] capt(char[]);

bool check(char[]);
int i;
char p1[66];


void main() {
	char *tokenptr;
	//char p1[66];
	//int i;

	cout << "Enter your palindrome string"; {
		cin.getline p1[i]; //, sizeof(p1[i], "\n")
	}

	cout << p1 << endl;

	if (check(p1)) {
		cout << p1 << " is a palindrome";
	}
	else {
		cout << p1 << "is not a palindrome";
	}
}




void punct(p1[]) {

		int i;
		char local[66];
		char* tokenptr = strtok(p1, " ,.!?;:+");
		while (tokenptr != '\0') {
			strcat(p1, tokenptr);
			cout << ' ';
			tokenptr = strtok('\0', " ,.!?;:+");

		}
	}

	//remove capitalization,   
void capt(p1[]) {
	char lcl[66]
		int i;
	p1.size(p1.length()) {
		for (i = 0, i < p1.length(); i++);
		p1.at(i) = tolower(p1.at(i));
	}
		//p2.resize(p1.length);


		cout << p1[] << endl;
	}

	//palindrome check return type bool

	bool check{
			bool rtrn = true;
	for (int i = 0; i < p1.length / 2; i++) {
		if (p1[i] != p1[p1.length(1 + i)]) {
			rtrn = false;
			break;
		}
	}
	}







