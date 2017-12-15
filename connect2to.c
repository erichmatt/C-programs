#include<stdio.h>

int input()
{
    int input;
    scanf("%d", &input);
    
    return input;
}

int drop(int choice)
{
    printf("your choice was %d \n",choice);
    return 0;
}


int main()
{
    int tries;
    tries = 0;
    while(tries < 10)
    {
        
        printf("Enter 1 or 2: \n");
        int i;
        i = input();
        if (i==1)
        {
            drop(i);
            return 0;
        }
        else if (i==2)
        {
            drop(i);
            return 0;
        }
        else 
        {
            printf("Please enter a valid choice \n");
            tries ++;
            printf("You have taken %d tries \n", tries);
        }
        
    }
    printf("You have taken %d tries, and you still couldn't pick 1 or 2. I am done with you \n", tries);
    return 0;
}


