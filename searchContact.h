#ifndef SEARCH_CONTACT
#define SEARCH_CONTACT
#include <stdio.h>
#include <string.h>
#include "dataBase.h"

int main();

int searchContact(){
    //file open
   FILE *fptr = fopen("contact.txt","r");

    char name[50];
    char phone[50];
    int user_index =0;
    int contactFound =0;
    char user_search[50];
    //user search variable
    printf("Search Contact Name:");
    scanf("%s",&user_search);

   if(fptr != NULL){
   
    
    while(fscanf(fptr,"%s %s",name,phone) != EOF){
          strcpy(db[user_index].name,name);
          strcpy(db[user_index].phone,phone);
          user_index++;
    }
    
    //user search contact
    for(int i =0 ;i < user_index; i++){
       if(strcmp(db[i].name,user_search) == 0 ){
         printf("###Found Contact List###\n");
         printf("Name:%s Phone:%s\n",db[i].name,db[i].phone);
         contactFound =1;
       }
    }

    if(contactFound == 0){
      printf("No Contact Result!\n");
      main();
    }

         fclose(fptr);
   }else{
       printf("Your txt file have error!");
   }
}
#endif