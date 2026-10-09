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

    printf("Please Enter Contact Name:");
    scanf("%s",name);

    printf("Please Enter Phone:");
    scanf("%s",phone);

    if(fptr == NULL){
        printf("Your txt file have error");
    }else{
      fprintf(fptr,"%s %s\n",name,phone);

      int db_counter =0;
      strcpy(db[db_counter].name,name);
      strcpy(db[db_counter].phone,phone);
      db_counter++;

      printf("Your Contact added successfully!");
      fclose(fptr);
    }




}

#endif