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
     printf("\t\t\tC HI FREIND WELCOME TO A QUIZ GAME\n");
     printf("\n\t\t______________");

     printf("\n\t\t______________");
     printf("\n\t\t______________");
     printf("\n\t\t   WANT TO WIN THIS GAME????    ") ;
     printf("\n\t\t   WANT TO WIN MONEY ALSO???     ");
     printf("\n\t\t   THEN YOU ARE WELCOME!!!!!!    ");
     printf("\n\t\t______________");
     printf("\n\t\t______________");
     printf("\n\t\t > Press S or s to start the game");
     printf("\n\t\t > Press V or v to view the highest score  ");
     printf("\n\t\t > Press R or r to reset score");
     printf("\n\t\t > press H or h for help            ");
     printf("\n\t\t > press Q or q to quit             ");
     printf("\n\t\t______________\n\n");
     choice=toupper(getch());
     if (choice=='V'||choice=='v')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H'||choice=='h')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R'||choice=='r')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q'||choice=='q')
	exit(1);
    else if(choice=='S'||choice=='s')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tHey freind please enter your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s From The CEO Of This Code Saikat --------------------------",playername);
    printf("\n\n Some tips must be known to you before starting the game:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & INTERMIDIATE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your skill and");
    printf("\n    general knowledge. You are eligible to play the game if you give correct atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Intermidiate Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100000");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D or a,b,c and d for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST %s !!!!!!!!!!!!!",playername);
    printf("\n\n\n Press Y or y to start the game!\n");
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
     for(i=1;i<=6;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nNational bird of australia?");
		printf("\n\nA.Emu\t\tB.Peacock\n\nC.Crow\t\tD.Sparrow");
		if (toupper(getch())=='A')
			{
			    printf("\n\nDamm %s you are Right!!!",playername);
			    printf("\nNow please press any key for answering the next question.");
				count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nDear %s you are Wrong!!! The correct answer is A-Emu",playername);
		           printf("\nNow please press any key for answering the next question.");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nwho is prime minister in Britian");
		printf("\n\nA.Rishi Kumar\t\tB.Narendra Kumar\n\nC.Rishi Sunak\t\tD.Sam Sunak");
		if (toupper(getch())=='C')
			{
			printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			count++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nDear %s you are Wrong!!! The correct answer is C-Rishi Sunak",playername);
		       printf("\nNow please press any key for answering the next question.");
			   getch();
		       break;
			   }

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-Hayena",playername);
		       printf("\nNow please press any key for answering the next question.");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			count++;
			getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-Lucas Podolski",playername);
		       printf("\nNow please press any key for answering the next question.");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nDamm %s you are Right!!!",playername);
               printf("\nNow please press any key for answering the next question.");
			   count++;
               getch();
                break;}
        else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-Mt. Kanchanjungha",playername);
		       printf("\nNow please press any key for answering the next question.");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nNmae of Big B in Bollywood?");
		printf("\n\nA.Yo Yo honey Singer\t\tB.Arpit Das\n\nC.Akshay Kumar\t\tD.Amitabh Bachan");
		if (toupper(getch())=='D' )
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D.Amitabh Bachan0",playername);
		       printf("\nNow please press any key for answering the next question.");
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
     printf("\n\n\t** CONGRATULATION %s you are eligible to play the Intermidiate Level Game **",playername);
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
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch();
			 break;getch();}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is C-Cricket",playername);
		       printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nInstrument for calculating the Earthquake");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orthology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Seismology",playername);
		       printf("\nNow please press any key for answering the next question.");
			   getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nBengalis best game? ");
		printf("\n\nA.Swimming\t\tB.Hockey\n\nC.Cricket\t\tD.Football");
		if (toupper(getch())=='D')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D-Football",playername);
		       printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\How many college or universites under university of calcutta?");
		printf("\n\nA.200\t\tB.160\n\nC.152\t\tD.65");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch();
			 break;}
		else
		       {
                printf("\n\nDear %s you are Wrong!!! The correct answer is B-160",playername);
                printf("\nNow please press any key for answering the next question.");
				getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch(); 
			break;}
		else
		       {
		           printf("\n\nDear %s you are Wrong!!! The correct answer is B-Power",playername);
		           printf("\nNow please press any key for answering the next question.");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is BCobalt",playername);
		       printf("\nNow please press any key for answering the next question.");
			   goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National bird Name of Japan?");
		printf("\n\nA.Emu\t\tB.Green Pheasant\n\nC.Chill\t\tD.Critu");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-Green Pheasant",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWorld record of paper folding?");
		printf("\n\nA.6\t\tB.7\n\nC.12\t\tD.Depends on the size of paper");
		if (toupper(getch())=='C')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch(); break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is C-12",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Copenhagen",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch(); break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Nile",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch();
			 break;}
		else
              {printf("\n\nDear %s you are Wrong!!! The correct answer is C-Orange",playername);
			  printf("\nNow please press any key for answering the next question.");
			  getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nDamm %s you are Right!!!",playername);
			  printf("\nNow please press any key for answering the next question.");
			  countr++;getch();
			   break;}
		else
              {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Rome",playername);
			  printf("\nNow please press any key for answering the next question.");
			  getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D-France",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Devdas'?");
		printf("\n\nA.Sarat Chandra Chattopadhyay\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Rabindranath Tagore");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Sarat Chandra Chattopadhayay",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++;getch();
			 break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-AB",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;
			}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Light Year",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nNational animal in singapore");
		printf("\n\nA.Lion\t\tB.Tiger\n\nC.Deer\t\tD.Wolf");
		if (toupper(getch())=='A')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is A-Lion",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by____?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D-Anemometer",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is C-Kathmandu",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is B-Valves",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D-C.F.C",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
		if (toupper(getch())=='D')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is D-Serena Williams",playername);
		       printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nDamm %s you are Right!!!",playername);
			printf("\nNow please press any key for answering the next question.");
			countr++; getch();
			break;}
		else
		       {printf("\n\nDear %s you are Wrong!!! The correct answer is C-The King's Speech'",playername);
			   printf("\nNow please press any key for answering the next question.");
			   getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t****** CONGRATULATION DEAR PLAYER %s*******",playername);
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t****** CONGRATULATION %s******",playername);
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You for playing and become a winner in this game!!");
	}
	 else
{
	 printf("\n\n\t**** SORRY %s YOU DIDN'T WIN ANY CASH ****",playername);
	    printf("\n\t\t Thanks for your participation in this C programm quiz game");
	    printf("\n\t\t BETER LUCK NEXT TIME %S",playername);goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;
		}
		}
		return 0;
		}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*********************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*********************");
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
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, SIMPLE WARMUP ROUND & INTERMIDIATE ROUND");
    printf("\n >> In warmup round you will be asked a total of 6 questions to test your basic skills and general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t********BEST OF LUCK************");
	printf("\n\n\t**C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM and the CEO of this code is SAIKAT***");}

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
	    fclose(f);}
		}
