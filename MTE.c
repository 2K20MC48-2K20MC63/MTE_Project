#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef struct voter_information
{
    char aadhar[20];
    char name[50];
    char birth_date[15];
    struct voter_information *next;
} node;

node *head;
node *space,*start=NULL;
node *search(char x[],char y[],char z[],node *,int *);
node *voter_insert(node *);
node *main_logs(node *);
 void admin();
 void winner();
 	void exi();
 	void voting();
 	void not_again();
 	void stop();
 	void show();


int count=0,R=3,vote=0;
int vote1=0,vote2=0,vote3=0,vote4=0,vote5=0;
int main()
{
	while(1){

    system("cls");
    printf("\n\n\n");
    printf("\t            ____WELCOME TO ONLINE VOTING SYSTEM_____        \n\n");

    printf("\t           *****************************************       \n\n\n\n\n");
    printf("         \t _____Enter One(1) for logging vote main Logs______    \n\n\n");
    printf("         \t   _____Project by 2k20/Mc/48 and 2k20/MC/63_____     \n\n");
    int input;

    scanf("%d",&input);
    if(input==1)
    {
      start=  main_logs(start);
    }

}
    return 0;
}

node *main_logs(node *start)
{
    system("cls");
    printf("\n\n\n");
    printf("        \t\t\t1. FOR VOTE ENTRY     \n");
    
    printf("        \t\t\t2. FOR ADMIN PANEL    \n");
    
    printf("        \t\t\t3. FOR WINNER         \n");
  // printf("    \t IF YOUR CREDENTIALS MATCHES WITH THOSE IN THE VOTER LIST THEN ONLY YOU CAN GIVE YOUR VOTE OTHERWISE YOU CAN NOT    \n\n\n");
    
    printf("    \t ____choice one of above options_____\n\n\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
       start= voter_insert(start);
    }
    if(choice==2)
    {
      admin();
    }
    if(choice==3)
    {
      winner();
    }
    if(choice!=1||choice!=2||choice!=3)
    {
    	main_logs(start);
	}


    return start;
}


node *voter_insert(node *start)
{
	int UNIVERSAL=0;
int *z;
 z = &UNIVERSAL;
     node *temp;
     char name[50],birth_date[15],aadhar[20];
     system("cls");
     printf("\n\n\n\n");
     printf(" IF AADHAR ID, YOUR NAME AND YOUR DATE OF BIRTH MATCHES THEN YOU CAN GIVE YOUR VOTE OTHERWISE NOT\n\n");
     
     printf(" If you do wrong %d times, The Portal Will Be Closed Automatically\n\n\n",R);
     
     
     
     printf("\t\t\tEnter your AADHAR ID number  ");
     gets(aadhar);
     gets(aadhar);
     printf("\t\t\tEnter Your NAME   ");
     gets(name);
     printf("\t\t\tEnter Your BIRTH DATE  in dd-mm-yyyy format");
     gets(birth_date);
     temp=(node *)malloc(sizeof(node));
     strcpy(temp->aadhar,aadhar);
     strcpy(temp->name,name);
     strcpy(temp->birth_date,birth_date);
     temp->next=NULL;
     head=temp;
     while(temp!=NULL)
     {
         if((strcmp(temp->aadhar,"10001")==0&& strcmp(temp->name,"gaurav")==0 &&strcmp(temp->birth_date,"01-01-2000")==0) ||
         (strcmp(temp->aadhar,"10002")==0&& strcmp(temp->name,"Goutam Kumar Bhadani")==0 &&strcmp(temp->birth_date,"01-01-1999")==0)||
         (strcmp(temp->aadhar,"10003")==0&& strcmp(temp->name,"Gautam Kumar")==0 &&strcmp(temp->birth_date,"12-10-1999")==0)||
         (strcmp(temp->aadhar,"10004")==0&& strcmp(temp->name,"Kundan Kumar")==0 &&strcmp(temp->birth_date,"08-12-1999")==0)||
         (strcmp(temp->aadhar,"10005")==0&& strcmp(temp->name,"Aniket Arora")==0 &&strcmp(temp->birth_date,"28-08-1999")==0)||
         (strcmp(temp->aadhar,"10006")==0&& strcmp(temp->name,"Dipika Singh")==0 &&strcmp(temp->birth_date,"20-10-2000")==0)||
         (strcmp(temp->aadhar,"10007")==0&& strcmp(temp->name,"Avinash Kumar")==0 &&strcmp(temp->birth_date,"02-03-1999")==0)||
         (strcmp(temp->aadhar,"10008")==0&& strcmp(temp->name,"Ravi Raj")==0 &&strcmp(temp->birth_date,"26-12-1999")==0)||
         (strcmp(temp->aadhar,"10009")==0&& strcmp(temp->name,"Shubham Kumar")==0 &&strcmp(temp->birth_date,"02-01-1999")==0)||
         (strcmp(temp->aadhar,"10010")==0&& strcmp(temp->name,"Subham Kumar")==0 &&strcmp(temp->birth_date,"03-01-1999")==0))

         {
         	R=3;
         	start=search(temp->aadhar,temp->name,temp->birth_date,start,&UNIVERSAL);

         	if(UNIVERSAL==0)
            {
            	 voting();
			}
            else
             {
             	not_again();
			 }
           }
         else
            {
              R--;
         if(R==0)
         {
             stop();
             break;
         }
         printf("\n\n\n\n");
         printf("\tYour AADHAR ID or NAME or DATE OF BIRTH is wrong\n\n");
         
         printf("\t\t\tPlz Re-Enter\n\n");
         
         system("pause");
        start= main_logs(start);
            }
            temp=temp->next;
     }
     return start;
}


