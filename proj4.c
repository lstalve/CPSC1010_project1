/*
  Lawton Stalvey
  Lab Section 004
  11/29/17
  Letter Frequencies 
  This file contains two functions that are called in main.c
*/

#include "proj4.h"

//loops through a string and counts the letters in the string
void letterCount(char * s[], int n){

  //declaration of variables
  int i,j;
  char ch;
  int value;
   
  for(i=0; i< n; i++) { //loops through the number of strings in s[]
    for(j=0; j < strlen(s[i]); j++) { //loops through the individual strings in s[]
      ch = s[i][j];
      if(ch >= 'A' && ch <= 'Z'){//if the character in the string is a capital letter this if statement executes
	value = ch - 65;
	count[value]++; //increments the array count
      }

      else if(ch >= 'a' && ch <= 'z'){ //if the character in the string is a lower letter this if statement executes
	value = ch - 97;
	count[value]++; //increments the array count 
      }
    }
  }
}

//Initialize each value in the global count array to zero.
 
void initializeCount(){

  //declare variables
  int i;

  //loops through count and initializes to zero
  for(i=0; i < 26; i++){
    count[i]=0;
  }
}

