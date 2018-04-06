# palindromida
checks if a string is a palindrome

Palindrome Exercise - C++

You will create a program that will use c-string functions to determine if an inputted c-string is a palindrome or not.  In main, the user will input a c-string into a character array and send to user-defined functions.  

This c-string will be sent to a function that will remove all spaces and punctuation marks from its c-string as well as change any uppercase letters to lowercase.  Use string tokens to eliminate the spaces & punctuation marks.  Make sure you include the \0 NULL as you concatenate the tokens into a c-string.  Then copy back into the original c-string for the pass by reference.

Back in main, you will then send the c-string to a function that will see if it is really a palindrome or not.  You will need to create another c-string (that contains the \0) that is filled up as the reverse of the argument c-string.  Then check to see if the c-string is a palindrome and return the boolean result.

Back in main, print the c-string (now in all lowercase and without the spaces and punctuation marks) and tell whether it is a palindrome or not.

Add sufficient documentation to your file   name, exercise, at least a 4 line full paragraph about purpose, & at least 5 comments throughout explaining what is going on (what functions do or if a line of code's purpose is not obvious to a novice programmer what that statement does, etc.).  Run the palindrome program with the following data, and check the output results (you can copy and paste them into a blank text file).  Submit the .cpp and the .txt files.

Data for possible palindromes:

mom
Yankees are number one
A Santa at NASA.
Did Hannah see bees?  Hannah did!

