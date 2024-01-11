#include <stdio.h>
#include <string.h>

typedef struct Account
{
    char username[50];
    int score;
} Ac;

void saveUser(int *index, char new_user[], Ac user[])
{
    if (*index < 50)
    {
        for (int i = 0; i < *index; i++)
        {
            if (strcmp(new_user, user[i].username) == 0)
            {
                printf("This Username Already Not Available\n");
                return;
            }
        }

        strcpy(user[*index].username, new_user);
        user[*index].score = 0;
        printf("The User Created Successfully\n");
        (*index)++;
    }
    else
    {
        printf("Sorry, Users Are Full.\n");
    }
}

void scoreDe(char new_user[], Ac user[])
{
    for (int i = 0; i < 50; i++)
    {
        if (strcmp(user[i].username, new_user) == 0)
        {
            user[i].score -= 5;
            printf("Your Score Is: %d\n", user[i].score);
            return;
        }
    }
    printf("User not found.\n");
}

void scoreIn(char new_user[], Ac user[])
{
    for (int i = 0; i < 50; i++)
    {
        if (strcmp(user[i].username, new_user) == 0)
        {
            user[i].score += 5;
            printf("Your Score Is: %d\n", user[i].score);
            return;
        }
    }
    printf("User not found.\n");
}

void scoreIs(char new_user[], Ac user[])
{
    for (int i = 0; i < 50; i++)
    {
        if (strcmp(new_user, user[i].username) == 0)
        {
            printf("\n");
            printf("Your Username - %s\n", user[i].username);
            printf("Your Score - %d\n", user[i].score);
            return;
        }
    }
    printf("User not found.\n");
}

int main()
{
    int op;
    char new_user[50];
    int index = 0;
    Ac user[50];
    int ans;

    do
    {
        printf("\n");
        printf("      Quiz Game    \n");
        printf("1 - Start The Game\n");
        printf("2 - Show My Score\n");
        printf("0 - Exit\n");
        printf("= ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n");
            printf("Enter User Name:  ");
            scanf("%49s", &new_user);
            saveUser(&index, new_user, user);

            printf("\n");
            printf("Q1 . What is the capital of Japan?\n");
            printf("1 -> Beijing\n");
            printf("2 -> Tokyo\n");
            printf("3 -> Seoul\n");
            printf("4 -> Bangkok\n");

            scanf("%d", &ans);
            switch (ans)
            {
            case 1:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 2:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 3:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }

            printf("\n");
            printf("Q2 . Which element has the chemical symbol 'H'?\n");
            printf("1 -> Hydrogen\n");
            printf("2 -> Helium\n");
            printf("3 -> Carbon\n");
            printf("4 -> Nitrogen\n");
            scanf("%d", &ans);
            switch (ans)
            {
            case 1:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 2:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 3:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }

            printf("\n");
            printf("Q3 . Who wrote 'Romeo and Juliet'?\n");
            printf("1 -> Charles Dickens\n");
            printf("2 -> William Shakespeare\n");
            printf("3 -> Jane Austen\n");
            printf("4 -> Mark Twain\n");
            scanf("%d", &ans);
            switch (ans)
            {
            case 1:
                printf("Wrong Option\n ");
                scoreDe(new_user, user);
                break;
            case 2:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 3:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }

            printf("\n");
            printf("Q4 . What is the largest ocean on Earth?\n");
            printf("1 -> Atlantic Ocean\n");
            printf("2 -> Indian Ocean\n");
            printf("3 -> Pacific Ocean\n");
            printf("4 -> Arctic Ocean\n");
            scanf("%d", &ans);
            switch (ans)
            {
            case 1:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 2:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 3:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }

            printf("\n");
            printf("Q5 . In which year did the Titanic sink?\n");
            printf("1 -> 1905\n");
            printf("2 -> 1912 \n");
            printf("3 -> 1920\n");
            printf("4 -> 1931\n");
            scanf("%d", &ans);
               switch (ans)
            {
            case 1:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 2:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 3:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }
        printf("Q6 . Which planet is known as the 'Red Planet'?\n");
        printf("1 -> Mars \n");
        printf("2 -> Venus \n");
        printf("3 -> Jupiter\n");
        printf("4 -> Saturn\n");
        scanf("%d",&ans);
        switch (ans)
            {
            case 1:
                printf("Right Option ");
                scoreIn(new_user, user);
                break;
            case 2:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 3:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            case 4:
                printf("Wrong Option ");
                scoreDe(new_user, user);
                break;
            default:
                printf("Wrong Option Selectet ");
                break;
            }
            printf("\n");
        printf("Q7 . What is the powerhouse of the cell?\n");
        printf("1 -> Nucleus \n");
        printf("2 -> Mitochondria  \n");
        printf("3 -> Ribosome\n");
        printf("4 -> Endoplasmic reticulum\n");
        scanf("%d",&ans);
         switch (ans)
        {
        case 1:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 2:
        printf("Right Option ");
        scoreIn(new_user, user);
            break;
        case 3:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 4:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        default:
        printf("Wrong Option Selectet ");
            break;}
        printf("\n");
        printf("Q8 . Who painted the Mona Lisa?\n");
        printf("1 -> Vincent van Gogh \n");
        printf("2 -> Pablo Picasso  \n");
        printf("3 -> Leonardo da Vinci\n");
        printf("4 -> Michelangelo\n");
        scanf("%d",&ans);
         switch (ans)
        {
        case 1:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 2:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 3:
        printf("Right Option ");
        scoreIn(new_user, user);
            break;
        case 4:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        default:
        printf("Wrong Option Selectet ");
            break;}
            printf("\n");
        printf("Q9 . Which programming language is known for its readability and simplicity?\n");
        printf("1 -> Java \n");
        printf("2 -> Python  \n");
        printf("3 -> C++\n");
        printf("4 -> Ruby\n");
        scanf("%d",&ans);
         switch (ans)
        {
        case 1:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 2:
        printf("Right Option ");
        scoreIn(new_user, user);
            break;
        case 3:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 4:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        default:
        printf("Wrong Option Selectet ");
            break;}
            printf("Q10 . What is the largest mammal on land?\n");
        printf("1 -> Elephant  \n");
        printf("2 -> Giraffe  \n");
        printf("3 -> Blue Whale\n");
        printf("4 -> Rhinoceros\n");
        scanf("%d",&ans);
         switch (ans)
        {
        case 1:
        printf("Right Option ");
        scoreIn(new_user, user);
            break;
        case 2:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 3:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        case 4:
        printf("Wrong Option ");
        scoreDe(new_user, user);
            break;
        default:
        printf("Wrong Option Selectet ");
            break;}

            break;
        case 2: 
        printf("\n");
        printf("Enter Username: ");
        scanf("%s",&new_user);
        scoreIs(new_user , user);
        
        }
    } while (op != 0);
    
}
