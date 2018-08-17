#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct SPECIAL{
unsigned char S:4;
unsigned char P:4;
unsigned char E:4;
unsigned char C:4;
unsigned char I:4;
unsigned char A:4;
unsigned char L:4;
};

typedef struct Person {
	char name[255];
	unsigned Age;//Если поменять местами Age и Gender, то значение Age будет равно 0g
	char Gender;
	struct SPECIAL info;
}Person;

typedef struct Person_list{
	struct Person NPC;
	struct Person_list *next;
}Person_list;

void outputPerson(struct Person *Character);

void updatePerson(struct Person *Character);

Person_list* createPerson();

void releasePerson_list(Person_list *start);
