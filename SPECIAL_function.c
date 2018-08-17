#include "SPECIAL_function.h"

Person_list* createPerson(){
	Person_list *new = malloc(sizeof(struct Person_list));
	updatePerson(&new->NPC);
	new->next=NULL;
return new;
}

void releasePerson_list(Person_list *start){
	Person_list *next = NULL;
	for(Person_list *i = start;i!=NULL;i=next){
		next = i->next;
		free(i);
	}
}


void outputPerson(struct Person *Character){
	FILE *file;
	file=fopen("SPECIAL.txt","a");

	fprintf(file,"\n\n\t\t\t\t FALLOUT");
	fprintf(file,"\n\t\t\tVAULT-13 PERSONNEL RECORD\n");
	const time_t timer = time(NULL);
	fprintf(file,"\t\t\t%s\n", ctime(&timer));
	
	fprintf(file,"Name: %s",Character->name);
	((Character->Age<=30000)&&(Character->Age>=0))? (fprintf(file,"\t\t\t Age: %i", Character->Age)):(fprintf(file,"\t\t\t Age: ?"));
	((Character->Gender=='M')||(Character->Gender=='m'))? (fprintf(file,"\t\t\t Gender: Male")):(((Character->Gender=='F')||(Character->Gender=='f'))? (fprintf(file,"\t\t\t Gender: Female")) : (fprintf(file,"\t\t\t Gender=?")));

	fprintf(file,"\n::: Statistics :::");
	fprintf(file,"\n     Strength: %d",Character->info.S); fprintf(file,"       Hit Points: %d",15+(Character->info.E*2)+Character->info.S); fprintf(file,"              Sequence: %d",Character->info.P*2);
	fprintf(file,"\n   Perception: %d",Character->info.P); fprintf(file,"      Armor Class: %d",Character->info.A);               fprintf(file,"           Healing Rate: %d",Character->info.E/3);
	fprintf(file,"\n    Endurance: %d",Character->info.E); fprintf(file,"    Action Points: %d",Character->info.A/2+5);           fprintf(file,"        Critical Chance: %d",Character->info.L);
	fprintf(file,"\n     Charisma: %d",Character->info.C); fprintf(file,"     Melee Damage: %d",Character->info.S/3+1);           fprintf(file,"           Carry Weight: %d",25+(Character->info.S*25));
	fprintf(file,"\n Intelligence: %d",Character->info.I); fprintf(file,"      Damage Res.: %d",0);
	fprintf(file,"\n      Agility: %d",Character->info.A); fprintf(file,"   Radiation Res.: %d",Character->info.A);
	fprintf(file,"\n         Luck: %d",Character->info.L); fprintf(file,"      Poison Res.: %d",Character->info.L);
	

	fprintf(file,"\n\n::: Skills :::");
		
	fprintf(file,"\nSmall Guns ..... %d\n",5+(4*Character->info.A));
	fprintf(file,"Big Guns ....... %d\n"  ,2*Character->info.A);	
	fprintf(file,"Energy Weapons . %d\n"  ,2*Character->info.A);	
	fprintf(file,"Unarmed ........ %d\n"  ,30+(2*(Character->info.A+Character->info.S)));	
	fprintf(file,"Melee Weapons .. %d\n"  ,20+(2*(Character->info.A+Character->info.S)));
	fprintf(file,"Throwing ....... %d\n"  ,4*(Character->info.A));
	fprintf(file,"First aid ...... %d\n"  ,2*(Character->info.P+Character->info.I));
	fprintf(file,"Doctor ......... %d\n"  ,5+Character->info.P+Character->info.I);
	fprintf(file,"Sneak .......... %d\n"  ,5+(3*Character->info.A));
	fprintf(file,"Lockpick ....... %d\n"  ,10+(Character->info.P+Character->info.A));	
	fprintf(file,"Steal .......... %d\n"  ,3*Character->info.A);
	fprintf(file,"Traps .......... %d\n"  ,10+Character->info.A+Character->info.P);
	fprintf(file,"Science ........ %d\n"  ,4*Character->info.I);
	fprintf(file,"Repair ......... %d\n"  ,3*Character->info.I);
	fprintf(file,"Speech ......... %d\n"  ,5*Character->info.C);
	fprintf(file,"Barter ......... %d\n"  ,4*Character->info.C);
	fprintf(file,"Gambling ....... %d\n"  ,5*Character->info.L);
	fprintf(file,"Outdoorsman .... %d\n"  ,2*(Character->info.E+Character->info.I));
	
	fclose(file);
}


