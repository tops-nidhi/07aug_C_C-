#include<stdio.h>
int main() {
    int a, b;
    char choice;
    printf("Enter the first number: "); 
    scanf("%d", &a);
    printf("Enter the second number: "); 
    scanf("%d", &b);
    printf("\n================================MENU===================================\n");
printf("\n\t\t1.Addition\n\t\t2.Subtraction\n\t\t3.Multiplication\n\t\t4.Division\n\t\t5.Modulo\n");
    printf("Enter your choice: "); //to take a choice from the user
    scanf("%d",&choice);
    switch(choice) 	//switch case to execute different operations based on the input of the user
    {
        case 1:
            printf("\nAddition of a and b is: %d", a+b);
            break;
        case 2: 
            printf("\nSubtraction of the a and b is: %d", a-b);
            break;
        case 3: 
            printf("\nMultiplication of the a and b is: %d", a*b);
            break;
        case 4: 
            printf("\nDivision of the a and b is: %d", a/b);
            break;
        case 5: 
            printf("\nModulo of the a and b is: %d", a%b);
            break;
        default:
            printf("\nEnter valid choice......");
            break;
    }
    return 0;
}