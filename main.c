/*
  Lawton Stalvey
  Lab Section 004
  11/29/17
  Letter Frequencies
  This program keeps count of each letter in a string and prints out the count
*/

#include "proj4.h"

int count[26];

static char * s1[] = {"Stark", "Lannister", "Tully"};
static int n1 = 3;

static char * s2[] = {
  "Zoey", "Gracie", "Roddie",
  "Darla", "Peanut", "Roxie", "Joe",
  "Cassie", "Sadie", "Scooby Doo",
  "Scrappy Doo", "Astro", "Balto",
  "Beethoven", "Benji", "Clifford",
  "Courage the Cowardly Dog", "Droopy",
  "Fido", "Goofy", "Snoopy", "Brian Griffin",
  "Pluto", "Underdog", "Odie",
  "Santa's Little Helper", "Lady", 
  "Marley", "McGruff", "Hachiko",
  "Porthos", "Rin Tin Tin", "Lassie",
  "Todo", "Samantha"
};
static int n2 = 35;

static char * s3[] = {
  "R2-D2", "Rosie", "Johnny 5",
  "Motoko Kusanagi", "Bishop",
  "HAL 9000", "Bender", "Data",
  "Megatron", "Optimus Prime",
  "Wall-E", "BB-8", "KIT", 
  "Terminator", "Ultron"
};
static int n3 = 15;

static char * s4[] = {
  "Miles", "RoxAnn", "Tradd",
  "Bosie", "Thunder", "Atlas",
  "Claude", "88"
};
static int n4 = 7;

/*
 * Print the testNum and values in count
 * to stdout.  
 */
void printCount(int testNum);

//Test the initializeCount and letterCount functions
int main(void){

  initializeCount();
  letterCount(s1, n1);
  printCount(1);

  initializeCount();
  letterCount(s2, n2);
  printCount(2);

  initializeCount();
  letterCount(s3, n3);
  printCount(3);

  initializeCount();
  letterCount(s4, n4);
  printCount(4);

  return 0;
}

/*
 * Print the testNum and values in count
 * to stdout.  
 */
void printCount(int testNum){
  int i; 
  char c;
  printf("===Test %d===\n", testNum);
  for(i = 0, c = 'a'; i < 26; i++, c++){
    printf("%c count = %d\n", c, *(count + i));   
  }
  puts("");
}

