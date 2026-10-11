#ifndef CONTACT_D
#define CONTACT_D
#include <stdio.h>

int displayContact(){
    FILE *fptr = fopen("contact.txt","r");
    int contactFound = 0;
    char name[50];
    char phone[50];

   if(fptr == NULL){
        printf("contact.txt has error");
   }else{
    printf("\n#####Contact List#####\n");
     while(fscanf(fptr,"%s %s\n", name,phone) != EOF){
        printf("Name:%s Phone:%s\n",name,phone);
        contactFound =1;
    }

    if(contactFound == 0)
    printf("No Contact History");

    
    fclose(fptr);
   }

}

#endif