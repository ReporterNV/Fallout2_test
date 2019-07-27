
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

int main()
{ 
	char in;
	struct SPECIAL info;
	char Gender;
	int Age;
	char name[255];
	
	puts("Welcom to SPECIAl test!\n");
	printf("Name: ");
	scanf("%255s",&name);
	printf("Age: ");
	scanf("%d", &Age);
	printf("Gender(Male or Female): ");
	scanf("%255s", &Gender);
	puts("\nEnter values from 1 to 10\n");
	
	do{
	printf("Strength:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.S=in;

	do{
	printf("Perception:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.P=in;

	do{
	printf("Endurance:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.E=in;
	
	do{
	printf("Charisma:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.C=in;

	do{
	printf("Intelligence:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.I=in;

	do{
	printf("Agility:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.A=in;

	do{
	printf("Luck:");
	scanf("%hhi",&in);
	}while((1>in)||(10<in));
	info.L=in;
	
	FILE *file;
	file=fopen("SPECIAL.txt","a");
	fprintf(file,"\n\n\t\t\t\t FALLOUT");
	fprintf(file,"\n\t\t\tVAULT-13 PERSONNEL RECORD\n");
	const time_t timer = time(NULL);
	fprintf(file,"\t\t\t%s\n", ctime(&timer));
		
	fprintf(file,"Name: %s",name);

	((Age<=30000)&&(Age>=0))? (fprintf(file,"\t\t\t Age: %i", Age)):(fprintf(file,"\t\t\t Age: ?"));
	
	((Gender=='M')||(Gender=='m'))? (fprintf(file,"\t\t\t Gender: Male")):(((Gender=='F')||(Gender=='f'))? (fprintf(file,"\t\t\t Gender: Female")) : (fprintf(file,"\t\t\t Gender=?")));

	fprintf(file,"\n::: Statistics :::");
	fprintf(file,"\n     Strength: %d",info.S); fprintf(file,"       Hit Points: %d",15+(info.E*2)+info.S); fprintf(file,"              Sequence: %d",info.P*2);
	fprintf(file,"\n   Perception: %d",info.P); fprintf(file,"      Armor Class: %d",info.A);               fprintf(file,"           Healing Rate: %d",info.E/3);
	fprintf(file,"\n    Endurance: %d",info.E); fprintf(file,"    Action Points: %d",info.A/2+5);           fprintf(file,"        Critical Chance: %d",info.L);
	fprintf(file,"\n     Charisma: %d",info.C); fprintf(file,"     Melee Damage: %d",info.S/3+1);           fprintf(file,"           Carry Weight: %d",25+(info.S*25));
	fprintf(file,"\n Intelligence: %d",info.I); fprintf(file,"      Damage Res.: %d",0);
	fprintf(file,"\n      Agility: %d",info.A); fprintf(file,"   Radiation Res.: %d",info.A);
	fprintf(file,"\n         Luck: %d",info.L); fprintf(file,"      Poison Res.: %d",info.L);
	

	fprintf(file,"\n\n::: Skills :::");
		
	fprintf(file,"\nSmall Guns ..... %d\n",5+(4*info.A));
	fprintf(file,"Big Guns ....... %d\n"  ,2*info.A);	
	fprintf(file,"Energy Weapons . %d\n"  ,2*info.A);	
	fprintf(file,"Unarmed ........ %d\n"  ,30+(2*(info.A+info.S)));	
	fprintf(file,"Melee Weapons .. %d\n"  ,20+(2*(info.A+info.S)));
	fprintf(file,"Throwing ....... %d\n"  ,4*(info.A));
	fprintf(file,"First aid ...... %d\n"  ,2*(info.P+info.I));
	fprintf(file,"Doctor ......... %d\n"  ,5+info.P+info.I);
	fprintf(file,"Sneak .......... %d\n"  ,5+(3*info.A));
	fprintf(file,"Lockpick ....... %d\n"  ,10+(info.P+info.A));	
	fprintf(file,"Steal .......... %d\n"  ,3*info.A);
	fprintf(file,"Traps .......... %d\n"  ,10+info.A+info.P);
	fprintf(file,"Science ........ %d\n"  ,4*info.I);
	fprintf(file,"Repair ......... %d\n"  ,3*info.I);
	fprintf(file,"Speech ......... %d\n"  ,5*info.C);
	fprintf(file,"Barter ......... %d\n"  ,4*info.C);
	fprintf(file,"Gambling ....... %d\n"  ,5*info.L);
	fprintf(file,"infodoorsman .... %d\n" ,2*(info.E+info.I));
	
	fclose(file);

	puts("You result in file SPECIAL\n");

	return 0;
}
