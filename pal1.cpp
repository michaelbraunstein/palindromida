/*Palindrome exercise 2-5
edition 1
April 3, 2018

CISS 290 Wohhleber */

#ifdef  _MSC_VER

#define  _CRT_SECURE_NO_WARNINGS

#endif

#include<cctype>
#include<cstring>
#include<iostream>
#include<iomanip>

//#include <stdio.h>
//#include <string.h>

using namespace std;

 
 

//prototypes 

void punct(char[]);
void capt(char[]);
bool ispal(char[]);

void main() {
	char p1[66];
	cout << "Enter your palindrome string: "; 
	cin >> p1;

	cout << "String is: " << p1 << endl;
	cout << "debug 01 \n"; //debug************************************************************************
	//system("pause");
	cout << "debug 02 \n"; //debug************************************************************************
	cout << "about to call punct and pass string with " << p1 << endl;
	cout << "debug 03 \n"; //debug************************************************************************
	//system("pause");
	punct(p1);
	cout << "punctuation removed" << p1;
	//system("pause");
	cout << "remove capitalizaion" << p1;
	capt(p1);
	cout << "return capt " << p1;
	//system("pause");
	if (ispal(p1)) {
		cout << "if is pal";

		cout << p1 << " is a palindrome";
	}

	else {
		cout << "else";
		cout << p1 << " is not a palindrome";
	}
	system("pause");
}




void punct(char p1[]) {

		
		char local[66];
		cout << "debug 10 \n"; //debug************************************************************************
		cout << local;
		char *tokenptr = strtok(p1, " ,.!?;:+");
		cout << p1;
		while (tokenptr != '\0') {
			strcat(p1, tokenptr);
			cout << p1;
			cout << tokenptr;
			cout << ' ';
			tokenptr = strtok('\0', " ,.!?;:+");

		}
	}

	//remove capitalization,   
void capt(char input_string[]) {
	
		int i;
		cout << "debug 20 \n"; //debug************************************************************************
		//p1.size=(char p1.length()); {
		for (i = strlen(input_string) - 1; i = 0; i--) {
			input_string[i] = tolower(input_string[i]);
		}

		
	}
		//p2.resize(p1.length);


	//	cout << p1 << endl;
	

	//palindrome check return type bool

bool ispal(char p1[]) {

	cout << "debug 30 \n"; //debug************************************************************************
	//char p2[63];
//		int j = 0;
//			bool rtrn = true;
//			for (i = p1[].length + 1, i = !'\0'; i--); {
//				p2[j] = p1[i];
	return false;
			}

	//for (int i = 0; i < p1.length / 2; i++) {
		//if (p1[i] != p1[p1.length(1 + i)]) {
			//rtrn = false;
			// break;
			
		
		
	








