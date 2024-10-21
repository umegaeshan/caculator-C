#include <stdio.h>


int main() {

float ans;
char history[100];
char answer[100];
int run;
printf("Insert Run count = ");

scanf("%d",&run);

for(int j=0;j<run;j++)
{

 printf("\n");
    printf("*****************************\n");
    printf("\n-------  Operations--------\n");
    printf("Addition \t->  1\n");
    printf("Subtraction \t->  2 \n");
    printf("Multiplication \t->  3\n");
    printf("Division \t->  4\n");
    printf("Power    \t -> 5\n");
    printf("History   \t  -> 6 \n");
    printf("\n******************************\n");

    printf("\n");
    float num1;
    printf("Inset Number 1 : ",num1);
    scanf("%f",&num1);

if(num1==6)
{
        printf("History ");

            for(int i=0;i<run;i++)
        {
            printf("%d",history[i]);
        }

        for(int i=0; i<run;i++)
{
    scanf("%d",&history[i]);
}



}

else
{



    float num2;
    printf("Insert number 2 :",num2);
    scanf("%f",&num2);

 int operation;


    printf("\n******************************\n");
    printf("\n");
    printf("Select your operations (Ex : 1) :",operation);
    scanf("%d", &operation);




    switch(operation)
    {
    case 1:
              ans=num1+num2 ;

              break;
    case 2:
             ans=num1-num2 ;

             break;
    case 3:
             ans=num1*num2;

             break;
    case 4:
              ans=num1/num2;

              break;


    case 5:
              ans=num1*num2   ;
              break;



    default:
               printf("Invalid Operator \t");
               break;
    }
printf("Answer is :  %.2f \n\n", ans);


}
}
    return 0;
}
