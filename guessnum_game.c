#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;

    int no_of_guesses = 0;

    int guessed_number;

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guessed_number);

        if (guessed_number > randomnumber)
        {
            printf("lowrr the number \n");
        }
        else if (guessed_number < randomnumber)

        {
            printf("increase the number \n");
        }
        else
        {
            printf("congratulations! ");
        }
        no_of_guesses++;

    } while (guessed_number != randomnumber);

    printf("you guessed the number in %d attempts \n", no_of_guesses);


return 0;

}
