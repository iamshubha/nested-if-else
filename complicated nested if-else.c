#include"stdio.h"
int main(){
    int i;
    printf("which class do you read:");
    scanf("%d",&i);

    if (i==12)
    {
        printf("You are the last year in this school \n");
        int r;
        printf("What is your Roll number: ");
        scanf("%d",&r);

        if (r<=10)
        {
            printf("You are good student\n");
        }
        else if (r<=30)
        {
            printf("You are regular student good\n");
        }
        else
        {
            printf("Read carefully and get proper study \n");
        }
        
        
        

    }
    else
    {
        printf("You are not eligiable for that\nThank You\n");
    }
    
    
}