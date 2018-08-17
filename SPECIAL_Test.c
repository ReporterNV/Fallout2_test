#include "SPECIAL_function.h"


int main(){
	struct Person_list *start = NULL;
	struct Person_list *current = NULL;
	current = createPerson();
	start = current;
	current = current -> next;
	current = createPerson();
	puts("You result in file SPECIAL\n");
	releasePerson_list(start);
	return 0;
}
