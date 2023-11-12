//TODO: Infinite Loop Menu ->DONE!
//TODO: Levels functions
//TODO: Text files
//TODO: Open audio file with samples

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef enum{BEGINNER, EXPERIENCED, ADVANCED}levels;

void openFile(){
    
}
void GermanBeginner();
void GermanExperienced();
void GermanAdvanced();


int main(){
    char opt;
    int knowledge_lvl = 0;
    printf("Welcome to 'Learn Lang'!\n");
    printf("What language do you want lo learn ?\n");

while(1){

    printf("Type 'G' for German or 'I' for Italian: \n");
    scanf(" %c", &opt);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    switch (tolower(opt)){
        case 'g':
            printf("You chose German!\n");

            do{
                printf("What is you knowledge of German from 0 to 5? ");
                scanf("%d", &knowledge_lvl);
            } while (knowledge_lvl < 0 || knowledge_lvl > 5);
            
            if(knowledge_lvl <= 2)
                knowledge_lvl = 0;

            else if (knowledge_lvl <= 4)
                knowledge_lvl = 1;
            
            else
                knowledge_lvl = 2;

            switch (knowledge_lvl){
                case BEGINNER:
                    printf("You are a Beginner.\n");
                    break;

                case EXPERIENCED:
                    /* code */
                    printf("You are Experienced.\n");
                    break;

                case ADVANCED:
                    /* code */
                    printf("You are a Advanced.\n");
                    break;
                
                default:
                    break;
            }

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

void GermanBeginner(){

}