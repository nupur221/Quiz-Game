#include <stdio.h>
int main()
{
   char questions[][100] = {"1)Who is called a rebel poet?\n ",
                            "2)Who is the architect of Shaheed Minar?\n ",
                            "3)Which of the following strings is a palindrome?\n ",
                            "4)The Laws of Electromagnetic Induction were given by?\n\n"};


   char options[][100] = {"a. Kazi Nazrul Islam." , "b. Jashim Uddin." , "c. Helal Hafiz." , "d. Nirmalendu Gun.\n\n",
                          "a. Shamsur Rahman." , "b. Hasanul Haque." , "c. Altaf Mahmud." , "d. Hamidur Rahman.\n\n",
                          "a. madam." , "b. level." , "c. a+b." ,"d. Education.\n\n",
                          "a. Faraday"  , "b. Tesla." , "c. Maxwell." , "d. Coulomb.\n\n" };

   char answers[4] = {'a' , 'd' , 'c' ,'a'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

   char guess;
   int score;

   printf("                       Quiz Game       \n\n");
   printf("          --------------------------------");

   printf("\n\t\t\t  WELCOME ");
   printf("\n\t\t\t     to ");
   printf("\n\t\t\t  THE GAME\n\n ");
   for(int i=0; i<numberOfQuestions;i++)
     {
      printf("%s\n" , questions[i]);

       for(int j=(i*4);j<(i*4)+4; j++)
        {
            printf("%s\n" , options[j]);
        }

    printf("Answer: ");
    scanf("%c" , &guess);
    scanf("%c");

    if(guess==answers[i])
        {
         printf("Correct Answer \n\n");
            score++;
        }

    else
    {
        printf("Wrong answer \n\n");
    }

 }

  printf("\n\nFinal score: %d out of %d\n" , score , numberOfQuestions);
   return 0;
}
