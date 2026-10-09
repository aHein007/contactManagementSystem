#include <stdio.h>
#include "optionLogic.h"
#include "dataBase.h"
#include "addContact.h"
#include "dataBase.h"

int option(int choiceNumber);


   



int main(){
    int choiceNumber = 0; 

    printf("\n####Welcome to Our Contact Management System####\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact\n");
    printf("3. Search Contact\n");
    printf("4. Display All Contact\n");
    printf("5. Exits\n");

    printf("Choose Number:");
    scanf("%d",&choiceNumber);

   int optionNumber = option(choiceNumber);

 



    return 0;
}