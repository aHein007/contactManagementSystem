#ifndef CONTACT_ADD
#define CONTACT_ADD
#include "dataBase.h"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addContact(){

    FILE *fptr = fopen("contact.txt","a");

    char name[50];
    char phone[50];
     int db_counter =0;

    printf("Please Enter Contact Name:");
    scanf("%s",name);

    printf("Please Enter Phone:");
    scanf("%s",phone);

    if(fptr == NULL){
        printf("Your txt file have error");
    }else{
    fprintf(fptr,"%s %s\n",name,phone);
    printf("Your Contact added successfully!\n");
       
   
      //show for contact list
    int  i =0;
    FILE *fptr1 = fopen("contact.txt","r");
     printf("#####Add Contact List#####\n");

    while(fscanf(fptr1,"%s %s",name,phone ) != EOF){
        strcpy(db[i].name,name);
        strcpy(db[i].phone,phone);

        printf("Name:%s Phone:%s\n",db[i].name,db[i].phone);
         i++;
    }

   
     fclose(fptr);
  
    }




}

#endif