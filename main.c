#include <stdio.h>
#include <string.h>
int main() {
    int first_number;
    int second_number;
    char op[64];
    printf("Enter Operator\n");
    fgets(op,sizeof(op),stdin);
    op[strlen(op)-1] = '\0';
    if (strcmp(op,"*") == 0) {
     printf("Enter First Number\n ");
     scanf("%d",&first_number);
     printf("Enter Second Number\n");
     scanf("%d",&second_number);
     int calculate;
     calculate = first_number * second_number;
     printf("The Total Is %d %s %d = %d",first_number,op,second_number,calculate);  
    }
    else if (strcmp(op,"+") == 0) {
     printf("Enter First Number\n ");
     scanf("%d",&first_number);
     printf("Enter Second Number\n");
     scanf("%d",&second_number);
     int calculate;
     calculate = first_number + second_number;
     printf("The Total Is %d %s %d = %d",first_number,op,second_number,calculate);  
    }
    else if (strcmp(op,"-") == 0) {
     printf("Enter First Number\n ");
     scanf("%d",&first_number);
     printf("Enter Second Number\n");
     scanf("%d",&second_number);
     int calculate;
     calculate = first_number - second_number;
     printf("The Total Is %d %s %d = %d",first_number,op,second_number,calculate);  
    }
    else if (strcmp(op,"/") == 0) {
     printf("Enter First Number \n");
     scanf("%d",&first_number);
     printf("Enter Second Number\n");
     scanf("%d",&second_number);
     int calculate;
     calculate = first_number / second_number;
     printf("The Total Is %d %s %d = %d",first_number,op,second_number,calculate);  
    }
    else{
        printf("Operator Not Found");
    }

}
