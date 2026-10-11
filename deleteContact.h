#ifndef DELETE_CONTACT
#define DELETE_CONTACT
#include <stdio.h>
#include "dataBase.h"

int deleteContact(){
    FILE *fptr = fopen("contact.txt","r");
  
    char name[50];
    char phone[50];
    char user_search[50];
    int delete_index =0;
    int delete_found =0;
    int choiceUser =0;

      printf("Enter delete Contact:");
      scanf("%s",user_search);

    if(fptr == NULL){
        printf("Your txt file have error");
    }else{
        while(fscanf(fptr,"%s %s",name,phone) != EOF){
            strcpy(db[delete_index].name,name);
            strcpy(db[delete_index].phone,phone);
            delete_index++;
        }

        fclose(fptr);
       
  
         FILE *fptr1= fopen("contact.txt","w");
        int i =0;
         printf("#####Update Contact List#####\n");
        while(i < delete_index){
            if(strcmp(db[i].phone,user_search) != 0){
               fprintf(fptr1,"%s %s\n",db[i].name,db[i].phone);
                printf("Name:%s Phone:%s\n",db[i].name,db[i].phone);
                
                delete_found = 1;
            }
            i++;

        }

        if(delete_found == 0)
            printf("No Contact to Delete!\n");
        else{
            printf("______________________________\n");
            printf("Contact Delete Successfully!\n");
            fclose(fptr1);
        }
        
    }

    
}

#endif