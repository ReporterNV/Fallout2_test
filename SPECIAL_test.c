
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void OUTPUT (short int *S ,short int *P,short int *E,short int *C,short int *I,short int *A,short int *L){
	FILE *file;
	file=fopen("C:/SPECIAL.txt","a");
	fprintf(file,"\n::: Statistics :::");
	fprintf(file,"\n     Strength: %d",*S); fprintf(file,"       Hit Points: %d",15+(*E*2)+*S); fprintf(file,"               Sequence: %d",*P*2);
	fprintf(file,"\n   Perception: %d",*P); fprintf(file,"      Armor Class: %d",*A);           fprintf(file,"           Healing Rate: %d",*E/3);
	fprintf(file,"\n    Endurance: %d",*E); fprintf(file,"    Action Points: %d",*A/2+5);       fprintf(file,"        Critical Chance: %d",*L);
	fprintf(file,"\n     Charisma: %d",*C); fprintf(file,"     Melee Damage: %d",*S/3+1);        fprintf(file,"           Carry Weight: %d",25+(*S*25));
	fprintf(file,"\n Intelligence: %d",*I); fprintf(file,"      Damage Res.: %d",0);
	fprintf(file,"\n      Agility: %d",*A); fprintf(file,"   Radiation Res.: %d",*A);
	fprintf(file,"\n         Luck: %d",*L); fprintf(file,"      Poison Res.: %d",*L);
	

	fprintf(file,"\n\n::: Skills :::");
		
	fprintf(file,"\nSmall Guns ..... %d\n",5+(4**A));
	fprintf(file,"Big Guns ....... %d\n",2**A);	
	fprintf(file,"Energy Weapons . %d\n",2**A);	
	fprintf(file,"Unarmed ........ %d\n",30+(2*(*A+*S)));	
	fprintf(file,"Melee Weapons .. %d\n",20+(2*(*A+*S)));
	fprintf(file,"Throwing ....... %d\n",4*(*A));
	fprintf(file,"First aid ...... %d\n",2*(*P+*I));
	fprintf(file,"Doctor ......... %d\n",5+*P+*I);
	fprintf(file,"Sneak .......... %d\n",5+(3**A));
	fprintf(file,"Lockpick ....... %d\n",10+(*P+*A));	
	fprintf(file,"Steal .......... %d\n",3**A);
	fprintf(file,"Traps .......... %d\n",10+*A+*P);
	fprintf(file,"Science ........ %d\n",4**I);
	fprintf(file,"Repair ......... %d\n",3**I);
	fprintf(file,"Speech ......... %d\n",5**C);
	fprintf(file,"Barter ......... %d\n",4**C);
	fprintf(file,"Gambling ....... %d\n",5**L);
	fprintf(file,"Outdoorsman .... %d\n",2*(*E+*I));
	
	fclose(file);
}

int main()
{ 
	short int SPECIAL[7];
	char name[255];
	char Gender;
	int Age;
	puts("Welcom to SPECIAl test!\n");
	printf("Name: ");
	scanf("%s",&name);
	printf("Age: ");
	scanf("%d",&Age);
	printf("Gender(Male or Female): ");
	scanf("%255s", &Gender);
	puts("\nEnter values from 1 to 10\n");
	
	do{
	printf("Strength:");
	scanf("%d",&SPECIAL[0]);
	}while((1>SPECIAL[0])||(10<SPECIAL[0]));
	
	do{
	printf("Perception:");
	scanf("%d",&SPECIAL[1]);
	}while((1>SPECIAL[1])||(10<SPECIAL[1]));
	
	do{
	printf("Endurance:");
	scanf("%d",&SPECIAL[2]);
	}while((1>SPECIAL[2])||(10<SPECIAL[2]));
	
	do{
	printf("Charisma:");
	scanf("%d",&SPECIAL[3]);
	}while((1>SPECIAL[3])||(10<SPECIAL[3]));
	
	do{
	printf("Intelligence:");
	scanf("%d",&SPECIAL[4]);
	}while((1>SPECIAL[4])||(10<SPECIAL[4]));
	
	do{
	printf("Agility:");
	scanf("%d",&SPECIAL[5]);
	}while((1>SPECIAL[5])||(10<SPECIAL[5]));
	
	do{
	printf("Luck:");
	scanf("%d",&SPECIAL[6]);
	}while((1>SPECIAL[6])||(10<SPECIAL[6]));
	
	
	FILE *file;
	file=fopen("C:/SPECIAL.txt","a");
	fprintf(file,"\n\n\t\t\t\tFALLOUT");
	fprintf(file,"\n\t\t\tVAULT-13 PERSONNEL RECORD\n");
	const time_t timer = time(NULL);
	fprintf(file,"\t\t\t%s\n", ctime(&timer));
		
	fprintf(file,"Name: %s",name);

	((Age<=30000)&&(Age>=0))? (fprintf(file,"\t\t\t Age: %d", Age)):(fprintf(file,"\t\t\t Age: ?"));
	
	((Gender=='M')||(Gender=='m'))? (fprintf(file,"\t\t\t Gender: Male")):(((Gender=='F')||(Gender=='f'))? (fprintf(file,"\t\t\t Gender: Female")) : (fprintf(file,"\t\t\t Gender=?")));

OUTPUT(&SPECIAL[0],&SPECIAL[1],&SPECIAL[2],&SPECIAL[3],&SPECIAL[4],&SPECIAL[5],&SPECIAL[6]);

	printf("\nPlease wait");
	Sleep(1500);
	printf(".");
	Sleep(1500);
	printf(".");
	Sleep(1500);
	printf(".\n");
	Sleep(1000);
	puts("You result in file SPECIAL\n");
	puts("Press ENTER for exit");
	getch();
return 0;
}
