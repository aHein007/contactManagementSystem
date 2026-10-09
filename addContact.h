#ifndef CONTACT_ADD
#define CONTACT_ADD
#include "dataBase.h"


#include <stdio.h>


int addContact(){

    FILE *fptr = fopen("contact.txt","a");

    int name[50];
    char phone[20];

    printf("Please Enter Contact Name:");
    scanf("%s",name);

    printf("Please Enter Phone:");
    scanf("%s",&phone);

    if(fptr == NULL){
        printf("Your txt file have error");
    }else{
      fprintf(fptr,"%s , %s\n",name,phone);
    }



   fclose(fptr);

}

#endif