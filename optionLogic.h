#include <stdio.h>
#ifndef CONTACT_C
#define CONTACT_C
#include "addContact.h"


int option(int number){

    switch(number){
        case 1:
            addContact();
        break;
        case 2:
            printf("delete Contact");
        break;
        case 3:
            printf("search Contact");
        break;
        case 4:
            printf("display all contact");
        break;
        case 5:
            printf("Exit contact");
        break;
        default:
           printf("###Good Bye###");
        break;

        
    }
    return number;
}

#endif