void voting()
{
     system("cls");
    printf("\n\n\n\n");
    printf("\t\t     * * * * * LIST OF CANDIDATES * * * * * \n\n\n");
    
    printf("\t\t\t NAME     & THEIR RESPECTIVE      SYMBOL\n\n");
    
    printf("\t\t\t 1.MODI JI                  1.CAT\n");
    
    printf("\t\t\t 2.LALU                     2.SAMOSA\n");
    
    printf("\t\t\t 3.KEJU                     3.KATORA\n");
    
    printf("\t\t\t 4.MUNI JI                  4.BANDOOK\n");
    
    printf("\t\t\t 5.Kartik PATIYAL           5.Wheel\n\n\n");



       int choice,j;
       printf("\t\t\t Plzz, \n");
       printf("\t\t\t Enter Your Choice \n");
       for(j=1;j<=1;j++)
       {
           scanf("%d",&choice);

           if(choice==1)
           {
               vote1++;
               printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MODI JI \n");
               break;

           }
           if(choice==2)
           {
               vote2++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO LALU\n");
               break;

           }
           if(choice==3)
           {
               vote3++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO KEJU\n");
               break;

           }
           if(choice==4)
           {
               vote4++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO MUNI JI \n");
               break;
           }
           if(choice==5)
           {
               vote5++;
                printf("\n\n\t\t\t\tYOU HAVE SUCCESSFULLY GIVEN YOUR VOTE TO Kartik PATIYAL \n");
               break;
           }
            if(choice!=1||choice!=2||choice!=3||choice!=4||choice!=5)
           {
           	printf("\n\t\t_________INVALID CHOICE ENTERED_________\t\t\n");
           	printf("\n\t\t\t___ENTER AGAIN___\t\t\t\n");
		   }



       }
	   printf("\n\n____________THANK YOU_____________\n\n");
	   printf("press any key");
	   getch();
}

 void admin()
 {
     int n;
     printf("\n\n\n\n");
     printf("\t\t\t\t\tEnter Your Password To Unlock The Admin Panel\n\n");
     scanf("%d",&n);
     if(n==2000)
     {
         show();

     }
     else
     {
         printf("Wrong Password\n");
     }
 }

  void show()
  {
  	int G;
      system("cls");

      printf("\n\n\n\n");
      printf("\t\t\tPresent Vote Count :\n\n");

      printf("\t\t\t  MODI JI is on     %d Votes\n",vote1);
      
      printf("\t\t\t  LALU is on      %d Votes\n",vote2);
      
      printf("\t\t\t  KEJU is on       %d Votes\n",vote3);
      
      printf("\t\t\t  MUNI JI  is on      %d Votes\n",vote4);
      
      printf("\t\t\t  Kartik PATIYAL  is on     %d Votes\n\n\n\n",vote5);
      


      printf("\t\t\t\t\tEnter Any Key For Main Logs\n\n\t\t\t\t\t\t\tOR\n\n\t\t\t\t\tENTER THE SPECIAL PASSWORD TO CLOSING VOTING PORTAL\n ");
    scanf("%d",&G);
    if(G==2000)
    exi();
    else
    main_logs(start);

  }

   void winner()
   {
       system("cls");
       printf("\n\n\n\n");
       if(vote2<vote1 && vote3< vote1 && vote4<vote1 && vote5<vote1)
        printf("\t\t\tThe present Winner is MODI JI and he has got %d votes\n\n\n\n",vote1);

       if(vote1<vote2 && vote3< vote2 && vote4<vote2 && vote5<vote2)
        printf("\t\t\tThe present Winner is LALU and he has got %d votes\n\n\n\n",vote2);

        if(vote1<vote3 && vote2< vote3 && vote4<vote3 && vote5<vote3)
        printf("\t\t\tThe present Winner is KEJU and he has got %d votes\n\n\n\n",vote3);

        if(vote1<vote4 && vote2< vote4 && vote3<vote4 && vote5<vote4)
        printf("\t\t\tThe present Winner is MUNI JI and She has got %d votes\n\n\n\n",vote4);

        if(vote1<vote5 && vote2< vote5 && vote3<vote5 && vote4<vote5)
        printf("\t\t\tThe present Winner is Kartik PATIYAL and he has got %d votes\n\n\n\n",vote5);

        printf("\t\t\t\tEnter Any Key for Main Log\n\n");
        getch();
        main_logs(start);

   }

   void stop()
   {
       system("cls");

       printf("\n\n\n\n");
       printf("\t\t\t (:-SORRY YOU ENTERED WRONG CREDENTIALS FOR THREE(3) TIMES IN A ROW -:) \n\n\n");
    
       printf("\t\t\t Plz try again After A few Moment\n\n\n");
       
       printf("\t\t\t * * *Thank You* * *  \n\n\n");
       
       printf("press any key");
       getch();

   }

   void not_again()
   {
        int A;
		system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t        ***YOU HAVE GIVEN YOUR VOTE SUCCESSFULLY***       \n\n\n");
        
        printf("\t\t\t        ***YOU CANNOT GIVE YOUR VOTE MORE THAN ONCE***     \n\n\n");
        
        printf("\t\t\t If You want to see present winner Enter One(1) or Enter Any Other Key for Main  Logs\n\n");
        

        scanf("%d",&A);
        if(A==1)
        {
            winner();
        }
        else
        {
            main_logs(start);
        }

   }

   void exi()
   {
       system("cls");

       printf("\n\n\n\n\n");
       
       printf("\t\t\t        ***YOU ARE NOW EXITING THE PORTAL***       \n\n\n");
       
       printf("\t\t\t * * *Thank You For Using This ONLINE PLATFORM For VOTING* * *  \n\n\n");
       
       exit(0);
   }
node *search(char x[],char y[],char z[],node *start,int *Y)
{
	 *Y=0;
  node *t,*space;
  if(start==NULL)
  {
      space=(node*)malloc(sizeof(node));
     strcpy(space->aadhar,x);
     strcpy(space->name,y);
     strcpy(space->birth_date,z);

      start=space;
      space->next=NULL;

  }
  else
  {
      t=start;
      while(t!=NULL)
       {
          if((strcmp(t->aadhar,x)==0&& strcmp(t->name,y)==0 &&strcmp(t->birth_date,z)==0))
          {
          	*Y=1;

          	break;
          }
              t=t->next;
    	}

          if(*Y==0)
          {

          	space=(node*)malloc(sizeof(node));

       		strcpy(space->aadhar,x);

       		strcpy(space->name,y);

       		strcpy(space->birth_date,z);
	        t=space;
    	    space->next=NULL;

    	}
  }
  return start;
 }

