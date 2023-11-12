// TODO: Infinite Loop Menu

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
    char opt;
    printf("Welcome to 'Learn Lang'!\n");
    printf("What language do you want lo learn ?\n");

while(1){

    printf("Type 'G' for German or 'I' for Italian: \n");
    scanf(" %c", &opt);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    switch (tolower(opt))
    {
    case 'g':
        printf("You chose German!\n");








        
        break;
    case 'i':
        printf("You chose Italian!\n");
        break;
    
    default:
        printf("Invalid option.\n");
        break;
    }



}




    return 0;
}