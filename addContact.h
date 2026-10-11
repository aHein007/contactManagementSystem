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
      fclose(fptr);
    }




}

#endif