void outputPerson_list(struct Person_list *list){
	FILE *file;
	file=fopen("SPECIAL.txt","a");
for (Person_list *i;i->next!=NULL;i=i->next){

	fprintf(file,"\n\n\t\t\t\t FALLOUT");
	fprintf(file,"\n\t\t\tVAULT-13 PERSONNEL RECORD\n");
	const time_t timer = time(NULL);
	fprintf(file,"\t\t\t%s\n", ctime(&timer));
	
	fprintf(file,"Name: %s",list->NPC.name);
	((list->NPC.Age<=30000)&&(list->NPC.Age>=0))? (fprintf(file,"\t\t\t Age: %i", list->NPC.Age)):(fprintf(file,"\t\t\t Age: ?"));
	((list->NPC.Gender=='M')||(list->NPC.Gender=='m'))? (fprintf(file,"\t\t\t Gender: Male")):(((list->NPC.Gender=='F')||(list->NPC.Gender=='f'))? (fprintf(file,"\t\t\t Gender: Female")) : (fprintf(file,"\t\t\t Gender=?")));

	fprintf(file,"\n::: Statistics :::");
	fprintf(file,"\n     Strength: %d",list->NPC.info.S); fprintf(file,"       Hit Points: %d",15+(list->NPC.info.E*2)+list->NPC.info.S); fprintf(file,"              Sequence: %d",list->NPC.info.P*2);
	fprintf(file,"\n   Perception: %d",list->NPC.info.P); fprintf(file,"      Armor Class: %d",list->NPC.info.A);               fprintf(file,"           Healing Rate: %d",list->NPC.info.E/3);
	fprintf(file,"\n    Endurance: %d",list->NPC.info.E); fprintf(file,"    Action Points: %d",list->NPC.info.A/2+5);           fprintf(file,"        Critical Chance: %d",list->NPC.info.L);
	fprintf(file,"\n     Charisma: %d",list->NPC.info.C); fprintf(file,"     Melee Damage: %d",list->NPC.info.S/3+1);           fprintf(file,"           Carry Weight: %d",25+(list->NPC.info.S*25));
	fprintf(file,"\n Intelligence: %d",list->NPC.info.I); fprintf(file,"      Damage Res.: %d",0);
	fprintf(file,"\n      Agility: %d",list->NPC.info.A); fprintf(file,"   Radiation Res.: %d",list->NPC.info.A);
	fprintf(file,"\n         Luck: %d",list->NPC.info.L); fprintf(file,"      Poison Res.: %d",list->NPC.info.L);
	

	fprintf(file,"\n\n::: Skills :::");
		
	fprintf(file,"\nSmall Guns ..... %d\n",5+(4*list->NPC.info.A));
	fprintf(file,"Big Guns ....... %d\n"  ,2*list->NPC.info.A);	
	fprintf(file,"Energy Weapons . %d\n"  ,2*list->NPC.info.A);	
	fprintf(file,"Unarmed ........ %d\n"  ,30+(2*(list->NPC.info.A+list->NPC.info.S)));	
	fprintf(file,"Melee Weapons .. %d\n"  ,20+(2*(list->NPC.info.A+list->NPC.info.S)));
	fprintf(file,"Throwing ....... %d\n"  ,4*(list->NPC.info.A));
	fprintf(file,"First aid ...... %d\n"  ,2*(list->NPC.info.P+list->NPC.info.I));
	fprintf(file,"Doctor ......... %d\n"  ,5+list->NPC.info.P+list->NPC.info.I);
	fprintf(file,"Sneak .......... %d\n"  ,5+(3*list->NPC.info.A));
	fprintf(file,"Lockpick ....... %d\n"  ,10+(list->NPC.info.P+list->NPC.info.A));	
	fprintf(file,"Steal .......... %d\n"  ,3*list->NPC.info.A);
	fprintf(file,"Traps .......... %d\n"  ,10+list->NPC.info.A+list->NPC.info.P);
	fprintf(file,"Science ........ %d\n"  ,4*list->NPC.info.I);
	fprintf(file,"Repair ......... %d\n"  ,3*list->NPC.info.I);
	fprintf(file,"Speech ......... %d\n"  ,5*list->NPC.info.C);
	fprintf(file,"Barter ......... %d\n"  ,4*list->NPC.info.C);
	fprintf(file,"Gambling ....... %d\n"  ,5*list->NPC.info.L);
	fprintf(file,"Outdoorsman .... %d\n"  ,2*(list->NPC.info.E+list->NPC.info.I));
	puts("\n\n\n");
	}
	fclose(file);
}


void updatePerson(struct Person *Character){
	printf("Name: ");
	scanf("%255s",&Character->name);
	printf("Age: ");
	scanf("%u", &Character->Age);
	printf("Gender(Male or Female): ");
	scanf("%255s", &Character->Gender);
	puts("\nEnter values from 1 to 10\n");

	char in;
	do{
	printf("Strength:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.S=in;

	do{
	printf("Perception:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.P=in;

	do{
	printf("Endurance:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.E=in;
	
	do{
	printf("Charisma:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.C=in;

	do{
	printf("Intelligence:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.I=in;

	do{
	printf("Agility:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.A=in;

	do{
	printf("Luck:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	Character->info.L=in;
}

