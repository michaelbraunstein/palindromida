/*Palindrome exercise 2-5
edition 1
April 3, 2018

CISS 290 Wohhleber */

#include<cctype>
#include<cstring>
#include<iostream>
#include<iomanip>

using namespace std;
 
 

//prototypes 

void punct(char[]);
void capt(char[]);
bool ispal(char[]);

void main() {
	char p1[66];
	cout << "Enter your palindrome string"; 
	cin >> p1;

	cout << "String is: " << p1 << endl;



	if (ispal(p1)) 
		cout << p1 << " is a palindrome";
	else 
		cout << p1 << " is not a palindrome";	
}




void punct(char p1) {

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
void capt(char p1) {
	char lcl[66];
		int i;
		//p1.size=(char p1.length()); {
		for (i = p1.length + 1, i =!'/n'; i--)
		char p1.at(i) = tolower(p1.at(i));
	}
		//p2.resize(p1.length);


	//	cout << p1 << endl;
	

	//palindrome check return type bool

bool ispal(char p1) {
			bool rtrn = true;
			for (i = p1.length + 1, i = !'\0'; i--) {
				p2.append = char p1.at(i);
			}

	//for (int i = 0; i < p1.length / 2; i++) {
		//if (p1[i] != p1[p1.length(1 + i)]) {
			rtrn = false;
			break;
		}
	}
	}







