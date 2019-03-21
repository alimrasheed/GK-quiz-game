#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhen was the first school for girls opened in Saudi Arabia?");
		printf("\n\nA.1951\t\tB.1945\n\nC.1955\t\tD.1960");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!! That's a good start!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.1955");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe capital city of Saudi Arabia is:");
		printf("\n\nA.Jeddah\t\tB.Makkah\n\nC.Riyadh\t\tD.Dammam");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Riyadh");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhat is the national animal of Saudi Arabia?");
		printf("\n\nA.Bear\t\tB.Camel\n\nC.Horse\t\tD.Lion");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Camel");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was the founder of Kingdom of Saudi Arabia?");
		printf("\n\nA.King Saud\t\tB.King Abdul-Aziz\n\nC.King Faisal\t\tD.King Fahd");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is King Abdul-Aziz");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nIn which year the present Saudi Arabia was found?");
        printf("\n\nA.1916\t\tB.1932\n\nC.1925\t\tD.1920");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.1932");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhen is the national day of Saudi Arabia celebrated?");
		printf("\n\nA.24th August\t\tB.23th October\n\nC.22nd September\t\tD.23rd September");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.23rd September");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of KSA?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Football\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Football");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nTotal number of countries that share borders with saudi arabia ? ");
		printf("\n\nA.6\t\tB.8\n\nC.7\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.7");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nSaudi Arabia is divided into how many reigons?");
		printf("\n\nA.13\t\tB.20\n\nC.15\t\tD.21");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.13");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn which year oil was first discovered in Saudi Arabia");
		printf("\n\nA.1940\t\tB.1938\n\nC.1941\t\tD.1939");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.1938");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nThe head quarters of Saudi Arabian oil company is located in which city");
		printf("\n\nA.Dammam\t\tB.Dhahran\n\nC.Jubail\t\tD.Al-Khobar");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Dhahran");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhich country shares the longest border with Saudi Arabia?");
		printf("\n\nA.Kuwait\t\tB.UAE\n\nC.Oman\t\tD.Yemen);
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Yemen");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nIn which year the national flag of Saudi Arabia was adopted?");
		printf("\n\nA.1966\t\tB.1973\n\nC.1960\t\tD.1923");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1973");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nIn which year did Saudi Arabia qualify for the FIFA world cup for the first time?");
		printf("\n\nA.1994\t\tB.1999\n\nC.2005\t\tD.2000");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.1994");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich one is the largest reigon in Saudi Arabia area wise?");
		printf("\n\nA.Eastern Province\t\tB.Jizan\n\nC.Riyadh\t\tD.Najran");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nThe national Museum of Saudi Arabia was established in which year?");
		printf("\n\nA.2001\t\tB.2002\n\nC.1999\t\tD.1998");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.1999");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich one is the first University in the Kingdom of Saudi Arabia");
		printf("\n\nA.King Saud University\t\tB.King Fahd University\n\nC.King Abdul-Aziz University\t\tD.King Khaled University");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.King Saud University");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nIn which year the King Saud University was established?");
		printf("\n\nA.1975\t\tB.1967\n\nC.1960\t\tD.1957");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

		case 16:
		printf("\n\n\nWhich one is a port city in Saudi Arabia?");
		printf("\n\nA.Jeddah\t\tB.Riyadh\n\nC.Makkah\t\tD.Madina");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Jeddah");getch();
		       goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t You won SAR%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation, NEVER GIVE UP!");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................*Quiz Game*...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your head");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded SAR100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in SAR...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers because we feel you are simply amazing then.");

	printf("\n\n\t******************************************************");
	printf("\n\n\t*****C QUIZ GAME developed by Alim Rasheed********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
